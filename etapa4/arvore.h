/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */

#include <stdlib.h>
#include <stdio.h>
#include "common.h"


struct arvore
{
	int tipo_no;
	int tipo_valor_semantico; 
	lexic_val_type* valor_lexico;
	struct arvore* filho;
	struct arvore* prox_irmao;
};

typedef struct arvore a_nodo;

a_nodo* insere_nodo(a_nodo* filho, lexic_val_type* valor_lexico);
a_nodo* insere_filho(a_nodo* arvore, a_nodo* filho);
void printa_label(lexic_val_type* valor_lexico);
void exporta_label(a_nodo *arvore);
void exporta_rela(a_nodo *arvore);
void exporta (void *arvore);
void libera (a_nodo *arvore);
void libera_val(lexic_val_type* valor_lexico);
void atualiza_tipo_semantico(a_nodo* nodo, int tipo_semantico);
a_nodo* insere_filho_fim(a_nodo* arvore, a_nodo* filho);
a_nodo* insere_nodo_tipo( a_nodo* filho,lexic_val_type* valor_lexico, int tipo_nodo);
