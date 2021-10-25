#ifndef SCOPE_STACK
#define SCOPE_STACK

void push_scope(int, int, int scope_stack[]);
void pop_scope(int, int scope_stack[]);
void print_scope_stack(int, int scope_stack[]);
void initialize_scope_stack(int scope_stack[]);

#endif