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

    return 0;
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