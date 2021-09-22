#include "arvore.h"
#include <stdlib.h>
#include <stdio.h>

a_nodo* insere_nodo(a_nodo* filho,a_nodo* irmao,int dados)
{
	a_nodo* nodo;
	nodo = malloc(sizeof(a_nodo));
	nodo->filho = filho;
	nodo->prox_irmao = irmao;
	nodo->dados = dados;
	return nodo;
}

void exporta (a_nodo *arvore){
	a_nodo *aux, *p;
	aux = malloc(sizeof(a_nodo));
	p=aux;
	aux = arvore->filho;
	while(aux != NULL){
		printf("%p, %p\n",arvore,aux);
		aux = aux->prox_irmao;
	}
	if(arvore->prox_irmao != NULL)
		exporta(arvore->prox_irmao);
	if(arvore->filho!=NULL)
		exporta(arvore->filho);
	free(p);
}
void libera (a_nodo *arvore){
	if(arvore->prox_irmao != NULL)
		libera(arvore->prox_irmao);
	if(arvore->filho!=NULL)
		libera(arvore->filho);
	free(arvore);

}
