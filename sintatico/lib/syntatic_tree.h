#ifndef SYNTATIC_TREE
#define SYNTATIC_TREE

#include<stdlib.h>

#include "symbol_table.h"

typedef struct T_Node T_Node;

struct T_Node{
    char rule_name[100];
    char value[100];
    T_Symbol* symbol;
    T_Node* children;
};

T_Node* create_node();
void print_syntatic_tree();

#endif