#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



#define TIPO_LIT		1
#define TIPO_CHAR_ESP   2
#define TIPO_OP_CMP     3
#define TIPO_ID         4

#define NOT_LIT	 	 		0
#define LIT_TIPO_INT 		1
#define LIT_TIPO_BOOL 		2
#define LIT_TIPO_CHAR 		3
#define LIT_TIPO_FLOAT 		4
#define LIT_TIPO_STRING		5


struct lexic_val_type{
int lineno;
int type;
int value_type;
union
	{
		int vInt;
		float vFloat;
		char* vStr;
		bool vBool;
		char* vChar;
	}tk_value;
};
typedef struct lexic_val_type lexic_val_type;

struct lexic_val_type* geraVal(int tipo_token, int tipo_lit, int lineno, char* yytext);
lexic_val_type* inverte_sinal( lexic_val_type* valor_lexico);

