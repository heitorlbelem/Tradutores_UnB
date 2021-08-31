#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol_table.h"

T_Symbol symbol_table[100000];

void update_symbol(
    int symbol_table_idx,
    int line, 
    int column, 
    int scope, 
    int is_variable, 
    char* content
) {
    
    symbol_table[symbol_table_idx].line_idx = line;
    symbol_table[symbol_table_idx].column_idx = column;
    symbol_table[symbol_table_idx].scope = scope;
    symbol_table[symbol_table_idx].is_variable = is_variable;
    strcpy(symbol_table[symbol_table_idx].content, content);

    return;
}

T_Symbol symbol(char* type) {
    T_Symbol new_symbol;
    strcpy(new_symbol.type, type);
    return new_symbol;
}

void insert_symbol(int idx, T_Symbol symbol) {
    symbol_table[idx] = symbol;
    return;
}

void print_symbol_table(int table_size) {
    if (table_size == 0) return;
    printf("\n|==============================TABELA DE SIMBOLOS=======================|\n");
    printf("| %-29s | %5s | %5s | %5s | %5s | %-29s |\n", "IDENTIFICADOR", "LINHA", "COLUNA", "EH VARIAVEL", "ESCOPO", "TIPO");
    printf("|===============================|=======|========|=============|========|\n");
    
    for(int i=0; i < table_size; i++) {
        printf("| %-29s | %-5d | %-5d  | %-11d | %-6d |%-29s|\n", 
            symbol_table[i].content, 
            symbol_table[i].line_idx,
            symbol_table[i].column_idx,
            symbol_table[i].is_variable,
            symbol_table[i].scope,
            symbol_table[i].type
            );
    }

    printf("|=======================================================================|\n");
}