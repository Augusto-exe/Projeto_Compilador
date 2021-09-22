#include <stdlib.h>
#include <stdio.h>
struct arvore
{
	int dados;
	struct arvore* filho;
	struct arvore* prox_irmao;
};

typedef struct arvore a_nodo;
a_nodo* insere_nodo(a_nodo* filho,a_nodo* irmao,int dados);
void exporta (a_nodo *arvore);
void libera (a_nodo *arvore);
