/* Grupo C - Augusto Exenberger Becker e Vitória Lentz */
%{
int yylex(void);
int yyerror (char const *s);
extern int get_line_number (void);
extern char *yytext;
#include <stdlib.h>
#include <stdio.h>
%}

%token TK_PR_INT
%token TK_PR_FLOAT
%token TK_PR_BOOL
%token TK_PR_CHAR
%token TK_PR_STRING
%token TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token TK_PR_WHILE
%token TK_PR_DO
%token TK_PR_INPUT
%token TK_PR_OUTPUT
%token TK_PR_RETURN
%token TK_PR_CONST
%token TK_PR_STATIC
%token TK_PR_FOREACH
%token TK_PR_FOR
%token TK_PR_SWITCH
%token TK_PR_CASE
%token TK_PR_BREAK
%token TK_PR_CONTINUE
%token TK_PR_CLASS
%token TK_PR_PRIVATE
%token TK_PR_PUBLIC
%token TK_PR_PROTECTED
%token TK_PR_END
%token TK_PR_DEFAULT
%token TK_OC_LE
%token TK_OC_GE
%token TK_OC_EQ
%token TK_OC_NE
%token TK_OC_AND
%token TK_OC_OR
%token TK_OC_SL
%token TK_OC_SR
%token TK_LIT_INT
%token TK_LIT_FLOAT
%token TK_LIT_FALSE
%token TK_LIT_TRUE
%token TK_LIT_CHAR
%token TK_LIT_STRING
%token TK_IDENTIFICADOR
%token TOKEN_ERRO

%start programa

%%

programa: programa decla | programa func | func  | decla;
decla: tipo_stat lista_var ';';

tipo_stat: TK_PR_STATIC tipo_nome | tipo_nome;
tipo_cons: TK_PR_CONST tipo_nome | tipo_nome;
tipo_nome: TK_PR_INT | TK_PR_FLOAT | TK_PR_CHAR | TK_PR_BOOL | TK_PR_STRING;
tipo_stat_cons: TK_PR_STATIC TK_PR_CONST tipo_nome | TK_PR_CONST tipo_nome | TK_PR_STATIC tipo_nome | tipo_nome;

lista_var: lista_var ',' var | var;
var: TK_IDENTIFICADOR'['TK_LIT_INT ']' | TK_IDENTIFICADOR;

func: tipo_stat TK_IDENTIFICADOR '(' lista_par ')' bloco;
lista_par: lista_par ',' tipo_cons TK_IDENTIFICADOR | tipo_cons TK_IDENTIFICADOR; 
bloco: '{' '}'; | '{' seq_comando '}' ;

seq_comando: seq_comando comando | comando ;
comando: bloco ';' | decla_loc ';' | atrib ';' | in_out ';' | fun_call ';' | shift_right ';' | shift_left ';'| ret_cont_break ';';

decla_loc: tipo_stat_cons lista_var_loc ;
lista_var_loc: lista_var_loc ',' var_loc | var_loc;
var_loc: TK_IDENTIFICADOR TK_OC_LE id_lit | TK_IDENTIFICADOR;
id_lit: literal | TK_IDENTIFICADOR ;
literal: TK_LIT_INT | TK_LIT_FLOAT | TK_LIT_FALSE | TK_LIT_TRUE | TK_LIT_CHAR | TK_LIT_STRING;

atrib: var_vet '=' exp;
var_vet: TK_IDENTIFICADOR | TK_IDENTIFICADOR '[' exp_vazio ']';

retorno: TK_PR_RETURN exp_vazio;
ret_cont_break: retorno | TK_PR_BREAK | TK_PR_CONTINUE;

in_out: TK_PR_INPUT TK_IDENTIFICADOR | TK_PR_OUTPUT id_lit;

shift_right:  var_vet TK_OC_SR TK_LIT_INT;
shift_left: TK_LIT_INT TK_OC_SL var_vet;
fun_call: TK_IDENTIFICADOR '(' fun_input ')' ';'
lista_arg: lista_arg ',' id_lit_exp | id_lit_exp;
fun_input: lista_arg | ;
id_lit_exp: id_lit | exp;

exp: TOKEN_ERRO;//id_lit | fun_call;
exp_vazio: exp | ;

%%
int yyerror(char const *s){
	printf("%s at line %d UNEXPECTED token \"%s\" \n", s,get_line_number(), yytext);
	return 1;
}
