#include "semantic_analysis.h"
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

int variable_unavailable(T_Symbol symbol_table[], char* identifier, int last_pos, int stack_top, int scope_stack[]) {
    for(int i = stack_top; i >= 0; i--) {
        for(int j = 0; j <= last_pos; j++) {
            if(strcmp(identifier, symbol_table[j].content) == 0 && symbol_table[j].scope == scope_stack[i]) {
                // printf("Variavel disponivel =====> %s\n", identifier);
                return 0;
            }
        }
    }
    // printf("Variavel indisponivel =====> %s\n", identifier);
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