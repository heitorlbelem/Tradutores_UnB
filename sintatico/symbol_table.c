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
    printf(BHRED"-------------------------------------------------------------------------------------"reset"\n");
    printf(BHRED"|                                  SYMBOL TABLE                                     |"reset"\n");
    printf(BHRED"-------------------------------------------------------------------------------------"reset"\n");
    
    printf(BHRED"|" BHBLU" %-12s " BHRED"|" BHBLU" %-20s " BHRED"|" BHBLU" %5s " BHRED"|" BHBLU" %5s " BHRED"|" BHBLU" %5s " BHRED"|" BHBLU" %5s " BHRED"|"reset"\n", "TYPE", "IDENTIFIER", "IS_VARIABLE", "SCOPE", "LINE_IDX", "COLUMN_IDX");
    printf(BHRED"-------------------------------------------------------------------------------------" reset "\n");
    
    for(int i=0; i < table_size; i++) {
        printf(BHRED"|" BHCYN" %-12s " BHRED"|" BHCYN" %-20s " BHRED"|" BHCYN" %-12d" BHRED"|" BHCYN" %-5d " BHRED"|" BHCYN" %-8d " BHRED"|" BHCYN" %-10d " BHRED"|"reset,
            symbol_table[i].type,
            symbol_table[i].content, 
            symbol_table[i].is_variable,
            symbol_table[i].scope,
            symbol_table[i].line_idx,
            symbol_table[i].column_idx
        );
        printf(BHRED"\n-------------------------------------------------------------------------------------" reset "\n");
        
    }
}