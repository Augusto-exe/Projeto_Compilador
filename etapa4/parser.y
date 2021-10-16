/* Grupo C - Augusto Exenberger Becker e Vitória Lentz */

%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string>
	
	#include "pilhaContexto.hpp"
	using namespace std;

	extern "C" {
		int yyparse(void);
		int yylex(void);  
		int yywrap() {
			return 1;
		}
	}
	int yyerror (char const *s);
	extern int get_line_number (void);
	extern char *yytext;
	extern void *arvore;
	extern PilhaContexto tabelas;


		
%}

%union{
	struct lexic_val_type* valor_lexico;
	struct arvore* nodo;
	int tipo;	
}

%token  TK_PR_INT
%token  TK_PR_FLOAT
%token  TK_PR_BOOL
%token  TK_PR_CHAR
%token  TK_PR_STRING
%token <valor_lexico> TK_PR_IF
%token TK_PR_THEN
%token TK_PR_ELSE
%token <valor_lexico> TK_PR_WHILE
%token TK_PR_DO
%token TK_PR_INPUT
%token TK_PR_OUTPUT
%token TK_PR_RETURN
%token TK_PR_CONST
%token TK_PR_STATIC
%token TK_PR_FOREACH
%token <valor_lexico> TK_PR_FOR
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
%type <nodo> func_header

%type <nodo> bloco
%type <nodo> bloco_fun
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
%type <nodo> exp
%type <nodo> exp_unitaria
%type <nodo> op_unitario
%type <nodo> var_vet
%type <nodo> lista_arg
%type <nodo> fun_input
%type <nodo> id_lit_exp
%type <nodo> comando_if
%type <nodo> comando_for
%type <nodo> comando_while
%type <tipo> tipo_stat_cons
%type <tipo> tipo_cons
%type <tipo> tipo_stat
%type <tipo> tipo_nome

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

decla: tipo_stat lista_var ';' { libera_val($3);tabelas.atualizaTipoTamanho($1);};

//Definição dos tipos com indicadores prefixados ou não para declaracoes globais

tipo_stat: TK_PR_STATIC tipo_nome {$$ = $2;}
| tipo_nome{$$ = $1;};
tipo_cons: TK_PR_CONST tipo_nome{$$ =$2;} 
| tipo_nome {$$ =$1;};

tipo_nome: TK_PR_INT {$$ = ID_INT;}
| TK_PR_FLOAT {$$ = ID_FLOAT;}
| TK_PR_CHAR {$$ = ID_CHAR;}
| TK_PR_BOOL {$$ = ID_BOOL;}
| TK_PR_STRING{$$ = ID_STRING;};

tipo_stat_cons: TK_PR_STATIC TK_PR_CONST tipo_nome {$$ = $3;}
| TK_PR_CONST tipo_nome {$$ = $2;}
| TK_PR_STATIC tipo_nome {$$ = $2;} 
| tipo_nome {$$ = $1;};

lista_var: lista_var ',' var 
| var ;
var: TK_IDENTIFICADOR'[' pos_int ']' {tabelas.insereSimboloVet(get_line_number(),NAT_VET,$1,INDEF,$3->valor_lexico->tk_value.vInt);libera_val($1); libera_val($2); libera($3);libera_val($4);}
| TK_IDENTIFICADOR {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$1,INDEF);libera_val($1);};

bloco_fun: '{' fim_bloco { $$ =NULL; }
| '{' seq_comando fim_bloco { $$ = $2;} ;

lista_par_begin: '(' {tabelas.insereContexto(); libera_val($1);};
lista_par_end: ')'{libera_val($1);};

func_header:  tipo_stat  TK_IDENTIFICADOR lista_par_begin lista_par lista_par_end{tabelas.insereFun(get_line_number(),$2);$$ = insere_nodo(NULL,$2);tabelas.atualizaFunTipoPar($2,$1); atualiza_tipo_semantico($$,$1);};
func: func_header bloco_fun { $$ = insere_filho( $1,$2); }
| tipo_stat TK_IDENTIFICADOR '('')' bloco {$$ = insere_nodo( $5, $2); libera_val($3); libera_val($4);atualiza_tipo_semantico($$,$1); };


lista_par: lista_par ',' tipo_cons TK_IDENTIFICADOR {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$4,$3);tabelas.empilhaParametro($4);libera_val($2); libera_val($4); }
| tipo_cons TK_IDENTIFICADOR {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$2,$1); tabelas.empilhaParametro($2);libera_val($2);}; 

com_bloco: '{' {tabelas.insereContexto();libera_val($1);};
fim_bloco: '}' {libera_val($1);tabelas.popContexto();};
bloco: com_bloco fim_bloco   { $$ =NULL; }
| com_bloco seq_comando fim_bloco { $$ = $2;} ;

//Definição da sequencia de comandos e abaixo os diferentes tipos de comandos
seq_comando: comando seq_comando { $$ = $1; $$ = insere_filho($$,$2); }
| comando { $$ = $1; };

comando: bloco ';' {$$ = NULL; libera_val($2);} 
| decla_loc ';' {$$ = $1; libera_val($2);}
| atrib ';' {$$ = $1; libera_val($2);}
| in_out ';' {$$ = $1; libera_val($2);}
| shift_right ';' {$$ = $1; libera_val($2);}
| shift_left ';'{$$ = $1; libera_val($2);}
| ret_cont_break ';' {$$ = $1; libera_val($2);}
| fun_call ';' {$$ = $1; libera_val($2);}
| comando_controle_fluxo ';' {$$ = $1; libera_val($2);}

decla_loc: tipo_stat_cons lista_var_loc { $$ = $2;tabelas.atualizaTipoTamanho($1);};

lista_var_loc: lista_var_loc ',' var_loc {libera_val($2); $$ = insere_filho($1,$3);}
| var_loc { $$ = $1; };

var_loc: TK_IDENTIFICADOR TK_OC_LE id_lit { $$ = insere_nodo(NULL,$2); $$= insere_filho($$,insere_nodo(NULL,$1));$$= insere_filho($$,$3);tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$1,INDEF);}
| TK_IDENTIFICADOR { $$ = NULL;tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$1,INDEF); libera_val($1);};

id_lit: literal {$$ = $1;}
| TK_IDENTIFICADOR {$$ = insere_nodo(NULL,$1);};

literal: all_int {$$ = $1;atualiza_tipo_semantico($$,ID_INT);}
| all_float {$$ = $1;atualiza_tipo_semantico($$,ID_FLOAT);}
| TK_LIT_FALSE {$$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_BOOL);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_BOOL);}
| TK_LIT_TRUE  {$$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_BOOL);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_BOOL);}
| TK_LIT_CHAR {$$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_CHAR);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_CHAR);}
| TK_LIT_STRING {$$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_STRING);tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$1,ID_STRING);};

literal_num_bool: TK_LIT_INT {$$ = insere_nodo(NULL,$1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_INT);atualiza_tipo_semantico($$,ID_INT);}
| TK_LIT_FLOAT {$$ = insere_nodo(NULL,$1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_FLOAT);atualiza_tipo_semantico($$,ID_FLOAT);}
| TK_LIT_FALSE {$$ = insere_nodo(NULL,$1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_BOOL);atualiza_tipo_semantico($$,ID_BOOL);}
| TK_LIT_TRUE {$$ = insere_nodo(NULL,$1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_BOOL);atualiza_tipo_semantico($$,ID_BOOL);};

pos_int: '+' TK_LIT_INT {$$ = insere_nodo(NULL,$2); libera_val($1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$2,ID_INT);atualiza_tipo_semantico($$,ID_INT);}
| TK_LIT_INT {$$ = insere_nodo(NULL,$1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_INT);atualiza_tipo_semantico($$,ID_INT);};

all_int: '-' TK_LIT_INT { $$ = insere_nodo(NULL,inverte_sinal($2)); libera_val($1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,inverte_sinal($2),ID_INT);atualiza_tipo_semantico($$,ID_INT);}
| TK_LIT_INT {$$ = insere_nodo(NULL,$1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_INT);atualiza_tipo_semantico($$,ID_INT);}
| '+' TK_LIT_INT {$$ = insere_nodo(NULL,$2); libera_val($1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$2,ID_INT);atualiza_tipo_semantico($$,ID_INT);};

all_float: '-' TK_LIT_FLOAT { $$ = insere_nodo(NULL,inverte_sinal($2));libera_val($1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,inverte_sinal($2),ID_FLOAT);atualiza_tipo_semantico($$,ID_FLOAT);}
| TK_LIT_FLOAT {$$ = insere_nodo(NULL,$1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_FLOAT);atualiza_tipo_semantico($$,ID_FLOAT);}
| '+' TK_LIT_FLOAT {$$ = insere_nodo(NULL,$2); libera_val($1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$2,ID_FLOAT);atualiza_tipo_semantico($$,ID_FLOAT);};

atrib: var_vet '=' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);};

var_vet: TK_IDENTIFICADOR { $$= insere_nodo(NULL,$1);}
| TK_IDENTIFICADOR '[' exp ']' { libera_val($2);libera_val($4);
$$ = insere_nodo(NULL,geraVal(TIPO_VET,NOT_LIT,get_line_number(),(char*)"[]")); insere_filho($$,insere_nodo(NULL,$1)); insere_filho($$,$3);};

ret_cont_break: TK_PR_RETURN exp {$$ = insere_nodo($2,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"return"));}
| TK_PR_BREAK  {$$ = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"break"));}
| TK_PR_CONTINUE  {$$ = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"continue"));};

in_out: TK_PR_INPUT TK_IDENTIFICADOR {$$ = insere_nodo(insere_nodo(NULL,$2),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"input"));}
| TK_PR_OUTPUT id_lit {$$ = insere_nodo($2,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"output"));};

shift_right:  var_vet TK_OC_SR pos_int { $$ = insere_nodo($1,$2); insere_filho($$,$3); };

shift_left: var_vet TK_OC_SL pos_int { $$ = insere_nodo($1,$2); insere_filho($$,$3); };

fun_call: TK_IDENTIFICADOR '(' fun_input ')' { libera_val($2); libera_val($4); $$ = insere_nodo_tipo($3,$1,NO_FUN_CALL);tabelas.verificaFuncao($1,$3,get_line_number());} ;

lista_arg: id_lit_exp ',' lista_arg { libera_val($2); $$ = insere_filho($1,$3); $1->is_arg = true; }
| id_lit_exp {$$ = $1; $$->is_arg =true;};

fun_input: {$$=NULL;}
|lista_arg {$$=$1;};

id_lit_exp: TK_LIT_CHAR { $$ = insere_nodo(NULL,$1);}
| TK_LIT_STRING { $$ = insere_nodo(NULL,$1);} 
| exp { $$ = $1;};

//Definição das expressões

exp: literal_num_bool {$$ = $1;} 
| var_vet {$$ = $1;}
| fun_call {$$ = $1;} 
| '(' exp ')' {$$ = $2; libera_val($1); libera_val($3);} 
| exp_unitaria {$$ = $1;} 
| exp '+' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '-' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '*' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '/' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '%' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '|' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '&' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '^' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp TK_OC_LE exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp TK_OC_GE exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp TK_OC_EQ exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp TK_OC_NE exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp TK_OC_AND exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp TK_OC_OR exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '<' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '>' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '?' exp ':' exp { $$ = insere_nodo(NULL,geraVal(TIPO_CHAR_ESP,NOT_LIT,get_line_number(),(char*)"?:")); insere_filho($$,$1); insere_filho($$,$3); insere_filho($$,$5);libera_val($2);libera_val($4);atualiza_tipo_semantico($$,tabelas.infereTipoTern($1,$3,$5));};

comando_controle_fluxo: comando_if {$$ = $1;}
| comando_for {$$ = $1;}
| comando_while {$$ = $1;};

comando_if: TK_PR_IF '(' exp ')' bloco  { $$ = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); $$= insere_filho($$,$3); $$= insere_filho($$,$5); libera_val($2); libera_val($4);}
| TK_PR_IF '(' exp ')' bloco TK_PR_ELSE bloco { $$ = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); $$ = insere_filho($$,$3); $$ = insere_filho($$,$5); insere_filho($$,$7); libera_val($2); libera_val($4);};

comando_for: TK_PR_FOR '(' atrib ':' exp ':' atrib ')' bloco { $$ = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"for"),NO_FOR); $$ = insere_filho($$,$3); $$ = insere_filho($$,$5); $$ = insere_filho($$,$7); $$ = insere_filho($$,$9); libera_val($6); libera_val($4); libera_val ($2);libera_val($8);};

comando_while: TK_PR_WHILE '(' exp ')' TK_PR_DO bloco { $$ =  insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"while"),NO_WHILE); $$ = insere_filho($$,$3); $$ = insere_filho($$,$6); libera_val($2); libera_val($4);}; 

op_unitario: '+' { $$ = insere_nodo(NULL,$1);}
|'-' { $$ = insere_nodo(NULL,$1);}
|'|' { $$ = insere_nodo(NULL,$1);}
|'*' { $$ = insere_nodo(NULL,$1);}
|'!' { $$ = insere_nodo(NULL,$1);}
|'&' { $$ = insere_nodo(NULL,$1);}
|'#' { $$ = insere_nodo(NULL,$1);}
|'?' { $$ = insere_nodo(NULL,$1);};
exp_unitaria: op_unitario exp { $$ = $1; insere_filho($$,$2);atualiza_tipo_semantico($$,$2->tipo_valor_semantico);} %prec PREC_UNA; 	
%%

int yyerror(char const *s){
	printf("%s at line %d UNEXPECTED token \"%s\" \n", s,get_line_number(), yytext);
	return 1;
}
