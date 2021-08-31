#ifndef SYMBOL_TABLE
#define SYMBOL_TABLE

typedef struct {
    int line_idx;
    int column_idx;
    int scope;
    int is_variable;
    char type[100];
    char content[100];
} T_Symbol;

T_Symbol symbol(char* type);
void update_symbol(
    int symbol_table_idx,
    int line, 
    int column, 
    int scope, 
    int is_variable, 
    char* content
);
void insert_symbol(int idx, T_Symbol symbol);
void print_symbol_table(int table_size);

#endif