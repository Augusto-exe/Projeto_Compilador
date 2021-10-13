/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */

#include "common.h"

lexic_val_type* geraVal(int tipo_token, int tipo_lit, int lineno, char* yytext){
	lexic_val_type* ret_lex_val;
	ret_lex_val = malloc(sizeof(lexic_val_type));
	int n,j;
	ret_lex_val->lineno = lineno;
	ret_lex_val->type = tipo_token;
	ret_lex_val->value_type = tipo_lit;
	if(tipo_lit == NOT_LIT){
		ret_lex_val->tk_value.vStr=strdup(yytext);
	}
	else{
		ret_lex_val->value_type = tipo_lit;
		switch(tipo_lit){
			case LIT_TIPO_INT:
				ret_lex_val->tk_value.vInt = atoi(yytext);
				break;
			case LIT_TIPO_BOOL:
				ret_lex_val->tk_value.vBool = (strcmp("true",yytext) == 0);
				break;
			case LIT_TIPO_CHAR:
				ret_lex_val->tk_value.vChar = strdup(yytext);
				n = strlen(ret_lex_val->tk_value.vChar);
			    for (int i = j = 0; i < n; i++)
    				if (ret_lex_val->tk_value.vChar[i] != '\'')
        				ret_lex_val->tk_value.vChar[j++] = ret_lex_val->tk_value.vChar[i];
    			ret_lex_val->tk_value.vChar[j] = '\0';
    			break;
			case LIT_TIPO_FLOAT:
				ret_lex_val->tk_value.vFloat = atof(yytext);
				break;
			case LIT_TIPO_STRING:
				ret_lex_val->tk_value.vStr =strdup(yytext);
				n = strlen(ret_lex_val->tk_value.vStr);
			    for (int i = j = 0; i < n; i++)
    				if (ret_lex_val->tk_value.vStr[i] != '\"')
        				ret_lex_val->tk_value.vStr[j++] = ret_lex_val->tk_value.vStr[i];
 
    			ret_lex_val->tk_value.vStr[j] = '\0';
    			break;
			default:
				ret_lex_val->tk_value.vStr = strdup(yytext);
				break; 
		}
	}
	return ret_lex_val;
}

lexic_val_type* inverte_sinal( lexic_val_type* valor_lexico)
{
	switch(valor_lexico->value_type)
	{
		case(LIT_TIPO_INT):
			valor_lexico->tk_value.vInt = - valor_lexico->tk_value.vInt; 
			break;
		case(LIT_TIPO_FLOAT):
			valor_lexico->tk_value.vFloat = - valor_lexico->tk_value.vFloat ;
			break;
		default:
			break;
	}
	return valor_lexico;
}