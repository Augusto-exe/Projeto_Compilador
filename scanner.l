%option yylineno
%{
	#include "tokens.h"
%}

letra_ [A-Za-z_]
digito [0-9]
inteiro {digito}+
expoent [eE][+-]?{integer}
identificador {letra_}({letra_}|{digito})*

%%

"lexico" { get_line_number();}
{identificador} {return(TK_IDENTIFICADOR);}
\n  { }
{inteiro} {return(TK_PR_INT);}

%%

int get_line_number(void)
{
	return yylineno;
}