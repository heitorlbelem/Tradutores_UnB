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
%token <token> LIT_STRING

%token <token> SIMPLE_TYPE
%token <token> LIST_TYPE
%token <token> IDENTIFIER

%token <token> RW_FOR
%token <token> RW_RETURN
%token <token> RW_IF
%token <token> RW_ELSE

%token <token> IO_READ
%token <token> IO_WRITE

%token <token> BINARY_LIST_OP
%token <token> UNARY_LIST_OP

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

%right THEN RW_ELSE

%start program

%%

program
    : declarations
;

declarations
    : declarations declaration 
    | declaration
;

declaration
    : function_declaration_statement
    | variable_declaration_statement
;

block
    : '{' statements '}'
;

statements
    : statements statement
    | statement
;

statement
    : expression_statement
    | io_statement
    | return_statement
    | variable_declaration_statement
    | for_statement
    | if_else_statement
    | block
    | error {}
;

function_declaration_statement
    : SIMPLE_TYPE IDENTIFIER '(' parameters_optative ')' statement {
        T_Symbol sym = symbol(
            $1.content, 
            $2.content, 
            "function", 
            scope_id, 
            $2.line_idx, 
            $2.column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
    | SIMPLE_TYPE LIST_TYPE IDENTIFIER '(' parameters_optative ')' statement {
        char type[100];
        strcpy(type, $1.content);
        strcat(type, " ");
        strcat(type, $2.content);
        T_Symbol sym = symbol(
            type, 
            $3.content, 
            "function", 
            scope_id, 
            $3.line_idx, 
            $3.column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
;

parameters_optative
    : %empty
    | parameters
;

parameters
    : parameters ',' parameter
    | parameter
;

parameter
    : SIMPLE_TYPE IDENTIFIER {
        T_Symbol sym = symbol(
            $1.content, 
            $2.content, 
            "parameter", 
            scope_id, 
            $2.line_idx, 
            $2.column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
    | SIMPLE_TYPE LIST_TYPE IDENTIFIER {
        char type[100];
        strcpy(type, $1.content);
        strcat(type, " ");
        strcat(type, $2.content);
        T_Symbol sym = symbol(
            type, 
            $3.content, 
            "parameter", 
            scope_id, 
            $3.line_idx, 
            $3.column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
;

for_statement
    : RW_FOR '(' expression_optative ';' or_expression_optative ';' expression_optative ')' statement
;

if_else_statement
    : RW_IF '(' expression ')' statement %prec THEN
    | RW_IF '(' expression ')' statement RW_ELSE statement

expression_statement
    : expression ';'
;

io_statement
    : input_statement
    | output_statement
;

input_statement
    : IO_READ '(' IDENTIFIER ')' ';'
;

output_statement
    : IO_WRITE '(' expression ')' ';'
    | IO_WRITE '(' LIT_STRING ')' ';'
;

return_statement
    : RW_RETURN expression ';'
;

expression
    : IDENTIFIER '=' expression
    | or_expression
    | function_call_expression
;

function_call_expression
    : IDENTIFIER '(' function_arguments_optional ')'
;

function_arguments_optional
    : %empty 
    | function_arguments
;

function_arguments
    : function_arguments ',' function_argument
    | function_argument
;

function_argument
    : expression
;

expression_optative
    : %empty 
    | expression
;

or_expression_optative
    : %empty
    | or_expression
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
    : relational_expression RELATIONAL_OP list_expression
    | list_expression
;

list_expression
    : list_expression BINARY_LIST_OP addition_expression
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
    | UNARY_LIST_OP simple_value
    | '(' expression ')'
;

variable_declaration_statement
    : SIMPLE_TYPE IDENTIFIER ';' {
        T_Symbol sym = symbol(
            $1.content, 
            $2.content, 
            "variable", 
            scope_id, 
            $2.line_idx, 
            $2.column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
    | SIMPLE_TYPE LIST_TYPE IDENTIFIER ';' {

        char type[100];
        strcpy(type, $1.content);
        strcat(type, " ");
        strcat(type, $2.content);
        T_Symbol sym = symbol(
            type, 
            $3.content, 
            "variable", 
            scope_id, 
            $3.line_idx, 
            $3.column_idx
        );
        insert_symbol(symbol_table_idx, sym);
        symbol_table_idx++;
        symbol_table_size++;
    }
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
