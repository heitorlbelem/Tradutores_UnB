#include "syntatic_tree.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Inicializa nó de árvore
T_Node* new_node(char* rule_name, char* value, int terminal) {
    T_Node* node = (T_Node*) malloc(sizeof(T_Node));

    strcpy(node->rule, rule_name);
    strcpy(node->text, value);
    node->is_terminal = terminal;
    for(int i = 0; i < 5; i++) {
        node->child[i] = NULL;
    }
    return node;
}

void free_tree(T_Node* node) {
    if(node == NULL) {
        return;
    }

    if(node != NULL) {
        for(int i = 0; i < 5; i++) {
            free_tree(node->child[i]);   
        }   
    }

    printf("FREE_NODE: %s\n", node->rule);
    free(node);

    return;
}