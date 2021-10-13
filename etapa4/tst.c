#include "arvore.h"
#include <stddef.h>
#include <stdio.h>

void *arvore = NULL;

int main(int argc, char const *argv[])
{
	a_nodo* aux;
	aux = insere_nodo(NULL,NULL,1);
	aux = insere_nodo(aux,NULL,1);
	arvore = insere_nodo(NULL,aux,1);;
	arvore = insere_nodo(arvore,NULL,1);


	exporta(arvore);
	libera(arvore);
	arvore = NULL;
	return 0;
}