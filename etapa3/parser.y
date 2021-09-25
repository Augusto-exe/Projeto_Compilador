/* Grupo C - Augusto Exenberger Becker e Vitória Lentz */

%{

	int yylex(void);
	int yyerror (char const *s);
	extern int get_line_number (void);
	extern char *yytext;
	extern void *arvore;

	#include <stdlib.h>
	#include <stdio.h>
	#include "arvore.h"
		
%}

%union{
	struct lexic_val_type* valor_lexico;
	struct arvore* nodo;	
}

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
%token <valor_lexico> TK_OC_LE
%token <valor_lexico> TK_OC_GE
%token <valor_lexico> TK_OC_EQ
%token <valor_lexico> TK_OC_NE
%token <valor_lexico> TK_OC_AND
%token <valor_lexico> TK_OC_OR
%token <valor_lexico> TK_OC_SL
%token <valor_lexico> TK_OC_SR
%token <valor_lexico> TK_LIT_INT
%token <valor_lexico> TK_LIT_FLOAT
%token <valor_lexico> TK_LIT_FALSE
%token <valor_lexico> TK_LIT_TRUE
%token <valor_lexico> TK_LIT_CHAR
%token <valor_lexico> TK_LIT_STRING
%token <valor_lexico> TK_IDENTIFICADOR
%token TOKEN_ERRO

%token <valor_lexico> ','
%token <valor_lexico> ';' 
%token <valor_lexico>  ':'
%token <valor_lexico> '('
%token <valor_lexico> ')'
%token <valor_lexico> '['
%token <valor_lexico>  ']'
%token <valor_lexico> '{'
%token <valor_lexico> '}'
%token <valor_lexico> '+'
%token <valor_lexico> '-' 
%token <valor_lexico> '|' 
%token <valor_lexico> '*' 
%token <valor_lexico> '/' 
%token <valor_lexico> '<' 
%token <valor_lexico> '>' 
%token <valor_lexico> '=' 
%token <valor_lexico> '!' 
%token <valor_lexico> '&' 
%token <valor_lexico> '%' 
%token <valor_lexico> '#' 
%token <valor_lexico> '$' 
%token <valor_lexico> '^' 
%token <valor_lexico> '.' 
%token <valor_lexico> '?'

%type <nodo> programa
%type <nodo> func
%type <nodo> bloco
%type <nodo> seq_comando
%type <nodo> lista_par
%type <nodo> comando
%type <nodo> decla_loc
%type <nodo> atrib
%type <nodo> fun_call
%type <nodo> in_out
%type <nodo> shift_right
%type <nodo> shift_left
%type <nodo> ret_cont_break;
%type <nodo> comando_controle_fluxo
%type <nodo> lista_var_loc
%type <nodo> var_loc
%type <nodo> id_lit
%type <nodo> literal
%type <nodo> pos_int
%type <nodo> all_int
%type <nodo> all_float
%type <nodo> literal_num_bool







%start programa

%right '?' ':'
%left TK_OC_AND TK_OC_OR
%left '|'
%left '&' 
%left TK_OC_EQ TK_OC_NE
%left '<' '>' TK_OC_LE TK_OC_GE 
%left '+' '-'
%left '*' '/' '%'
%right '^'
%right PREC_UNA

%%
//Definição básica de um programa

programa:  {$$ = NULL; arvore = $$;}
| programa func  { if ($1 == NULL){ $$ = $2; arvore = $2;} else{ insere_filho($1,$2); $$=$2; } }
| programa decla {$$ = $1;};

decla: tipo_stat lista_var ';';

//Definição dos tipos com indicadores prefixados ou não para declaracoes globais

tipo_stat: TK_PR_STATIC tipo_nome 
| tipo_nome;
tipo_cons: TK_PR_CONST tipo_nome 
| tipo_nome;

tipo_nome: TK_PR_INT 
| TK_PR_FLOAT 
| TK_PR_CHAR 
| TK_PR_BOOL 
| TK_PR_STRING;

tipo_stat_cons: TK_PR_STATIC TK_PR_CONST tipo_nome 
| TK_PR_CONST tipo_nome 
| TK_PR_STATIC tipo_nome 
| tipo_nome;

lista_var: lista_var ',' var 
| var;
var: TK_IDENTIFICADOR'[' pos_int ']' 
| TK_IDENTIFICADOR;

func: tipo_stat TK_IDENTIFICADOR '(' lista_par ')' bloco {$$ = insere_nodo( $6,$2); libera_val($3); libera_val($5); }
| tipo_stat TK_IDENTIFICADOR '('')' bloco {$$ = insere_nodo( $5, $2); libera_val($3); libera_val($4); }; 

lista_par: lista_par ',' tipo_cons TK_IDENTIFICADOR {libera_val($2); libera_val($4); }
| tipo_cons TK_IDENTIFICADOR {libera_val($2);}; 

bloco: '{' '}'  { $$ =NULL; libera_val($1); libera_val($2);}
| '{' seq_comando '}' { $$ = $2; libera_val($1);libera_val($3);} ;

//Definição da sequencia de comandos e abaixo os diferentes tipos de comandos
seq_comando: seq_comando comando { $$ = insere_filho($1,$2); }
| comando { $$ = $1; };

comando: bloco ';' {$$ = NULL; libera_val($2);} 
| decla_loc ';' {$$ = $1; libera_val($2);}
| atrib ';' {$$ = $1; libera_val($2);}
| in_out ';' {$$ = $1; libera_val($2);}
| shift_right ';' {$$ = $1; libera_val($2);}
| shift_left ';'{$$ = $1; libera_val($2);}
| ret_cont_break ';' {$$ = $1; libera_val($2);}
| fun_call ';' {$$ = $1; libera_val($2);}
| comando_controle_fluxo ';' {$$ = $1; libera_val($2);} ; 

decla_loc: tipo_stat_cons lista_var_loc { $$ = $2;};

lista_var_loc: lista_var_loc ',' var_loc {libera_val($2);}
| var_loc { $$ = $1; };

var_loc: TK_IDENTIFICADOR TK_OC_LE id_lit { $$ = insere_nodo(NULL,$2); $$= insere_filho($$,insere_nodo(NULL,$1));$$= insere_filho($$,$3);}
| TK_IDENTIFICADOR { $$ = NULL;};

id_lit: literal {$$ = $1;}
| TK_IDENTIFICADOR {$$ = insere_nodo(NULL,$1);};

literal: all_int {$$ = $1;}
| all_float {$$ = $1;}
| TK_LIT_FALSE {$$ = insere_nodo(NULL,$1);}
| TK_LIT_TRUE  {$$ = insere_nodo(NULL,$1);}
| TK_LIT_CHAR {$$ = insere_nodo(NULL,$1);}
| TK_LIT_STRING {$$ = insere_nodo(NULL,$1);};

literal_num_bool: TK_LIT_INT {$$ = insere_nodo(NULL,$1);}
| TK_LIT_FLOAT {$$ = insere_nodo(NULL,$1);}
| TK_LIT_FALSE {$$ = insere_nodo(NULL,$1);}
| TK_LIT_TRUE {$$ = insere_nodo(NULL,$1);};

pos_int: '+' TK_LIT_INT {$$ = insere_nodo(NULL,$2); libera_val($1);}
| TK_LIT_INT {$$ = insere_nodo(NULL,$1);};

all_int: '-' TK_LIT_INT { $$ = insere_nodo(NULL,inverte_sinal($2)); libera_val($1);}
| TK_LIT_INT {$$ = insere_nodo(NULL,$1);}
| '+' TK_LIT_INT {$$ = insere_nodo(NULL,$2); libera_val($1);};

all_float: '-' TK_LIT_FLOAT { $$ = insere_nodo(NULL,inverte_sinal($2));libera_val($1);}
| TK_LIT_FLOAT {$$ = insere_nodo(NULL,$1);}
| '+' TK_LIT_FLOAT {$$ = insere_nodo(NULL,$2); libera_val($1);};

atrib: var_vet '=' exp;

var_vet: TK_IDENTIFICADOR 
| TK_IDENTIFICADOR '[' exp ']';

ret_cont_break: TK_PR_RETURN exp 
| TK_PR_BREAK 
| TK_PR_CONTINUE;

in_out: TK_PR_INPUT TK_IDENTIFICADOR 
| TK_PR_OUTPUT id_lit;

shift_right:  var_vet TK_OC_SR pos_int;

shift_left: var_vet TK_OC_SL pos_int;

fun_call: TK_IDENTIFICADOR '(' fun_input ')' ;

lista_arg: lista_arg ',' id_lit_exp 
| id_lit_exp;

fun_input: 
|lista_arg ;

id_lit_exp: TK_LIT_CHAR 
| TK_LIT_STRING 
| exp;

//Definição das expressões

exp: literal_num_bool 
| var_vet 
| fun_call 
| '(' exp ')' 
| exp_unitaria 
| exp '+' exp 
| exp '-' exp 
| exp '*' exp 
| exp '/' exp 
| exp '%' exp 
| exp '|' exp 
| exp '&' exp 
| exp '^' exp 
| exp TK_OC_LE exp 
| exp TK_OC_GE exp 
| exp TK_OC_EQ exp 
| exp TK_OC_NE exp 
| exp TK_OC_AND exp 
| exp TK_OC_OR exp 
| exp '<' exp 
| exp '>' exp 
| exp '?' exp ':' exp;

comando_controle_fluxo: comando_if 
| comando_for 
| comando_while;

comando_if: TK_PR_IF '(' exp ')' bloco 
| TK_PR_IF '(' exp ')' bloco TK_PR_ELSE bloco;

comando_for: TK_PR_FOR '(' atrib ':' exp ':' atrib ')' bloco;

comando_while: TK_PR_WHILE '(' exp ')' TK_PR_DO bloco;

op_unitario: '+'|'-'|'|'|'*'|'!'|'&'|'#'|'?';
exp_unitaria: op_unitario exp %prec PREC_UNA; 						//redefinindo a precedencia para operadores unários

%%

int yyerror(char const *s){
	printf("%s at line %d UNEXPECTED token \"%s\" \n", s,get_line_number(), yytext);
	return 1;
}
