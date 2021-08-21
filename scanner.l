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
true {return(TK_LIT_TRUE);}
false {return(TK_LIT_FALSE);}



int {return(TK_PR_INT);}
float {return(TK_PR_FLOAT);}
bool {return(TK_PR_BOOL);}
char {return(TK_PR_CHAR);}
string {return(TK_PR_STRING);}
if {return(TK_PR_IF);}
then {return(TK_PR_THEN);}
else {return(TK_PR_ELSE);}
while {return(TK_PR_WHILE);}
do {return(TK_PR_DO);}
input {return(TK_PR_INPUT);}
output {return(TK_PR_OUTPUT);}
return {return(TK_PR_RETURN);}
const {return(TK_PR_CONST);}
static {return(TK_PR_STATIC);}
foreach {return(TK_PR_FOREACH);}
for {return(TK_PR_FOR);}
switch {return(TK_PR_SWITCH);}
case {return(TK_PR_CASE);}
break {return(TK_PR_BREAK);}
continue {return(TK_PR_CONTINUE);}
class {return(TK_PR_CLASS);}
private {return(TK_PR_PRIVATE);}
public {return(TK_PR_PUBLIC);}
protected {return(TK_PR_PROTECTED);}
end {return(TK_PR_END);}
default {return(TK_PR_DEFAULT);}


{identificador}	{return(TK_IDENTIFICADOR);}
{inteiro} {return(TK_LIT_INT);}



\n  { }
[ ] { }
%%

int get_line_number(void)
{
	return yylineno;
}