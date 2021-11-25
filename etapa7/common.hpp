/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<list>
#include<string>
#include <unordered_map>
using namespace std;


#define TIPO_LIT		1
#define TIPO_CHAR_ESP   2
#define TIPO_OP_CMP     3
#define TIPO_ID         4
#define TIPO_RSV_WRD    5
#define TIPO_VET		6

#define ID_INT			1
#define ID_BOOL			2
#define ID_CHAR			3	
#define ID_FLOAT		4
#define ID_STRING		5
#define INDEF		   -1

#define NOT_LIT	 	 	0
#define LIT_TIPO_INT 	1
#define LIT_TIPO_BOOL 	2
#define LIT_TIPO_CHAR 	3
#define LIT_TIPO_FLOAT 	4
#define LIT_TIPO_STRING	5

#define NO_LEX 			0
#define NO_WHILE		1
#define NO_FUN_CALL		2
#define NO_IN_OUT		3
#define NO_FOR			4
#define NO_IF			5
#define NO_ELSE			6
#define NO_TEMP			7

#define NAT_LIT			1
#define NAT_VAR			2
#define NAT_FUN			3
#define NAT_VET			4

#define ID				1
#define LIT				2

#define ESC_GLOBAL		0
#define ESC_LOCAL		1


#define INST_ARITLOG    1
#define INST_REL        2
#define INST_MEM		3
#define INST_LOADI		4
#define INST_JMP		5
#define INST_CBR		6
#define INST_NOP_ROT	7
#define INST_MEM_READ	8
#define INST_HALT		9
#define INST_I2I		10


#define GERA_FUN		0
#define	GERA_RET		1
#define GERA_ATRIB 		2
#define GERA_DEC_GLB	3
#define GERA_HALT		4
#define GERA_INI		5
#define GERA_SIMPLE		6
#define GERA_LEIT		7
#define GERA_ARIT		8
#define	GERA_REL		9
#define	GERA_ROT		10
#define GERA_FLUX		11
#define GERA_DEC_LOC	12
#define GERA_PARAM 		13
#define GERA_FUN_CALL	14
#define GERA_INIT_C		15
#define GERA_LOGIC		16


#define ASM_PUSH		0
#define ASM_POP 		1
#define ASM_ARIT		2

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
int getValSize(lexic_val_type* valor_lexico);


struct dadoTabelaSimbolos
{
	int linha;
	int natureza;
	int tipo;
	int tamanho;
	list<struct dadoTabelaSimbolos> parametros;
	lexic_val_type valorLexico;
	int deslocamento;
	int escopo;
	string rot_reg;
};

typedef struct dadoTabelaSimbolos DadoTabelaSimbolos; 
typedef unordered_map<string,DadoTabelaSimbolos> MapaSimbolos;

