#include "syntatic_tree.h"
#include <stdlib.h>
#include <string.h>

T_Node* create_node(char* rule_name) {
    T_Node* new_node = (T_Node*) malloc(sizeof(T_Node));

    new_node->symbol = NULL;
    new_node->children = NULL;
    strcpy(new_node->rule_name, rule_name);

    return new_node;
}