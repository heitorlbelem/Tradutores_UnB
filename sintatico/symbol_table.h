#ifndef SYMBOL_TABLE
#define SYMBOL_TABLE

typedef struct {
    int line_idx;
    int column_idx;
    int scope;
    int is_variable;
    char content[100];
} T_Symbol;

T_Symbol symbol(
    int line, 
    int column, 
    int scope, 
    int is_variable, 
    char* content
);

void set_symbol(int idx, T_Symbol symbol);
void print_symbol_table(int table_size);

#endif