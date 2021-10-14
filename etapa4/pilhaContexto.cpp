#include "pilhaContexto.hpp"

PilhaContexto::PilhaContexto()
{
	this->insereContexto();
}

void PilhaContexto::insereContexto()
{
	MapaSimbolos contexto;
	this->contextos.push_back(contexto);
}

MapaSimbolos PilhaContexto::popContexto()
{
	MapaSimbolos mapaRet = this->contextos.back();
	this->contextos.pop_back();
	return mapaRet;
}
void PilhaContexto::insereSimboloNonVet(int line, int natureza, lexic_val_type *valorLex)
{
	DadoTabelaSimbolos novoSimbolo;
	list<DadoTabelaSimbolos> parametros;
	string nomeChave;
	novoSimbolo.linha = line;
	novoSimbolo.natureza = natureza;
	novoSimbolo.tipo = valorLex->value_type;
	switch(novoSimbolo.tipo)
	{
		case LIT_TIPO_INT:

			break;
		case LIT_TIPO_BOOL:

			break;
		case LIT_TIPO_CHAR:

			break;
		case LIT_TIPO_FLOAT:

			break;
		case LIT_TIPO_STRING:

			break;
		case INDEF:

			break;
		default:

			break;

	} 

	
	novoSimbolo.valorLexico = *valorLex;
	novoSimbolo.parametros = parametros;

	this->insereSimboloContextoAtual(nomeChave, novoSimbolo);
}
void PilhaContexto::insereSimboloVet(int line, int natureza, lexic_val_type *valorLex,int tamanho)
{
	DadoTabelaSimbolos novoSimbolo;
	list<DadoTabelaSimbolos> parametros;
	string nomeChave;
	novoSimbolo.linha = line;
	novoSimbolo.natureza = natureza;
	novoSimbolo.tipo = valorLex->value_type;
	switch(novoSimbolo.tipo)
	{
		case LIT_TIPO_INT:

			break;
		case LIT_TIPO_BOOL:

			break;
		case LIT_TIPO_CHAR:

			break;
		case LIT_TIPO_FLOAT:

			break;
		case LIT_TIPO_STRING:

			break;
		case INDEF:

			break;
		default:
		
			break;

	}

	
	novoSimbolo.valorLexico = *valorLex;
	novoSimbolo.parametros = parametros;

	this->insereSimboloContextoAtual(nomeChave,novoSimbolo);
}

int getTamanhoTipo(int)
{
	return 0;
}

void PilhaContexto::atualizaTipoTamanho(int tipo)
{
	MapaSimbolos::iterator itMapa;
	for(itMapa = this->contextos.back().begin(); itMapa != this->contextos.back().end();++itMapa)
	{
		if((*itMapa).second.tipo == INDEF)
		{
			(*itMapa).second.tipo = tipo;
			(*itMapa).second.tamanho = (*itMapa).second.tamanho*getTamanhoTipo(tipo);
		}
			
	}
}

void PilhaContexto::adicionaParametro(string nome,string nome_par)
{

}
void PilhaContexto::insereSimboloContextoAtual(string nome, DadoTabelaSimbolos novoSimbolo)
{
	this->contextos.back()[nome] = novoSimbolo;
}
bool PilhaContexto::existeSimboloContextos(string nome)
{

}
DadoTabelaSimbolos PilhaContexto::retornaSimbolo(string nome)
{

}
void PilhaContexto::emitirErro(int tipoErro)
{

}

