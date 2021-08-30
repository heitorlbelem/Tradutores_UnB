%define lr.type canonical-lr
%define parse.error verbose

%{
    #include<stdio.h>
    #include<stdlib.h>
    #include "symbol_table.h"

    #define BRED "\e[1;31m"
    #define BGRN "\e[1;32m"
    #define REDHB "\e[0;101m"
    #define BLU "\e[0;34m"
    #define UCYN "\e[4;36m"
    #define reset "\e[0m"
    
    extern FILE *yyin;
    int yyerror (char const *);    
    extern int yylex();
    extern int yylex_destroy();

    extern int errors_count;
    extern int scope_id;
    int symbol_table_idx = 0;
    int symbol_table_size = 0;

%}

%union {
    struct Token {
        char content[100];
        int line_idx;
        int column_idx;
        int scope;
    } token;
}

%token <token> C_INTEGER
%token <token> C_FLOAT
%token <token> C_NIL
%token <token> C_STRING

%token <token> T_INTEGER
%token <token> T_FLOAT
%token <token> T_LIST

%token <token> IDENTIFIER

%token <token> RW_FOR
%token <token> RW_RETURN
%token <token> RW_IF
%token <token> RW_ELSE

%token <token> IO_READ
%token <token> IO_WRITE

%token '{' 
%token '}'
%token '('
%token ')'
%token ','
%token ';'

%token '='
%token '!'

%token <token> ARITMETIC_OP_ADDITIVE
%token <token> ARITMETIC_OP_MULTIPLICATIVE
%token <token> COMPARISON_OP
%token <token> LOGICAL_OP_OR
%token <token> LOGICAL_OP_AND

%token <token> UNARY_LIST_OP
%token <token> BINARY_LIST_OP


%start program

%%

program
    : program variable_declaration 
    | program function_declaration 
    | variable_declaration
    | function_declaration 
;

function_declaration
    : type IDENTIFIER '(' {
        scope_id++;
        T_Symbol sym = symbol(
            $2.line_idx, 
            $2.column_idx, 
            scope_id, 
            0, 
            $2.content
        );
        set_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
    ')' block
    | type IDENTIFIER '(' {
        scope_id++;
        T_Symbol sym = symbol(
            $2.line_idx, 
            $2.column_idx, 
            scope_id, 
            0, 
            $2.content
        );
        set_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
    params ')' block
;

function_call
    : IDENTIFIER '(' ')'
    | IDENTIFIER '(' expression ')' 
;

params
    : type IDENTIFIER ',' params {
        T_Symbol sym = symbol(
            $2.line_idx, 
            $2.column_idx, 
            scope_id, 
            1, 
            $2.content
        );
        set_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
    | type IDENTIFIER {
        T_Symbol sym = symbol(
            $2.line_idx, 
            $2.column_idx, 
            scope_id, 
            1, 
            $2.content
        );
        set_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
;

block
    : '{' statment '}'
;

conditional_statment
    : RW_IF '(' expression ')' block
    | RW_IF '(' expression ')' block RW_ELSE block
;

input_statment
    : IO_READ '(' IDENTIFIER ')' ';'
;

output_statment
    : IO_WRITE '(' C_STRING ')' ';'
    | IO_WRITE '(' expression ')' ';'
;

for_statment
    : RW_FOR '(' variable_assignment ';' comparison_expression ';' variable_assignment ')' block
;

list_binary_operation_statment
    : IDENTIFIER '=' IDENTIFIER BINARY_LIST_OP IDENTIFIER ';'
;

list_unary_operation_expression
    : UNARY_LIST_OP IDENTIFIER
;

statment
    : statment variable_assignment ';'
    | statment variable_declaration
    | statment return_statment
    | statment conditional_statment
    | statment input_statment
    | statment output_statment
    | statment for_statment
    | statment list_binary_operation_statment
    | statment function_call ';'
    | variable_declaration
    | variable_assignment ';'
    | return_statment
    | conditional_statment
    | input_statment
    | output_statment
    | for_statment
    | list_binary_operation_statment
    | function_call ';'
;

expression
    : comparison_expression
;

comparison_expression
    : comparison_expression COMPARISON_OP logical_expression_or
    | logical_expression_or
;

logical_expression_or
    : logical_expression_or LOGICAL_OP_OR logical_expression_and
    | logical_expression_and
;

logical_expression_and
    : logical_expression_and LOGICAL_OP_AND aritmetic_expression_additive
    | aritmetic_expression_additive
;

aritmetic_expression_additive
    : aritmetic_expression_additive ARITMETIC_OP_ADDITIVE aritmetic_expression_multiplicative
    | aritmetic_expression_multiplicative 
;

aritmetic_expression_multiplicative
    : aritmetic_expression_multiplicative ARITMETIC_OP_MULTIPLICATIVE value
    | value
;

return_statment
    : RW_RETURN expression ';'
;

value
    : IDENTIFIER
    | constant
    | list_unary_operation_expression
    | ARITMETIC_OP_ADDITIVE IDENTIFIER
    | ARITMETIC_OP_ADDITIVE constant
    | '!' IDENTIFIER
    | '!' constant
    | '(' expression ')'
    | '!''(' expression ')'
;

variable_assignment
    : IDENTIFIER '=' expression
    | IDENTIFIER '=' function_call

variable_declaration
    : type IDENTIFIER ';' {
        T_Symbol sym = symbol(
            $2.line_idx, 
            $2.column_idx,
            scope_id,
            1,
            $2.content
        );
        set_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
;

type
    : T_INTEGER 
    | T_FLOAT
    | T_LIST
;

constant
    : C_INTEGER 
    | C_FLOAT
    | C_NIL
;

%%

int yyerror(const char* err_msg){
    printf("\n[PARSER] Line: %d | Column: %d\t=> ERROR %s\n\n", yylval.token.line_idx, yylval.token.column_idx, err_msg);
    errors_count++;
    return 0;
}

int main(int argc, char ** argv) {
    
    if(argc != 2) {
        printf(BRED "You must pass exactly one file as an argument.");
        printf(reset "\n");
        return (-1);
    }

    if (!(yyin = fopen(argv[1], "r"))) {
        printf(BRED "Error opening file");
        printf(reset "\n");
        return (-1);
    }

    yyparse();

    if(errors_count == 0){
        printf(BGRN "Finished. Lexical analysis found no errors");
        printf(reset "\n");
    } else {
        printf(BRED "Finished. Lexical analysis found %d errors during execution", errors_count);
        printf(reset "\n");
    }

    print_symbol_table(symbol_table_size);


    fclose(yyin);
    yylex_destroy();

    return 0;
}