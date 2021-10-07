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
        printf(BGRN "%s", node->text);
        printf(reset"\n");
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
    
    if(node->child[0] == NULL) return 0;
    
    return 1 + count_function_params(node->child[0]);
}