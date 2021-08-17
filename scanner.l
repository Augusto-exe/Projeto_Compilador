%option yylineno
%{
	static int get_line_number(void);
%}

letra_ [A-Za-z_]
digito [0-9]
inteiro {digito}+
expoent [eE][+-]?{integer}
identificador {letra_}({letra_}|{digito})*

%%

"lexico" { get_line_number();}
{identificador} {printf("identificador");}
\n  { }
{inteiro} {printf("inteiro");}

%%
int get_line_number(void)
{
	return yylineno;
}