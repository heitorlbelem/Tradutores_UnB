#include "syntatic_tree.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Inicializa nó de árvore
T_Node* new_node(char* rule_name, char* value, int terminal, char* const_type) {
    T_Node* node = (T_Node*) malloc(sizeof(T_Node));

    strcpy(node->rule, rule_name);
    strcpy(node->text, value);
    strcpy(node->const_type, const_type);
    node->is_terminal = terminal;
    for(int i = 0; i < 5; i++) {
        node->child[i] = NULL;
    }
    return node;
}

// Libera memória alocada para os nós
void free_tree(T_Node* node) {
    if(!node) {
        return;
    }

    if(node) {
        for(int i = 0; i < 5; i++) {
            free_tree(node->child[i]);   
        }   
    }

    // printf("FREE_NODE: %s\n", node->rule);
    free(node);

    return;
}

// Mostra árvore
void show_tree(T_Node* node, int tabs) {
    if(!node) {
        return;
    }
    for(int i = 0; i < tabs; i++) {
        printf(" ");
    }
    printf("|_ ");
    if(node->is_terminal) {
        if(strcmp(node->const_type, "") == 0) {
            printf(BGRN "%s", node->text);
            printf(reset"\n");
        } else {
            printf(BGRN"const <%s, %s>", node->const_type, node->text);
            printf(reset"\n");
        }
    } else {
        printf(BMAG "%s", node->text);
        printf(reset"\n");
    }

    for(int i = 0; i < 5; i++) {
        show_tree(node->child[i], tabs+2);
    }

    return;
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