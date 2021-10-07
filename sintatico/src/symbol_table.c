#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "symbol_table.h"

T_Symbol symbol_table[100000];

T_Symbol symbol(
    char* type, 
    char* content, 
    char* var_func_param, 
    int scope, 
    int line, 
    int column,
    int num_params
) {
    T_Symbol sym;
    strcpy(sym.type, type);
    strcpy(sym.content, content);
    strcpy(sym.var_func_param, var_func_param);
    sym.scope = scope;
    sym.line_idx = line;
    sym.column_idx = column;
    sym.num_params = num_params;
    return sym;
}

void insert_symbol(int idx, T_Symbol symbol) {
    symbol_table[idx] = symbol;
    return;
}

void print_symbol_table(int table_size) {
    if (!table_size) return;
    printf(BHRED"-------------------------------------------------------------------------------------------------"reset"\n");
    printf(BHRED"|                                  SYMBOL TABLE                                                 |"reset"\n");
    printf(BHRED"-------------------------------------------------------------------------------------------------"reset"\n");
    
    printf(BHRED"|" BHBLU" %-12s " BHRED"|" BHBLU" %-20s " BHRED"|" BHBLU" %5s " BHRED"|" BHBLU " %5s " BHRED"|" BHBLU" %5s " BHRED"|" BHBLU" %5s " BHRED"|" BHBLU" %5s " BHRED"|"reset"\n", "TYPE", "IDENTIFIER", "IS_VARIABLE", "QT_PARAMS", "SCOPE", "LINE_IDX", "COLUMN_IDX");
    printf(BHRED"-------------------------------------------------------------------------------------------------" reset "\n");
    
    for(int i=0; i < table_size; i++) {
        printf(BHRED"|" BHCYN" %-12s " BHRED"|" BHCYN" %-20s " BHRED"|" BHCYN" %-12s"  BHRED"|" BHCYN" %-12d" BHRED"|" BHCYN" %-5d " BHRED"|" BHCYN" %-8d " BHRED"|" BHCYN" %-10d " BHRED"|"reset,
            symbol_table[i].type,
            symbol_table[i].content, 
            symbol_table[i].var_func_param,
            symbol_table[i].num_params,
            symbol_table[i].scope,
            symbol_table[i].line_idx,
            symbol_table[i].column_idx
        );
        printf(BHRED"\n-------------------------------------------------------------------------------------------------" reset "\n");
    }
}

int check_redeclared(char* identifier, int last_pos, int current_scope) {
    for(int i = 0; i <= last_pos; i++) {
        if( (strcmp(identifier, symbol_table[i].content) == 0) && (current_scope == symbol_table[i].scope) ) {
            return 1;
        }
    }
    return 0;
}

int variable_unavailable(char* identifier, int last_pos, int stack_top, int scope_stack[]) {
    for(int i = stack_top; i >= 0; i--) {
        for(int j = 0; j <= last_pos; j++) {
            if(strcmp(identifier, symbol_table[j].content) == 0 && symbol_table[j].scope == scope_stack[i]) {
                // printf("Variavel disponivel =====> %s\n", identifier);
                return 0;
            }
        }
    }
    // printf("Variavel indisponivel =====> %s\n", identifier);
    return 1;
}

void increment_params_number(int symbol_table_idx) {
    symbol_table[symbol_table_idx].num_params++;
}

int main_exists(int table_size) {
    for(int i = 0; i < table_size; i++) {
        if(strcmp(symbol_table[i].content, "main") == 0) {
            return 1;
        }
    }
    return 0;
}