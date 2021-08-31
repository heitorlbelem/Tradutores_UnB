#ifndef SYNTATIC_TREE
#define SYNTATIC_TREE

#include "symbol_table.h"

typedef struct {
    char rule_name[100];
    char value[100];
    T_Symbol* symbol;
    T_Node* child_left;
    T_Node* child_right;
} T_Node;

void syntatic_tree();

void set_node();
void get_node();

void print_syntatic_tree();

#endif