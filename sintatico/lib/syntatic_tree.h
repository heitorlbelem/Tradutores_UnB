#ifndef SYNTATIC_TREE
#define SYNTATIC_TREE

#include<stdlib.h>
#include "symbol_table.h"

typedef struct T_Node T_Node;
struct T_Node {
    char rule_name[100];
    char value[100];
    int is_terminal;
    T_Symbol* symbol;
    T_Node* children[10];
};

T_Node* create_node(char* rule_name, char* value, int terminal);
void print_syntatic_tree();
void freeTree();

#endif