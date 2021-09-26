#include "arvore.h"

a_nodo* insere_nodo(a_nodo* filho,lexic_val_type* valor_lexico)
{
	
	a_nodo* nodo;
	nodo = malloc(sizeof(a_nodo));
	nodo->tipo_no = NO_LEX;
	nodo->filho = filho;
	nodo->prox_irmao = NULL;
	nodo->valor_lexico = valor_lexico;	
	return nodo;
}

a_nodo* insere_filho(a_nodo* arvore, a_nodo* filho){
	a_nodo* aux;
	if(arvore != NULL)
	{
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
	}else
	{
		arvore=filho;
	}

	return arvore;
}

a_nodo* insere_filho_fim(a_nodo* arvore, a_nodo* filho){
	a_nodo* aux;
	aux = arvore->filho;

	if(aux == NULL){
		arvore->filho = filho;
	}
	else{
		do{
			while(aux->prox_irmao != NULL)
			{
				aux = aux->prox_irmao;
			}
			if(aux->filho != NULL)
				aux = aux->filho;
		}while(aux->filho != NULL);
		while(aux->prox_irmao != NULL)
		{
			aux = aux->prox_irmao;
		}
		aux->prox_irmao = filho;
	}
	return arvore;
}
a_nodo* insere_nodo_tipo( a_nodo* filho,lexic_val_type* valor_lexico, int tipo_nodo)
{
	a_nodo* nodo;
	nodo = malloc(sizeof(a_nodo));
	nodo->tipo_no = tipo_nodo;
	nodo->filho = filho;
	nodo->prox_irmao = NULL;
	nodo->valor_lexico = valor_lexico;	
	return nodo;

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
	if(arvore !=NULL)
	{
		exporta_rela((a_nodo*) arvore);
		exporta_label((a_nodo*) arvore);
	}

}
void exporta_label(a_nodo *arvore){
	if(arvore->prox_irmao != NULL)
		exporta_label(arvore->prox_irmao);
	if(arvore->filho!=NULL)
		exporta_label(arvore->filho);
	if( arvore->valor_lexico != NULL){
		printf("%p [label =\"",arvore);
		if(arvore->tipo_no == NO_FUN_CALL)
			printf("call ");
		printa_label(arvore->valor_lexico);
	}
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
	if(arvore != NULL){
		if(arvore->prox_irmao != NULL)
			libera(arvore->prox_irmao);
		if(arvore->filho!=NULL)
			libera(arvore->filho);
		if(arvore->valor_lexico !=NULL){
			libera_val(arvore->valor_lexico);
		}
		free(arvore);	
	}
}
void printa_label(lexic_val_type* valor_lexico){
	switch(valor_lexico->type)
	{
		case (TIPO_LIT):
			switch(valor_lexico->value_type)
			{
				case(LIT_TIPO_INT):
					printf("%d\"]\n",valor_lexico->tk_value.vInt);
					break;
				case(LIT_TIPO_FLOAT):
					printf("%f\"]\n",valor_lexico->tk_value.vFloat);
					break;
				case(LIT_TIPO_BOOL):
					if(valor_lexico->tk_value.vBool){
						printf("true\"]\n");
					}
					else{
						printf("false\"]\n");
					}
					break;
				case(LIT_TIPO_STRING):
					printf("%s\"]\n",valor_lexico->tk_value.vStr);
					break;
				case(LIT_TIPO_CHAR):
					printf("%s\"]\n",valor_lexico->tk_value.vChar);
					break;
				default:
					printf("%s\"]\n",valor_lexico->tk_value.vStr);
					break;
			}
			break;
	    case (TIPO_CHAR_ESP):
	    case (TIPO_OP_CMP):
		case (TIPO_ID):
		default:
			printf("%s\"]\n",valor_lexico->tk_value.vStr);
			break;
	}
}

void libera_val(lexic_val_type* valor_lexico){
	if(valor_lexico != NULL){
		switch(valor_lexico->value_type)
		{
			case(LIT_TIPO_STRING):
				free(valor_lexico->tk_value.vStr);
				break;
			case(LIT_TIPO_CHAR):
				free(valor_lexico->tk_value.vChar);
				break;
			case (NOT_LIT):
				free(valor_lexico->tk_value.vStr);
			default:
				break;
		}
		free(valor_lexico);
	}

}