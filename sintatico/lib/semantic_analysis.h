#ifndef SEMANTIC_ANALYSIS
#define SEMANTIC_ANALYSIS

#include "symbol_table.h"
#include "syntatic_tree.h"

int check_redeclared(T_Symbol symbol_table[], char* identifier, int last_pos, int current_scope);
int variable_unavailable(T_Symbol symbol_table[], T_Node* node, int last_pos, int stack_top, int scope_stack[]);
void increment_params_number(T_Symbol symbol_table[], int symbol_table_idx);
int main_exists(T_Symbol symbol_table[], int table_size);

int count_function_params(T_Node* node);
int check_number_of_params(T_Node* node, T_Symbol symbol_table[], int symbol_table_size, char* identifier);
int expression_is_unary_function(T_Node* node, T_Symbol symbol_table[], int symbol_table_size);

int valid_unary_operation(char* operator, T_Node* node);
int valid_binary_operation(char* operator, T_Node* operation, T_Node* left_operand, T_Node* right_operand);
int valid_read_write_params(char* func, T_Node* expression);
int valid_return_type(T_Node* expression);
void valid_argument_type(T_Node* arg, T_Symbol symbol_table[], int first_arg_idx, int iteration);
void create_casting_node(T_Node* root, T_Node* child, char* cast_type, char* final_type, int left);

#endif