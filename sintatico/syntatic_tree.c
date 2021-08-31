#include "syntatic_tree.h"
#include <stdlib.h>
#include <string.h>

T_Node* create_node(char* rule_name) {
    T_Node* new_node = (T_Node*) malloc(sizeof(T_Node));

    new_node->left_child = NULL;
    new_node->right_child = NULL;
    new_node->symbol = NULL;
    strcpy(new_node->rule_name, rule_name);

    return new_node;
}