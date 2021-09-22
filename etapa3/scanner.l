	/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */

%option yylineno
%{
	#include "parser.tab.h"
	#include "common.h"
	#include  <string.h>

	int get_line_number();
%}



letra_ [A-Za-z_]
digito [0-9]
inteiro {digito}+
expoent [eE][+-]?{inteiro}
float {inteiro}"."{digito}+({expoent})?
identificador {letra_}({letra_}|{digito})*
char_lit \'[^"'"]\'
string_lit \"[^"""]+\"
comment_1 \/\/.*"\n"
comment_2 \/\*([^"*/"]*"\n"*[^"*/"]*)*\*\/
comment comment_1|comment_2
char_esp ","|";"|":"|"("|")"|"["|"]"|"{"|"}"|"+"|"-"|"|"|"*"|"/"|"<"|">"|"="|"!"|"&"|"%"|"#"|"$"|"^"|"."|"?"
erro_com \/\*([^"*/"]*"\n"*[^"*/"]*)*


%%
{comment_1} { }
{comment_2} { }

"true" {yylval.valor_lexico = geraVal(TIPO_LIT,LIT_TIPO_BOOL,get_line_number(),yytext); return(TK_LIT_TRUE);}
"false" {yylval.valor_lexico = geraVal(TIPO_LIT,LIT_TIPO_BOOL,get_line_number(),yytext); return(TK_LIT_FALSE);}
{char_lit} {yylval.valor_lexico = geraVal(TIPO_LIT,LIT_TIPO_CHAR,get_line_number(),yytext); return(TK_LIT_CHAR);}
{string_lit} {yylval.valor_lexico = geraVal(TIPO_LIT,LIT_TIPO_STRING,get_line_number(),yytext); return(TK_LIT_STRING);}
{inteiro} {yylval.valor_lexico = geraVal(TIPO_LIT,LIT_TIPO_INT,get_line_number(),yytext); return(TK_LIT_INT);}
{float} {yylval.valor_lexico = geraVal(TIPO_LIT,LIT_TIPO_FLOAT,get_line_number(),yytext); return(TK_LIT_FLOAT);}
{char_esp} {yylval.valor_lexico = geraVal(TIPO_CHAR_ESP,NOT_LIT,get_line_number(),yytext); return(*yytext);}




"<=" {yylval.valor_lexico = geraVal(TIPO_OP_CMP,NOT_LIT,get_line_number(),yytext); return(TK_OC_LE);}
">=" {yylval.valor_lexico = geraVal(TIPO_OP_CMP,NOT_LIT,get_line_number(),yytext); return(TK_OC_GE);}
"==" {yylval.valor_lexico = geraVal(TIPO_OP_CMP,NOT_LIT,get_line_number(),yytext); return(TK_OC_EQ);}
"!=" {yylval.valor_lexico = geraVal(TIPO_OP_CMP,NOT_LIT,get_line_number(),yytext); return(TK_OC_NE);}
"&&" {yylval.valor_lexico = geraVal(TIPO_OP_CMP,NOT_LIT,get_line_number(),yytext); return(TK_OC_AND);}
"||" {yylval.valor_lexico = geraVal(TIPO_OP_CMP,NOT_LIT,get_line_number(),yytext); return(TK_OC_OR);}
">>" {yylval.valor_lexico = geraVal(TIPO_OP_CMP,NOT_LIT,get_line_number(),yytext); return(TK_OC_SL);}
"<<" {yylval.valor_lexico = geraVal(TIPO_OP_CMP,NOT_LIT,get_line_number(),yytext); return(TK_OC_SR);}
"int" {return(TK_PR_INT);}
"float" {return(TK_PR_FLOAT);}
"bool" {return(TK_PR_BOOL);}
"char" {return(TK_PR_CHAR);}
"string" {return(TK_PR_STRING);}
"if" {return(TK_PR_IF);}
"then" {return(TK_PR_THEN);}
"else" {return(TK_PR_ELSE);}
"while" {return(TK_PR_WHILE);}
"do" {return(TK_PR_DO);}
"input" {return(TK_PR_INPUT);}
"output" {return(TK_PR_OUTPUT);}
"return" {return(TK_PR_RETURN);}
"const" {return(TK_PR_CONST);}
"static" {return(TK_PR_STATIC);}
"foreach" {return(TK_PR_FOREACH);}
"for" {return(TK_PR_FOR);}
"switch" {return(TK_PR_SWITCH);}
"case" {return(TK_PR_CASE);}
"break" {return(TK_PR_BREAK);}
"continue" {return(TK_PR_CONTINUE);}
"class" {return(TK_PR_CLASS);}
"private" {return(TK_PR_PRIVATE);}
"public" {return(TK_PR_PUBLIC);}
"protected" {return(TK_PR_PROTECTED);}
"end" {return(TK_PR_END);}
"default" {return(TK_PR_DEFAULT);}


{identificador}	{yylval.valor_lexico = geraVal(TIPO_ID,NOT_LIT,get_line_number(),yytext); return(TK_IDENTIFICADOR);}



\t { }
\n  { }
\r { }
" " { }

. {return(TOKEN_ERRO);}
{erro_com} {return(TOKEN_ERRO);}
%%

int get_line_number(){

	return yylineno;
}



