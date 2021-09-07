%define lr.type canonical-lr
%define parse.error verbose

%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include "symbol_table.h"
    #include "syntatic_tree.h"
    
    #define BRED "\e[1;31m"
    #define BGRN "\e[1;32m"
    #define REDHB "\e[0;101m"
    #define BLU "\e[0;34m"
    #define UCYN "\e[4;36m"
    #define reset "\e[0m"
    
    extern FILE *yyin;
    void yyerror (char const *);    
    extern int yylex();
    extern int yylex_destroy();

    extern int errors_count;
    extern int scope_id;
    int symbol_table_idx = 0;
    int symbol_table_size = 0;

    T_Node* root_node;
%}

%union {
    struct Token {
        char content[100];
        int line_idx;
        int column_idx;
        int scope;
    } token;

    struct T_Node* node;
}

%token <token> C_INTEGER
%token <token> C_FLOAT
%token <token> C_NIL
%token <token> C_STRING

%token <token> TYPE

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
%token <token> RELATIONAL_OP
%token <token> EQUALITY_OP
%token <token> LOGICAL_OP_OR
%token <token> LOGICAL_OP_AND

%token <token> UNARY_LIST_OP
%token <token> BINARY_LIST_OP


%start program

%%

program
    : expression
;

expression
    : or_expression
;

or_expression
    : or_expression LOGICAL_OP_OR and_expression
    | and_expression
;

and_expression
    : and_expression LOGICAL_OP_AND equality_expression
    | equality_expression
;

equality_expression
    : equality_expression EQUALITY_OP relational_expression
    | relational_expression 
;

relational_expression
    : relational_expression RELATIONAL_OP addition_expression
    | addition_expression
;

addition_expression
    : addition_expression ARITMETIC_OP_ADDITIVE multiplication_expression
    | multiplication_expression
;

multiplication_expression
    : multiplication_expression ARITMETIC_OP_MULTIPLICATIVE simple_value
    | simple_value
;

simple_value
    : constant
    | IDENTIFIER
    | ARITMETIC_OP_ADDITIVE simple_value
    | '!' simple_value
    | '(' expression ')'
;

variable_declaration_stmt
    : TYPE IDENTIFIER ';'
;

constant
    : C_INTEGER 
    | C_FLOAT 
    | C_NIL
;

%%

void yyerror(const char* err_msg){
    printf("\n[PARSER] Line: %d | Column: %d\t=> ERROR %s\n\n", yylval.token.line_idx, yylval.token.column_idx, err_msg);
    errors_count++;
    return;
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
