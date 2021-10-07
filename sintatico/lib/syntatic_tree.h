#ifndef SYNTATIC_TREE
#define SYNTATIC_TREE

#include<stdlib.h>
#include "symbol_table.h"

typedef struct T_Node T_Node;
typedef struct T_Element T_Element;

struct T_Node {
    char rule[100];
    char text[100];
    int is_terminal;
    T_Node* child[5];
};

T_Node* new_node(char* rule_name, char* value, int terminal);
void free_tree(T_Node* node);
void show_tree(T_Node* node, int tabs);

int count_function_params(T_Node* node);

#endif