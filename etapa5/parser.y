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
	int ultimoRotulo=-1;
	int ultimoReg=-1;
	int instId =-1;
	string rotMain;
	

		
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

%start prog

%right '?' ':'
%left TK_OC_OR
%left TK_OC_AND 
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
prog: programa {if(arvore != NULL) ((a_nodo*)arvore)->cod.appendCodigoInicio(geraCodigoInicial(rotMain,&instId));};
programa:  {$$ = NULL; arvore = $$;}
| programa func  { if ($1 == NULL){ $$ = $2; arvore = $2;} else{insere_filho($1,$2);((a_nodo*)arvore)->cod.appendCodigoFim($2->cod.getCodigo()); $$=$2; }}
| programa decla {$$ = $1;};

decla: tipo_stat lista_var ';' { libera_val($3);tabelas.atualizaTipoTamanho($1,&instId);};

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
var: TK_IDENTIFICADOR'[' pos_int ']' {tabelas.insereSimboloVet(get_line_number(),NAT_VET,$1,INDEF,$3->valor_lexico->tk_value.vInt,ESC_GLOBAL);libera_val($1); libera_val($2); libera($3);libera_val($4);}
| TK_IDENTIFICADOR {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$1,INDEF,ESC_GLOBAL);libera_val($1);};

bloco_fun: '{' fim_bloco { $$ =NULL; }
| '{' seq_comando fim_bloco { $$ = $2;} ;

lista_par_begin: '(' {tabelas.insereContexto(); libera_val($1);};
lista_par_end: ')'{libera_val($1);};

func_header:  tipo_stat  TK_IDENTIFICADOR lista_par_begin lista_par lista_par_end{$$ = insere_nodo(NULL,$2);$$->reg = geraRotulo(&ultimoRotulo);tabelas.insereFun(get_line_number(),$2,ultimoRotulo);tabelas.atualizaFunTipoPar($2,$1); atualiza_tipo_semantico($$,$1);}
|tipo_stat  TK_IDENTIFICADOR lista_par_begin lista_par_end{$$ = insere_nodo(NULL,$2);$$->reg = geraRotulo(&ultimoRotulo);tabelas.insereFun(get_line_number(),$2,ultimoRotulo);tabelas.atualizaFunTipoPar($2,$1); atualiza_tipo_semantico($$,$1);};
func: func_header bloco_fun {string rotTemp = geraRotulo(&ultimoRotulo); $$ = insere_filho( $1,$2); $$->cod.appendInstCodigo(geraInst2op(rotTemp,"","",INST_NOP_ROT,&instId)); if("main" == string($$->valor_lexico->tk_value.vStr)) rotMain = rotTemp; if($2 != NULL){$$->cod.appendCodigoFim($2->cod.getCodigo()); if("main" == string($$->valor_lexico->tk_value.vStr))$$->cod.appendInstFimCodigo(geraInst2op("","","",INST_HALT,&instId));}}


lista_par: lista_par ',' tipo_cons TK_IDENTIFICADOR {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$4,$3);tabelas.empilhaParametro($4);libera_val($2); libera_val($4); }
| tipo_cons TK_IDENTIFICADOR {tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$2,$1); tabelas.empilhaParametro($2);libera_val($2);}; 

com_bloco: '{' {int desloc = tabelas.getDeslocamentoAtual(); tabelas.insereContexto();tabelas.setDeslocamentoAtual(desloc);libera_val($1);};
fim_bloco: '}' {libera_val($1);  int desloc = tabelas.getDeslocamentoAtual();tabelas.popContexto();tabelas.setDeslocamentoAtual(desloc);};
bloco: com_bloco fim_bloco   { $$ =NULL; }
| com_bloco seq_comando fim_bloco { $$ = $2;} ;

//Definição da sequencia de comandos e abaixo os diferentes tipos de comandos
seq_comando: comando seq_comando{ $$ = $1; $$ = insere_filho($$,$2);if($2!=NULL){$$->cod.appendCodigoFim($2->cod.getCodigo());}}
| comando { $$ = $1; };

comando: bloco ';' {$$ = $1; libera_val($2);} 
| decla_loc ';' {$$ = $1; libera_val($2);}
| atrib ';' {$$ = $1; libera_val($2);}
| in_out ';' {$$ = $1; libera_val($2);}
| shift_right ';' {$$ = $1; libera_val($2);}
| shift_left ';'{$$ = $1; libera_val($2);}
| ret_cont_break ';' {$$ = $1; libera_val($2);}
| fun_call ';' {$$ = $1; libera_val($2);}
| comando_controle_fluxo ';' {$$ = $1; libera_val($2);};

decla_loc: tipo_stat_cons lista_var_loc { $$ = $2;list<Instrucao> listaI = tabelas.atualizaTipoTamanho($1,&instId); if($$!=NULL){$$->cod.appendCodigoInicio(tabelas.fazInic(&ultimoReg,&ultimoRotulo,&instId));$$->cod.appendCodigoInicio(listaI);}else{$$ = insere_nodo_tipo(NULL,NULL,NO_TEMP);$$->cod.appendCodigoInicio(listaI); }};

lista_var_loc: lista_var_loc ',' var_loc {libera_val($2); $$ = insere_filho($1,$3);}
| var_loc { $$ = $1;};

var_loc: TK_IDENTIFICADOR TK_OC_LE id_lit { $$ = insere_nodo(NULL,$2); $$= insere_filho($$,insere_nodo(NULL,$1));$$= insere_filho($$,$3);tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$1,INDEF);tabelas.insereInicPendente($1,$3->valor_lexico);}
| TK_IDENTIFICADOR { $$ = NULL;tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$1,INDEF); libera_val($1);};

id_lit: literal {$$ = $1;}
| TK_IDENTIFICADOR {$$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,tabelas.getTipoPorValorLex($1));};

literal: all_int {$$ = $1;atualiza_tipo_semantico($$,ID_INT);}
| all_float {$$ = $1;atualiza_tipo_semantico($$,ID_FLOAT);}
| TK_LIT_FALSE {$$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_BOOL);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_BOOL);}
| TK_LIT_TRUE  {$$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_BOOL);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_BOOL);}
| TK_LIT_CHAR {$$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_CHAR);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_CHAR);}
| TK_LIT_STRING {$$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_STRING);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_STRING);};

literal_num_bool: TK_LIT_INT {$$ = insere_nodo(NULL,$1);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_INT);atualiza_tipo_semantico($$,ID_INT);$$->reg =geraRegistrador(&ultimoReg);$$->cod.appendInstCodigo(geraInst2op("loadI",to_string($$->valor_lexico->tk_value.vInt),$$->reg,INST_LOADI,&instId));}
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

atrib: var_vet '=' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);tabelas.verificaAtrib($1,$3);atualiza_tipo_semantico($$,$1->tipo_valor_semantico);DadoTabelaSimbolos dado = tabelas.getSimboloPorValorLex($1->valor_lexico); $$->cod.appendCodigoInicio(geraInstAtribTipoDesloc(dado.deslocamento, dado.escopo ,$3->tipo_valor_semantico,$3->reg ,&($3->cod),$3->idRemendosTrue,$3->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId));};

var_vet: TK_IDENTIFICADOR { $$= insere_nodo(NULL,$1);atualiza_tipo_semantico($$,tabelas.getTipoPorValorLex($1));tabelas.verificaVar($1);}
| TK_IDENTIFICADOR '[' exp ']' { libera_val($2);libera_val($4);
$$ = insere_nodo(NULL,geraVal(TIPO_VET,NOT_LIT,get_line_number(),(char*)"[]")); insere_filho($$,insere_nodo(NULL,$1)); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.getTipoPorValorLex($1));tabelas.verificaVetor($1,$3);};

ret_cont_break: TK_PR_RETURN exp {$$ = insere_nodo($2,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"return"));tabelas.verificaReturn($2->tipo_valor_semantico,get_line_number());}
| TK_PR_BREAK  {$$ = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"break"));}
| TK_PR_CONTINUE  {$$ = insere_nodo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"continue"));};

in_out: TK_PR_INPUT TK_IDENTIFICADOR {$$ = insere_nodo(insere_nodo(NULL,$2),geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"input"));tabelas.avaliaInput($2);}
| TK_PR_OUTPUT id_lit {$$ = insere_nodo($2,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"output")); tabelas.avaliaOutput($2->valor_lexico);};

shift_right:  var_vet TK_OC_SR pos_int { $$ = insere_nodo($1,$2); insere_filho($$,$3);tabelas.avaliaShift($3->valor_lexico); };

shift_left: var_vet TK_OC_SL pos_int { $$ = insere_nodo($1,$2); insere_filho($$,$3); tabelas.avaliaShift($3->valor_lexico);};

fun_call: TK_IDENTIFICADOR '(' fun_input ')' { libera_val($2); libera_val($4); $$ = insere_nodo_tipo($3,$1,NO_FUN_CALL);int tipo = tabelas.verificaFuncao($1,$3,get_line_number()); atualiza_tipo_semantico($$,tipo);} ;

lista_arg: id_lit_exp ',' lista_arg { libera_val($2); $$ = insere_filho($1,$3); $1->is_arg = true; }
| id_lit_exp {$$ = $1; $$->is_arg =true;};

fun_input: {$$=NULL;}
|lista_arg {$$=$1;};

id_lit_exp: TK_LIT_CHAR { $$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_CHAR);tabelas.insereSimboloNonVet(get_line_number(),NAT_LIT,$1,ID_CHAR);}
| TK_LIT_STRING { $$ = insere_nodo(NULL,$1);atualiza_tipo_semantico($$,ID_STRING);tabelas.insereSimboloNonVet(get_line_number(),NAT_VAR,$1,ID_STRING);} 
| exp { $$ = $1;};

//Definição das expressões

exp: literal_num_bool {$$ = $1;} 
| var_vet {$$ = $1;$$->reg = geraRegistrador(&ultimoReg);DadoTabelaSimbolos dado = tabelas.getSimboloPorValorLex($1->valor_lexico); $$->cod.appendCodigoInicio(geraLeituraVar($$->reg,dado.deslocamento,dado.escopo,&ultimoReg,&ultimoRotulo,&instId));}
| fun_call {$$ = $1;} 
| '(' exp ')' {$$ = $2; libera_val($1); libera_val($3);} 
| exp_unitaria {$$ = $1;} 
| exp '+' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));$$->reg =geraRegistrador(&ultimoReg);$$->cod.appendInstCodigo(geraInst3op("add",$1->reg,$3->reg,$$->reg,INST_ARITLOG,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp '-' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));$$->reg =geraRegistrador(&ultimoReg);$$->cod.appendInstCodigo(geraInst3op("sub",$1->reg,$3->reg,$$->reg,INST_ARITLOG,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp '*' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));$$->reg =geraRegistrador(&ultimoReg);$$->cod.appendInstCodigo(geraInst3op("mult",$1->reg,$3->reg,$$->reg,INST_ARITLOG,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp '/' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));$$->reg =geraRegistrador(&ultimoReg);$$->cod.appendInstCodigo(geraInst3op("div",$1->reg,$3->reg,$$->reg,INST_ARITLOG,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp '%' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '|' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '&' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp '^' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,tabelas.infereTipo($1,$3));}
| exp TK_OC_LE exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,ID_BOOL);$$->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",$$->reg,INST_CBR,&instId);$$->idRemendosTrue.push_front(inst.id);$$->idRemendosFalse.push_front(inst.id);$$->cod.appendInstCodigo(inst);$$->cod.appendInstCodigo(geraInst3op("cmp_LE",$1->reg,$3->reg,$$->reg,INST_REL,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp TK_OC_GE exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,ID_BOOL);$$->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",$$->reg,INST_CBR,&instId);$$->idRemendosTrue.push_front(inst.id);$$->idRemendosFalse.push_front(inst.id);$$->cod.appendInstCodigo(inst);$$->cod.appendInstCodigo(geraInst3op("cmp_GE",$1->reg,$3->reg,$$->reg,INST_REL,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp TK_OC_EQ exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,ID_BOOL);$$->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",$$->reg,INST_CBR,&instId);$$->idRemendosTrue.push_front(inst.id);$$->idRemendosFalse.push_front(inst.id);$$->cod.appendInstCodigo(inst);$$->cod.appendInstCodigo(geraInst3op("cmp_EQ",$1->reg,$3->reg,$$->reg,INST_REL,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp TK_OC_NE exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,ID_BOOL);$$->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",$$->reg,INST_CBR,&instId);$$->idRemendosTrue.push_front(inst.id);$$->idRemendosFalse.push_front(inst.id);$$->cod.appendInstCodigo(inst);$$->cod.appendInstCodigo(geraInst3op("cmp_NE",$1->reg,$3->reg,$$->reg,INST_REL,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp TK_OC_AND exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,ID_BOOL);string rotTrue = geraRotulo(&ultimoRotulo); Instrucao nopInst = geraInst2op(rotTrue,"","",INST_NOP_ROT,&instId); $$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendInstCodigo(nopInst);$1->cod.remendaTrue($1->idRemendosTrue,rotTrue);$1->idRemendosTrue.clear();$$->cod.appendCodigoInicio($1->cod.getCodigo());appendListaTrue($$,$3->idRemendosTrue);appendListaFalse($$,$3->idRemendosFalse); appendListaFalse($$,$1->idRemendosFalse); }
| exp TK_OC_OR exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,ID_BOOL);string rotFalse = geraRotulo(&ultimoRotulo); Instrucao nopInst = geraInst2op(rotFalse,"","",INST_NOP_ROT,&instId); $$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendInstCodigo(nopInst);$1->cod.remendaFalse($1->idRemendosFalse,rotFalse);$1->idRemendosFalse.clear();$$->cod.appendCodigoInicio($1->cod.getCodigo());appendListaTrue($$,$3->idRemendosTrue);appendListaFalse($$,$3->idRemendosFalse); appendListaTrue($$,$1->idRemendosTrue);}
| exp '<' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,ID_BOOL);$$->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",$$->reg,INST_CBR,&instId);$$->idRemendosTrue.push_front(inst.id);$$->idRemendosFalse.push_front(inst.id);$$->cod.appendInstCodigo(inst);$$->cod.appendInstCodigo(geraInst3op("cmp_LT",$1->reg,$3->reg,$$->reg,INST_REL,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp '>' exp { $$ = insere_nodo(NULL,$2); insere_filho($$,$1); insere_filho($$,$3);atualiza_tipo_semantico($$,ID_BOOL);$$->reg = geraRegistrador(&ultimoReg);Instrucao inst =geraInst3op("cbr","x","y",$$->reg,INST_CBR,&instId);$$->idRemendosTrue.push_front(inst.id);$$->idRemendosFalse.push_front(inst.id);$$->cod.appendInstCodigo(inst);$$->cod.appendInstCodigo(geraInst3op("cmp_GT",$1->reg,$3->reg,$$->reg,INST_REL,&instId));$$->cod.appendCodigoInicio($3->cod.getCodigo());$$->cod.appendCodigoInicio($1->cod.getCodigo());}
| exp '?' exp ':' exp { $$ = insere_nodo(NULL,geraVal(TIPO_CHAR_ESP,NOT_LIT,get_line_number(),(char*)"?:")); insere_filho($$,$1); insere_filho($$,$3); insere_filho($$,$5);libera_val($2);libera_val($4);atualiza_tipo_semantico($$,tabelas.infereTipo($3,$5));};

comando_controle_fluxo: comando_if {$$ = $1;}
| comando_for {$$ = $1;}
| comando_while {$$ = $1;};

comando_if: TK_PR_IF '(' exp ')' bloco  { $$ = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); $$= insere_filho($$,$3); $$= insere_filho($$,$5); libera_val($2); libera_val($4); string rotT = geraRotulo(&ultimoRotulo);string rotF = geraRotulo(&ultimoRotulo);ListaInst ListI; if($5==NULL){ListI = ListaInst();}else{ListI = $5->cod;}$$->cod.appendCodigoInicio(geraInstIfElse($3->tipo_valor_semantico,$3->reg,&($3->cod),ListI,ListI,$3->idRemendosTrue,$3->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId,rotT,rotF,rotF));$3->idRemendosFalse.clear();$3->idRemendosTrue.clear();}
| TK_PR_IF '(' exp ')' bloco TK_PR_ELSE bloco { $$ = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"if"),NO_IF); $$ = insere_filho($$,$3); $$ = insere_filho($$,$5); insere_filho($$,$7); libera_val($2); libera_val($4); string rotT = geraRotulo(&ultimoRotulo);string rotF = geraRotulo(&ultimoRotulo); string rotEnd = geraRotulo(&ultimoRotulo); ListaInst ListT,ListF; if($5==NULL){ListT = ListaInst();}else{ListT = $5->cod;} if($7==NULL){ListF = ListaInst();}else{ListF = $7->cod;} $$->cod.appendCodigoInicio(geraInstIfElse($3->tipo_valor_semantico,$3->reg,&($3->cod),ListT,ListF,$3->idRemendosTrue,$3->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId,rotT,rotF,rotEnd));$3->idRemendosFalse.clear();};

comando_for: TK_PR_FOR '(' atrib ':' exp ':' atrib ')' bloco { $$ = insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"for"),NO_FOR); $$ = insere_filho($$,$3); $$ = insere_filho($$,$5); $$ = insere_filho($$,$7); $$ = insere_filho($$,$9); libera_val($6); libera_val($4); libera_val ($2);libera_val($8); string rotT = geraRotulo(&ultimoRotulo);string rotEnd = geraRotulo(&ultimoRotulo);ListaInst ListI; if($9==NULL){ListI = ListaInst();}else{ListI = $9->cod;}$$->cod.appendCodigoInicio(geraInstFor($5->tipo_valor_semantico,$5->reg,&($5->cod),ListI,$3->cod,$7->cod,$5->idRemendosTrue,$5->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId,rotT,rotEnd));$5->idRemendosFalse.clear();$5->idRemendosTrue.clear();$3->idRemendosTrue.clear();};

comando_while: TK_PR_WHILE '(' exp ')' TK_PR_DO bloco { $$ =  insere_nodo_tipo(NULL,geraVal(TIPO_RSV_WRD,NOT_LIT,get_line_number(),(char*)"while"),NO_WHILE); $$ = insere_filho($$,$3); $$ = insere_filho($$,$6); libera_val($2); libera_val($4); string rotT = geraRotulo(&ultimoRotulo);string rotEnd = geraRotulo(&ultimoRotulo);ListaInst ListI; if($6==NULL){ListI = ListaInst();}else{ListI = $6->cod;}$$->cod.appendCodigoInicio(geraInstWhile($3->tipo_valor_semantico,$3->reg,&($3->cod),ListI,$3->idRemendosTrue,$3->idRemendosFalse,&ultimoReg,&ultimoRotulo,&instId,rotT,rotEnd));$3->idRemendosFalse.clear();$3->idRemendosTrue.clear();}; 

op_unitario: '+' { $$ = insere_nodo(NULL,$1);}
|'-' { $$ = insere_nodo(NULL,$1);}
|'|' { $$ = insere_nodo(NULL,$1);}
|'*' { $$ = insere_nodo(NULL,$1);}
|'!' { $$ = insere_nodo(NULL,$1);}
|'&' { $$ = insere_nodo(NULL,$1);}
|'#' { $$ = insere_nodo(NULL,$1);}
|'?' { $$ = insere_nodo(NULL,$1);};
exp_unitaria: op_unitario exp { $$ = $1; insere_filho($$,$2);atualiza_tipo_semantico($$,$2->tipo_valor_semantico); if(string ($1->valor_lexico->tk_value.vStr) == "-") $$->reg =geraRegistrador(&ultimoReg);string reg0 = geraRegistrador(&ultimoReg); $$->cod.appendInstCodigo(geraInst3op("sub",reg0,$2->reg,$$->reg,INST_ARITLOG,&instId));$$->cod.appendCodigoInicio($2->cod.getCodigo());$$->cod.appendInstCodigo(geraInst2op("loadI","0",reg0,INST_LOADI,&instId));} %prec PREC_UNA; 	
%%

int yyerror(char const *s){
	printf("%s at line %d UNEXPECTED token \"%s\" \n", s,get_line_number(), yytext);
	return 1;
}
