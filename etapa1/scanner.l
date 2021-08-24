%option yylineno
%{
	#include "tokens.h"

%}

letra_ [A-Za-z_]
digito [0-9]
inteiro [+-]?{digito}+
expoent [eE][+-]?{inteiro}
float {inteiro}"."{digito}+({expoent})?
identificador {letra_}({letra_}|{digito})*
char_lit \'[^"'"]\'
string_lit \"[^"""]+\"
comment_1 \/\/.*"\n"
comment_2 \/\*([^"*/"]*"\n"*[^"*/"]*)*\*\/
comment comment_1|comment_2
char_esp ","|";"|":"|"("|")"|"["|"]"|"{"|"}"|"+"|"-"|"|"|"*"|"/"|"<"|">"|"="|"!"|"&"|"%"|"#"|"$"|"^"|"."



%%
{comment_1} { }
{comment_2} { }

"true" {return(TK_LIT_TRUE);}
"false" {return(TK_LIT_FALSE);}
{char_lit} {return(TK_LIT_CHAR);}
{string_lit} {return(TK_LIT_STRING);}
{inteiro} {return(TK_LIT_INT);}
{float} {return(TK_LIT_FLOAT);}
{char_esp} {return(*yytext);}




"<=" {return(TK_OC_LE);}
">=" {return(TK_OC_GE);}
"==" {return(TK_OC_EQ);}
"!=" {return(TK_OC_NE);}
"&&" {return(TK_OC_AND);}
"||" {return(TK_OC_OR);}
">>" {return(TK_OC_SL);}
"<<" {return(TK_OC_SR);}
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


{identificador}	{return(TK_IDENTIFICADOR);}



\t { }
\n  { }
\r { }
" " { }

. {printf("char = - %d -", *yytext);return(TOKEN_ERRO);}
%%

int get_line_number(void)
{
	return yylineno;
}