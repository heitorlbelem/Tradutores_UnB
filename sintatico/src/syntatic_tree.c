#include "syntatic_tree.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

T_Node* create_node(char* rule_name, char* value, int is_terminal) {
    T_Node* new_node = (T_Node*) malloc(sizeof(T_Node));

    printf("CREATE_NODE: %s\n", rule_name);

    new_node->symbol = NULL;
    new_node->is_terminal = is_terminal;
    for(int i=0; i < 10; i++) {
        new_node->children[i] = NULL;
    }
    strcpy(new_node->rule_name, rule_name);
    strcpy(new_node->value, value);

    return new_node;
}

void print_syntatic_tree() {

}

void freeTree(T_Node* node) {
    if(node == NULL) {
        printf("tem nada aqui\n");
        return;
    }

    if(node->symbol != NULL) {
        printf("entrou symbol\n");
        free(node->symbol);
    }

    for(int i = 0; i < 10; i++) {
        if(node->children[i] != NULL) {
            freeTree(node->children[i]);
        }    
    }   

    printf("FREE_NODE: %s\n", node->rule_name);
    free(node);

    return;
}