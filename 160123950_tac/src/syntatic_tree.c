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
        node->symbol_table_pointer = NULL;
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

    node->symbol_table_pointer = NULL;
    free(node->symbol_table_pointer);
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
            if(node->symbol_table_pointer != NULL){
                printf(BGRN "%s: <%s, %s>",node->symbol_table_pointer->var_func_param, node->symbol_table_pointer->type, node->text);
            }
            else {
                printf(BGRN "%s", node->text);
            }
            printf(reset"\n");
        } else {
            printf(BGRN"%s: <%s, %s>", node->rule, node->const_type, node->text);
            printf(reset"\n");
        }
    } else {
        if(strcmp(node->const_type, "") == 0){
            printf(BMAG "%s", node->text);
        } else {
            printf(BMAG"%s [type: %s]", node->text, node->const_type);
        }
        printf(reset"\n");
    }

    for(int i = 0; i < 5; i++) {
        show_tree(node->child[i], tabs+2);
    }

    return;
}