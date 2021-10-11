#include "semantic_analysis.h"
#include "syntatic_tree.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check_redeclared(T_Symbol symbol_table[], char* identifier, int last_pos, int current_scope) {
    for(int i = 0; i <= last_pos; i++) {
        if( (strcmp(identifier, symbol_table[i].content) == 0) && (current_scope == symbol_table[i].scope) ) {
            return 1;
        }
    }
    return 0;
}

int variable_unavailable(T_Symbol symbol_table[], T_Node* node, int last_pos, int stack_top, int scope_stack[]) {
    for(int i = stack_top; i >= 0; i--) {
        for(int j = 0; j <= last_pos; j++) {
            if(strcmp(node->text, symbol_table[j].content) == 0 && symbol_table[j].scope == scope_stack[i]) {
                node->symbol_table_pointer = &symbol_table[j];
                strcpy(node->const_type, symbol_table[j].type);
                return 0;
            }
        }
    }
    return 1;
}

void increment_params_number(T_Symbol symbol_table[], int symbol_table_idx) {
    symbol_table[symbol_table_idx].num_params++;
}

int main_exists(T_Symbol symbol_table[], int table_size) {
    for(int i = 0; i < table_size; i++) {
        if(strcmp(symbol_table[i].content, "main") == 0 && symbol_table[i].scope == 0) {
            return 1;
        }
    }
    return 0;
}

int count_function_params(T_Node* node) {
    if(!node) return 0;

    if(node->child[0] == NULL || strcmp(node->text, "function_args") != 0) return 0;
    
    return 1 + count_function_params(node->child[0]);
}

int check_number_of_params(T_Node* node, T_Symbol symbol_table[], int symbol_table_size, char* identifier) {
    int args_count = count_function_params(node);
    int expected_params_qt = -1;

    for(int i = 0; i < symbol_table_size; i++) {
        if(strcmp(symbol_table[i].content, identifier) == 0) {
            expected_params_qt = symbol_table[i].num_params;
        }
    }

    return expected_params_qt == args_count;
}

int expression_is_unary_function(T_Node* node, T_Symbol symbol_table[], int symbol_table_size) {
    if(!node)
        return 0;

    if(!node->is_terminal)
        return expression_is_unary_function(node->child[0], symbol_table, symbol_table_size);

    if(strcmp(node->rule, "identifier") == 0) {
        for(int i = 0; i < symbol_table_size; i++) {
            if(strcmp(symbol_table[i].content, node->text) == 0) {
                return symbol_table[i].num_params == 1;
            }
        }
    }

    return 0;     
}

int valid_unary_operation(char* operator, T_Node* node) {
    T_Node* firstChild = node->child[0];
    
    if(strcmp(operator, "+") == 0 || strcmp(operator, "-") == 0 ) {
        if(strcmp(firstChild->const_type, "int") == 0 || strcmp(firstChild->const_type, "float") == 0) {
            strcpy(node->const_type, firstChild->const_type);
            return 1;
        } 
    } else if(strcmp(operator, "%") == 0) {
        if(strcmp(firstChild->const_type, "int list") == 0 || strcmp(firstChild->const_type, "float list") == 0) {
            strcpy(node->const_type, firstChild->const_type);
            return 1;
        } 
    } else if(strcmp(operator, "?") == 0) {
        if(strcmp(firstChild->const_type, "int list") == 0) {
            strcpy(node->const_type, "int");
            return 1;
        } else if(strcmp(firstChild->const_type, "float list") == 0) {
            strcpy(node->const_type, "float");
            return 1;
        }
    } else if(strcmp(operator, "!") == 0) {
        if(strcmp(firstChild->const_type, "int") == 0 || strcmp(firstChild->const_type, "float") == 0) {
            strcpy(node->const_type, "int");
            return 1;
        } else if(strcmp(firstChild->const_type, "int list") == 0 || strcmp(firstChild->const_type, "float list") == 0) {
            strcpy(node->const_type, firstChild->const_type);
            return 1;
        }
    }

    return 0;
}

int valid_binary_operation(char* operator, T_Node* operation, T_Node* left_operand, T_Node* right_operand) {
    // ----------------------------------- OPERAÇÕES ARITMÉTICAS: +, -, *, / -------------------------------------------------
    if(strcmp(operator, "+") == 0 || strcmp(operator, "-") == 0 || strcmp(operator, "*") == 0 || strcmp(operator, "/") == 0) {
    
        if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "float");
            create_casting_node(operation, left_operand, "int->float", "float", 1);
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "float");
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "float");
            create_casting_node(operation, right_operand, "int->float", "float", 0);
            return 1;
        }

        return 0;
    }
    // --------------------------------------- FIM OPERAÇÕES ARITMÉTICAS -----------------------------------------------------

    // ---------------------------------------------- ATRIBUIÇÃO --------------------------------------------------------------
    if(strcmp(operator, "=") == 0) {
        if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "int");
            create_casting_node(operation, right_operand, "float->int", "int", 0);
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "float");
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "float");
            create_casting_node(operation, right_operand, "int->float", "float", 0);
            return 1;
        } else if(strcmp(left_operand->const_type, "int list") == 0 && strcmp(right_operand->const_type, "int list") == 0) {
            strcpy(operation->const_type, "int list");
            return 1;
        } else if(strcmp(left_operand->const_type, "int list") == 0 && strcmp(right_operand->const_type, "NIL") == 0) {
            strcpy(operation->const_type,"int list");
            strcpy(right_operand->const_type,"int list");
            return 1;
        } else if(strcmp(left_operand->const_type, "float list") == 0 && strcmp(right_operand->const_type, "float list") == 0) {
            strcpy(operation->const_type, "float list");
            return 1;
        } else if(strcmp(left_operand->const_type, "float list") == 0 && strcmp(right_operand->const_type, "NIL") == 0) {
            strcpy(operation->const_type,"float list");
            strcpy(right_operand->const_type,"float list");
            return 1;
        }
        return 0;
    }
    // --------------------------------------------- FIM ATRIBUIÇÃO -----------------------------------------------------------

    // --------------------------------------------- EXPRESSÕES RELACIONAIS (>, <, >=, <=) ---------------------------------------------------
    if(strcmp(operator, ">") == 0 || strcmp(operator, "<") == 0 || strcmp(operator, ">=") == 0 || strcmp(operator, "<=") == 0) {
        if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "int");
            create_casting_node(operation, left_operand, "int->float", "float", 1);
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "int");
            create_casting_node(operation, right_operand, "int->float", "float", 0);
            return 1;
        } else if(strcmp(left_operand->const_type, "int list") == 0 && strcmp(right_operand->const_type, "int list") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "int list") == 0 && strcmp(right_operand->const_type, "NIL") == 0) {
            strcpy(operation->const_type, "int");
            strcpy(right_operand->const_type, "int list");
            return 1;
        } else if(strcmp(left_operand->const_type, "float list") == 0 && strcmp(right_operand->const_type, "float list") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "float list") == 0 && strcmp(right_operand->const_type, "NIL") == 0) {
            strcpy(operation->const_type, "int");
            strcpy(right_operand->const_type, "float list");
            return 1;
        } else if(strcmp(left_operand->const_type, "NIL") == 0 && strcmp(right_operand->const_type, "int list") == 0) {
            strcpy(operation->const_type, "int");
            strcpy(left_operand->const_type, "int list");
            return 1;
        } else if(strcmp(left_operand->const_type, "NIL") == 0 && strcmp(right_operand->const_type, "float list") == 0) {
            strcpy(operation->const_type, "int");
            strcpy(left_operand->const_type, "float list");
            return 1;
        }
        return 0;
    }
    // ---------------------------------------------- FIM EXPRESSÕES RELACIONAIS -----------------------------------------------

    // --------------------------------------------- EXPRESSÕES DE COMPARAÇÃO (==, !=) --------------------------------------------------
    if(strcmp(operator, "==") == 0 || strcmp(operator, "!=") == 0) {
        if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "int");
            create_casting_node(operation, left_operand, "int->float", "float", 1);
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "int");
            create_casting_node(operation, right_operand, "int->float", "float", 0);
            return 1;
        } else if(strcmp(left_operand->const_type, "int list") == 0 && strcmp(right_operand->const_type, "int list") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "int list") == 0 && strcmp(right_operand->const_type, "NIL") == 0) {
            strcpy(operation->const_type, "int");
            strcpy(right_operand->const_type, "int list");
            return 1;
        } else if(strcmp(left_operand->const_type, "float list") == 0 && strcmp(right_operand->const_type, "float list") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "float list") == 0 && strcmp(right_operand->const_type, "NIL") == 0) {
            strcpy(operation->const_type, "int");
            strcpy(right_operand->const_type, "float list");
            return 1;
        } else if(strcmp(left_operand->const_type, "NIL") == 0 && strcmp(right_operand->const_type, "int list") == 0) {
            strcpy(operation->const_type, "int");
            strcpy(left_operand->const_type, "int list");
            return 1;
        } else if(strcmp(left_operand->const_type, "NIL") == 0 && strcmp(right_operand->const_type, "float list") == 0) {
            strcpy(operation->const_type, "int");
            strcpy(left_operand->const_type, "float list");
            return 1;
        }
    }
    // ---------------------------------------------- FIM EXPRESSÕES DE COMPARAÇÃO ---------------------------------------------
    
    // ---------------------------------------------- EXPRESSÕES BINÁRIAS && e || -------------------------------------------------------
    if(strcmp(operator, "&&") == 0 || strcmp(operator, "||") == 0) {
        if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "int");
            return 1;
        } else if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "int");
            create_casting_node(operation, right_operand, "float->int", "int", 0);
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "float") == 0) {
            strcpy(operation->const_type, "int");
            create_casting_node(operation, left_operand, "float->int", "int", 1);
            create_casting_node(operation, right_operand, "float->int", "int", 0);
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "int") == 0) {
            strcpy(operation->const_type, "int");
            create_casting_node(operation, left_operand, "float->int", "int", 1);
            return 1; 
        }

        return 0;
    }
    // ---------------------------------------------- FIM EXPRESSÕES BINÁRIAS && e || ----------------------------------------------------

    // -------------------------------- OPERAÇÕES FILTER(<<) E MAP(>>) E ATRIBUIÇÃO (:) ----------------------------------------------
    if(strcmp(operator, ">>") == 0) {
        // se o operando da esquerda não for uma função (não tem ponteiro para a tabela de símbolos), lança erro
        if(left_operand->symbol_table_pointer == NULL) return 0;

        // se o operando da esquerda for função que recebe mais de um parâmetro, lança erro
        int num_of_params = left_operand->symbol_table_pointer->num_params;
        if(num_of_params != 1) return 0;

        // se o operando da esquerda for função que não retorna um tipo simples (int ou float), lança erro
        char* function_return_type = left_operand->symbol_table_pointer->type;
        if(strcmp(function_return_type, "int") != 0 && strcmp(function_return_type, "float") != 0)
            return 0;

        // se o operando da direita não for alguma expressão que retorne um tipo lista, lança erro
        if(strcmp(right_operand->const_type, "int list") != 0 && strcmp(right_operand->const_type, "float list") != 0)
            return 0;
        
        char type[100];
        strcpy(type, function_return_type);
        strcat(type, " list");
        strcpy(operation->const_type, type);

        return 1;
    } else if(strcmp(operator, "<<") == 0) {
        // se o operando da esquerda não for uma função (não tem ponteiro para a tabela de símbolos), lança erro
        if(left_operand->symbol_table_pointer == NULL) return 0;

        // se o operando da esquerda for função que recebe mais de um parâmetro, lança erro
        int num_of_params = left_operand->symbol_table_pointer->num_params;
        if(num_of_params != 1) return 0;

        // se o operando da esquerda for função que não retorna um tipo simples (int ou float), lança erro
        char* function_return_type = left_operand->symbol_table_pointer->type;
        if(strcmp(function_return_type, "int") != 0 && strcmp(function_return_type, "float") != 0)
            return 0;

        // se o operando da direita não for alguma expressão que retorne um tipo lista, lança erro
        if(strcmp(right_operand->const_type, "int list") != 0 && strcmp(right_operand->const_type, "float list") != 0)
            return 0;
        
        strcpy(operation->const_type, right_operand->const_type);
        return 1;
    } else if(strcmp(operator, ":") == 0) {
        
        // se o operando da esquerda for uma expressão que não retorna um tipo simples (int ou float), lança um erro
        if(strcmp(left_operand->const_type, "int") != 0 && strcmp(left_operand->const_type, "float") != 0) return 0;

        // se o operando da direita não for alguma expressão que retorne um tipo lista, lança erro
        if(strcmp(right_operand->const_type, "int list") != 0 && strcmp(right_operand->const_type, "float list") != 0)
            return 0;
        
        if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "int list") == 0) {
            strcpy(operation->const_type, right_operand->const_type);
            return 1;
        } else if(strcmp(left_operand->const_type, "int") == 0 && strcmp(right_operand->const_type, "float list") == 0) {
            create_casting_node(operation, left_operand, "int->float", "float", 1);
            strcpy(operation->const_type, right_operand->const_type);
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "float list") == 0) {
            strcpy(operation->const_type, right_operand->const_type);
            return 1;
        } else if(strcmp(left_operand->const_type, "float") == 0 && strcmp(right_operand->const_type, "int list") == 0) {
            create_casting_node(operation, left_operand, "int->float", "float", 1);
            strcpy(operation->const_type, right_operand->const_type);
            return 1;
        }

        return 0;
    }
    // --------------------- FIM OPERAÇÕES MAP, FILTER e ATRIBUIÇÃO DE LISTA ----------------------------------------------
    return 0;
}

int valid_read_write_params(char* func, T_Node* expression) {
    if(strcmp(func, "write") == 0 || strcmp(func, "writeln") == 0) {
        return (strcmp(expression->const_type, "literal_string") == 0 
            || strcmp(expression->const_type, "int") == 0
            || strcmp(expression->const_type, "float") == 0
        );
    } else if(strcmp(func, "read") == 0) {
        return (strcmp(expression->const_type, "int") == 0
            || strcmp(expression->const_type, "float") == 0
        );
    }
    return 0;
}

int valid_return_type(T_Node* expression) {
    
    if(strcmp(expression->const_type, "int") == 0) {
        if(strcmp(expression->child[0]->const_type, "int") == 0) {
            return 1;
        } else if(strcmp(expression->child[0]->const_type, "float") == 0) {
            create_casting_node(expression, expression->child[0], "float->int", "int", 1);
            return 1;
        }
    } else if(strcmp(expression->const_type, "float") == 0) {
        if(strcmp(expression->child[0]->const_type, "float") == 0) {
            return 1;
        } else if(strcmp(expression->child[0]->const_type, "int") == 0) {
            create_casting_node(expression, expression->child[0], "int->float", "float", 1);
            return 1;
        }
    } else if(strcmp(expression->const_type, "int list") == 0) {
        if(strcmp(expression->child[0]->const_type, "int list") == 0) {
            return 1;
        } else if(strcmp(expression->child[0]->const_type, "NIL") == 0) {
            strcpy(expression->child[0]->const_type, expression->const_type);
            return 1;
        }
    } else if(strcmp(expression->const_type, "float list") == 0) {
        if(strcmp(expression->child[0]->const_type, "float list") == 0) {
            return 1;
        } else if(strcmp(expression->child[0]->const_type, "NIL") == 0) {
            strcpy(expression->child[0]->const_type, expression->const_type);
            return 1;
        }
    }
    return 0;
}

int invalid_argument_type(T_Node* arg, T_Symbol symbol_table[], int first_arg_idx, int iteration, int error) {
    if(!arg->child[0]) 
        return error;
    T_Symbol current_symbol = symbol_table[first_arg_idx + iteration];
    // printf("PARAM: [%s, %s]\tARG:<%s, %s>\n", current_symbol.content, current_symbol.type, arg->child[1]->text, arg->child[1]->const_type);
    
    if(strcmp(current_symbol.type, "int") == 0) {
        if(strcmp(arg->child[1]->const_type, "float") == 0) {
            create_casting_node(arg, arg->child[1], "float->int", "int", 0);
        } else if(strcmp(arg->child[1]->const_type, "int") == 0) {
            // do nothing
        } else {
            error = 1;
        }
    } else if(strcmp(current_symbol.type, "float") == 0) {
        if(strcmp(arg->child[1]->const_type, "int") == 0) {
            create_casting_node(arg, arg->child[1], "int->float", "float", 0);
        } else if(strcmp(arg->child[1]->const_type, "float") == 0) {
            // do nothing
        } else {
            error = 1;
        }
    } else if(strcmp(current_symbol.type, "int list") == 0) {
        if(strcmp(arg->child[1]->const_type, "int list") == 0 || strcmp(arg->child[1]->const_type, "NIL") == 0) {
            strcpy(arg->child[1]->const_type, "int list");
        } else {
            error = 1;
        }
    } else if(strcmp(current_symbol.type, "float list") == 0) {
        if(strcmp(arg->child[1]->const_type, "float list") == 0 || strcmp(arg->child[1]->const_type, "NIL") == 0) {
            strcpy(arg->child[1]->const_type, "float list");
        } else {
            error = 1;
        }
    }
    return invalid_argument_type(arg->child[0], symbol_table, first_arg_idx, iteration - 1, error);
}

void create_casting_node(T_Node* root, T_Node* child, char* cast_type, char* final_type, int left) {

    char type[100];
    char txt[5] = "cast";
    strcpy(type, txt);
    strcat(type, " [");
    strcat(type, cast_type);
    strcat(type, "]");

    T_Node* casting_node = new_node("casting_node", type, 0, final_type);
    casting_node->child[0] = child;
    if(left) {
        root->child[0] = casting_node;
    } else {
        root->child[1] = casting_node;
    }
}