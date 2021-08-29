#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol_table.h"

T_Symbol symbol_table[100000];

T_Symbol create_new_symbol(
    int line, 
    int column, 
    int scope, 
    int is_variable, 
    char* content
) {
    T_Symbol new_symbol;
    new_symbol.line_idx = line;
    new_symbol.column_idx = column;
    new_symbol.scope = scope;
    new_symbol.is_variable = is_variable;
    strcpy(new_symbol.content, content);

    return new_symbol;
}

void insert_symbol(int idx, T_Symbol symbol) {
    symbol_table[idx] = symbol;
    return;
}

void print_symbol_table(int table_size) {
    if (table_size == -1) return;
    printf("\n|==============================TABELA DE SIMBOLOS================================|\n");
    printf("|= %-29s | %s:%s | %5s | %7s =|\n", "IDENTIFICADOR", "LINHA", "COLUNA", "EH VARIAVEL", "ESCOPO");
    printf("|================================|==============|=======|=============|==========|\n");
    
    for(int i=0; i<=table_size; i++) {
        printf("| %-30s | %3d:%-8d | %-11d | %-8d |\n", 
            symbol_table[i].content, 
            symbol_table[i].line_idx,
            symbol_table[i].column_idx,
            symbol_table[i].is_variable,
            symbol_table[i].scope);
    }

    printf("|================================================================================|\n");
}