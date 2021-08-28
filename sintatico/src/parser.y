%define lr.type canonical-lr
%define parse.error verbose

%{
    #include<stdio.h>
    #include<stdlib.h>

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
    extern int line_idx;
    extern int column_idx;
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

%start program

%%

program
    : function_declaration

function_declaration
    : type IDENTIFIER '(' ')' block

block
    : '{' statment '}'

conditional_statment
    : RW_IF '(' expression COMPARISON_OP expression ')' block

statment
    : statment variable_assignment
    | statment variable_declaration
    | statment return_statment
    | statment conditional_statment
    | variable_declaration
    | variable_assignment
    | return_statment
    | conditional_statment

expression
    : logical_expression_or

logical_expression_or
    : logical_expression_or LOGICAL_OP_OR logical_expression_and
    | logical_expression_and

logical_expression_and
    : logical_expression_and LOGICAL_OP_AND aritmetic_expression_additive
    | aritmetic_expression_additive
    
aritmetic_expression_additive
    : aritmetic_expression_additive ARITMETIC_OP_ADDITIVE aritmetic_expression_multiplicative
    | aritmetic_expression_multiplicative 

aritmetic_expression_multiplicative
    : aritmetic_expression_multiplicative ARITMETIC_OP_MULTIPLICATIVE value
    | value

return_statment
    : RW_RETURN expression ';'

value
    : IDENTIFIER
    | constant

variable_assignment
    : IDENTIFIER '=' expression ';'

variable_declaration
    : type IDENTIFIER ';'

type
    : T_INTEGER 
    | T_FLOAT
    | T_LIST

constant
    : C_INTEGER 
    | C_FLOAT
    | C_NIL

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


    fclose(yyin);
    yylex_destroy();

    return 0;
}