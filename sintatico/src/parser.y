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
%token <token> COMPARISON_OP
%token <token> LOGICAL_OP_OR
%token <token> LOGICAL_OP_AND

%token <token> UNARY_LIST_OP
%token <token> BINARY_LIST_OP


%type <node> program
%type <node> declaration
%type <node> function_declaration
%type <node> function_call
%type <node> params
%type <node> block
%type <node> conditional_statment
%type <node> input_statment
%type <node> output_statment
%type <node> for_statment
%type <node> list_binary_operation_statment
%type <node> binary_operation
%type <node> list_unary_operation_expression
%type <node> statment
%type <node> expression
%type <node> comparison_expression
%type <node> logical_expression_or
%type <node> logical_expression_and
%type <node> aritmetic_expression_additive
%type <node> aritmetic_expression_multiplicative
%type <node> return_statment
%type <node> value
%type <node> variable_assignment
%type <node> variable_declaration
%type <node> constant

%start program

%%

program:
    declaration {
        root_node = $1;
    }
;

declaration
    : program variable_declaration ';' {
        $$ = $2;
        $$->children[0] = $1;
    }
    | program function_declaration {
        $$ = $2;
        $$->children[0] = $1;
    }
    | variable_declaration ';' {
        $$ = $1;
    }
    | function_declaration {
        $$ = $1;
    }
    | error {}
;

function_declaration
    : TYPE IDENTIFIER '(' ')' block {
        scope_id++;
        T_Symbol sym = symbol($1.content);
        insert_symbol(symbol_table_idx, sym);
        update_symbol(
            symbol_table_idx,
            $2.line_idx, 
            $2.column_idx, 
            scope_id, 
            0, 
            $2.content
        );
        symbol_table_idx++;
        symbol_table_size++;

        $$ = create_node("function_declaration", "", 0);
        $$->children[0] = create_node("TYPE", $1.content, 1);
        $$->children[1] = create_node("identifier", $2.content, 1);
        $$->children[2] = NULL;
        $$->children[3] = $5;
    }
    | TYPE IDENTIFIER '(' params ')' block {
        scope_id++;
        T_Symbol sym = symbol($1.content);
        insert_symbol(symbol_table_idx, sym);
        update_symbol(
            symbol_table_idx,
            $2.line_idx, 
            $2.column_idx, 
            scope_id, 
            0, 
            $2.content
        );
        symbol_table_idx++;
        symbol_table_size++;
        $$ = create_node("function_declaration", "", 0);
        $$->children[0] = create_node("identifier", $1.content, 1);
        $$->children[1] = create_node("identifier", $2.content, 1);
        $$->children[2] = $4;
        $$->children[3] = $6;
    }
;

function_call
    : IDENTIFIER '(' ')' {
        $$ = create_node("identifier", $1.content, 1);
    }
    | IDENTIFIER '(' expression ')' {
        $$ = create_node("identifier", $1.content, 1);
    }
;

params
    : variable_declaration ',' params {
        $$ = create_node("params", "", 0);
        $$->children[0] = $1;
    }
    | variable_declaration {
        $$ = $1;
    }
;

block
    : '{' statment '}' {
        $$ = $2;
    }
    | error {}
;

conditional_statment
    : RW_IF '(' expression ')' block {
        $$ = create_node("conditional_statment", "if", 0);
        $$->children[0] = $3;
        $$->children[1] = $5;
    }
    | RW_IF '(' expression ')' block RW_ELSE block {
        $$ = create_node("conditional_statment", "if_else", 0);
        $$->children[0] = $3;
        $$->children[1] = $5;
        $$->children[2] = create_node("else", $6.content, 0);
        $$->children[2]->children[0] = $7;
    }
;

input_statment
    : IO_READ '(' IDENTIFIER ')' ';' {
        $$ = create_node("input_statment", $1.content, 0);
        $$->children[0] = create_node("identifier", $3.content, 1);
    }
;

output_statment
    : IO_WRITE '(' C_STRING ')' ';' {
        $$ = create_node("output_statment", $1.content, 0);
        $$->children[0] = create_node("string_constant", $3.content, 1);
    }
    | IO_WRITE '(' expression ')' ';' {
        $$ = create_node("output_statment", $1.content, 0);
        $$->children[0] = $3;
    }
;

for_statment
    : RW_FOR '(' variable_assignment ';' comparison_expression ';' variable_assignment ')' block {
        $$ = create_node("for_statment", $1.content, 0);
        $$->children[0] = $3;
        $$->children[1] = $5;
        $$->children[2] = $7;
        $$->children[3] = $9;
    }
;

list_binary_operation_statment
    : IDENTIFIER '=' binary_operation {
        $$ = create_node("list_assign_operator","=", 0);
        $$->children[0] = $3;
    }
;

binary_operation:
    IDENTIFIER BINARY_LIST_OP IDENTIFIER ';' {
        $$ = create_node("binary_operation", $2.content, 0);
        $$->children[0] = create_node("identifier", $1.content, 1);
        $$->children[1] = create_node("identifier", $3.content, 1);
    }
;

list_unary_operation_expression
    : UNARY_LIST_OP IDENTIFIER {
        $$ = create_node("unary_list_operator", $1.content, 0);
        $$->children[0] = create_node("identifier", $2.content, 1);
    }
;

statment
    : statment variable_assignment ';' {
        $$ = $2;
        $$->children[0] = create_node("statment", "", 0);
    }
    | statment variable_declaration ';' {
        $$ = $2;
        $$->children[0] = create_node("statment", "", 0);
    }
    | statment return_statment {
        $$ = $2;
        $$->children[0] = create_node("statment", "", 0);
    }
    | statment conditional_statment {
        $$ = $2;
        $$->children[0] = create_node("statment", "", 0);
    }
    | statment input_statment {
        $$ = $2;
        $$->children[0] = create_node("statment", "", 0);
    }
    | statment output_statment {
        $$ = $2;
        $$->children[0] = create_node("statment", "", 0);
    }
    | statment for_statment {
        $$ = $2;
        $$->children[0] = create_node("statment", "", 0);
    }
    | statment list_binary_operation_statment {
        $$ = $2;
        $$->children[0] = create_node("statment", "", 0);
    }
    | statment function_call ';' {
        $$ = $2;
        $$->children[0] = create_node("statment", "", 0);
    }
    | variable_declaration ';' { $$ = $1; }
    | variable_assignment ';' { $$ = $1; }
    | return_statment { $$ = $1; }
    | conditional_statment { $$ = $1; }
    | input_statment { $$ = $1; }
    | output_statment { $$ = $1; }
    | for_statment { $$ = $1; }
    | list_binary_operation_statment { $$ = $1; }
    | function_call ';' { $$ = $1; }
    | error {}
;

expression
    : comparison_expression {
        $$ = $1;
    }
    | error {}
;

comparison_expression
    : comparison_expression COMPARISON_OP logical_expression_or {
        $$ = create_node("comparison_expression", $2.content, 0);
        $$->children[0] = $1;
        $$->children[1] = $3;
    }
    | logical_expression_or {
        $$ = $1;
    }
;

logical_expression_or
    : logical_expression_or LOGICAL_OP_OR logical_expression_and {
        $$ = create_node("logical_expression_or", $2.content, 0);
        $$->children[0] = $1;
        $$->children[1] = $3;
    }
    | logical_expression_and {
        $$ = $1;
    }
;

logical_expression_and
    : logical_expression_and LOGICAL_OP_AND aritmetic_expression_additive {
        $$ = create_node("logical_expression_and", $2.content, 0);
        $$->children[0] = $1;
        $$->children[1] = $3;
    }
    | aritmetic_expression_additive {
        $$ = $1;
    }
;

aritmetic_expression_additive
    : aritmetic_expression_additive ARITMETIC_OP_ADDITIVE aritmetic_expression_multiplicative{
        $$ = create_node("aritmetic_expression_additive", $2.content, 0);
        $$->children[0] = $1;
        $$->children[1] = $3;
    }
    | aritmetic_expression_multiplicative {
        $$ = $1;
    }
;

aritmetic_expression_multiplicative
    : aritmetic_expression_multiplicative ARITMETIC_OP_MULTIPLICATIVE value {
        $$ = create_node("aritmetic_expression_multiplicative", $2.content, 0);
        $$->children[0] = $1;
        $$->children[1] = $3;
    }
    | value { $$ = $1; }
;

return_statment
    : RW_RETURN expression ';' {
        $$ = create_node("return_statment", $1.content, 0);
        $$->children[0] = $2;
    }
;

value
    : IDENTIFIER { 
        $$ = create_node("identifier", $1.content, 1); 
    }
    | constant { 
        $$ = $1; 
    }
    | list_unary_operation_expression { 
        $$ = $1; 
    }
    | ARITMETIC_OP_ADDITIVE IDENTIFIER {
        // O QUE FAZER AQUI?
        $$ = create_node("signal_operator", $1.content, 0);
        $$->children[0] = create_node("identifier", $2.content, 1);
    }
    | ARITMETIC_OP_ADDITIVE constant {
        // O QUE FAZER AQUI?
        $$ = create_node("signal_operator", $1.content, 0);
        $$->children[0] = $2;
    }
    | '!' IDENTIFIER {
        // O QUE FAZER AQUI?
        $$ = create_node("exclamation_operator", "!", 0);
        $$->children[0] = create_node("identifier", $2.content, 1);
    }
    | '!' constant {
        $$ = create_node("exclamation_operator", "!", 0);
        $$->children[0] = $2;
    }
    | '(' expression ')' {
        $$ = $2;
    }
    | '!''(' expression ')' {
        $$ = create_node("exclamation_operator", "!", 0);
        $$->children[0] = $3;
    }
;

variable_assignment
    : IDENTIFIER '=' expression {
        $$ = create_node("variable_assignment", "=", 0);
        $$->children[0] = create_node("identifier", $1.content, 1);
        $$->children[1] = $3;
    }
    | IDENTIFIER '=' function_call {
        $$ = create_node("variable_assignment", "=", 0);
        $$->children[0] = create_node("identifier", $1.content, 1);
        $$->children[1] = $3;
    }
;

variable_declaration
    : TYPE IDENTIFIER {
        $$ = create_node("variable_declaration", "var_declaration", 0);
        $$->children[0] = create_node("TYPE", $1.content, 1);
        $$->children[1] = create_node("identifier", $2.content, 1);
        
        T_Symbol sym = symbol($1.content);
        insert_symbol(symbol_table_idx, sym);
        update_symbol(
            symbol_table_idx,
            $2.line_idx, 
            $2.column_idx,
            scope_id,
            1,
            $2.content
        );
        symbol_table_idx++;
        symbol_table_size++;
    }
;


constant
    : C_INTEGER {
        $$ = create_node("int_const", $1.content, 1);
    }
    | C_FLOAT {
        $$ = create_node("float_const", $1.content, 1);
    }
    | C_NIL {
        $$ = create_node("list_const", $1.content, 1);
    }
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
    freeTree(root_node);

    fclose(yyin);
    yylex_destroy();

    return 0;
}