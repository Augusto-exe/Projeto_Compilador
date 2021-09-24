#include "arvore.h"

a_nodo* insere_nodo(a_nodo* filho,lexic_val_type* valor_lexico)
{
	a_nodo* nodo;
	nodo = malloc(sizeof(a_nodo));
	nodo->filho = filho;
	nodo->prox_irmao = NULL;
	nodo->valor_lexico = valor_lexico;
	return nodo;
}

a_nodo* insere_filho(a_nodo* arvore, a_nodo* filho){
	a_nodo* aux;
	aux = arvore->filho;
	if(aux == NULL){
		arvore->filho = filho;
	}
	else{
		while(aux->prox_irmao != NULL)
		{
			aux = aux->prox_irmao;
		}
		aux->prox_irmao = filho;
	}
	return arvore;
}

a_nodo* insere_filho_prefix(a_nodo* arvore, a_nodo* filho){
	a_nodo* aux;
	a_nodo* filho_atual;
	filho_atual = arvore->filho;
	if(filho_atual == NULL){
		arvore->filho = filho;
	}
	else{
		aux = filho;
		while(aux->prox_irmao != NULL)
		{
			aux = aux->prox_irmao;
		}
		aux->prox_irmao = filho_atual;
		arvore->filho = filho;
	}
	return arvore;
}

void exporta(void *arvore)
{
	exporta_rela((a_nodo*) arvore);
	printf("\n\n");
	exporta_label((a_nodo*) arvore);
}
void exporta_label(a_nodo *arvore){
	if(arvore->prox_irmao != NULL)
		exporta_label(arvore->prox_irmao);
	if(arvore->filho!=NULL)
		exporta_label(arvore->filho);
	if( arvore->valor_lexico != NULL){
		printf("%p [label =\"%s\"]\n", arvore, arvore->valor_lexico->tk_value.vStr);
	}
	else
		printf("%p [label =\"NULL\"]\n", arvore);
}
void exporta_rela(a_nodo *arvore){
	if(arvore != NULL)
	{
		a_nodo *aux;
		aux = arvore->filho;
		while(aux != NULL){
			printf("%p, %p\n",arvore,aux);
			aux = aux->prox_irmao;
		}
		if(arvore->prox_irmao != NULL)
			exporta_rela(arvore->prox_irmao);
		if(arvore->filho!=NULL)
			exporta_rela(arvore->filho);
	}

}
void libera (a_nodo *arvore){
	if(arvore->prox_irmao != NULL)
		libera(arvore->prox_irmao);
	if(arvore->filho!=NULL)
		libera(arvore->filho);
	if(arvore->valor_lexico !=NULL)
		free(arvore->valor_lexico);
	if(arvore != NULL)
		free(arvore);

}

