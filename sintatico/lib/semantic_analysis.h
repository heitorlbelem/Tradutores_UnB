#ifndef SEMANTIC_ANALYSIS
#define SEMANTIC_ANALYSIS

#include "symbol_table.h"
#include "syntatic_tree.h"

int check_redeclared(T_Symbol symbol_table[], char* identifier, int last_pos, int current_scope);
int variable_unavailable(T_Symbol symbol_table[], char* identifier, int last_pos, int stack_top, int scope_stack[]);
void increment_params_number(T_Symbol symbol_table[], int symbol_table_idx);
int main_exists(T_Symbol symbol_table[], int table_size);

int count_function_params(T_Node* node);
int check_number_of_params(T_Node* node, T_Symbol symbol_table[], int symbol_table_size, char* identifier);
int expression_is_unary_function(T_Node* node, T_Symbol symbol_table[], int symbol_table_size);

#endif