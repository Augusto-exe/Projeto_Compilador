#include "pilhaContexto.hpp"
#include <iostream>
using namespace std;


PilhaContexto::PilhaContexto()
{
	this->insereContexto();
}

void PilhaContexto::insereContexto()
{
	tabelaSimbolos contexto;
	this->contextos.push_back(contexto);
}

tabelaSimbolos PilhaContexto::popContexto()
{
	tabelaSimbolos mapaRet = this->contextos.back();
	this->contextos.pop_back();
	return mapaRet;
}
void PilhaContexto::insereSimboloNonVet(int line, int natureza, lexic_val_type *valorLex, int tipo)
{
	DadoTabelaSimbolos novoSimbolo;
	list<DadoTabelaSimbolos> parametros;
	string nomeChave,nomeOrg;
	novoSimbolo.linha = line;
	novoSimbolo.natureza = natureza;
	novoSimbolo.tipo = tipo;
	
	if(natureza == NAT_LIT)
	{
		switch(novoSimbolo.tipo)
		{
			case LIT_TIPO_INT:
				nomeChave = string(to_string(valorLex->tk_value.vInt));
				break;
			case LIT_TIPO_BOOL:
				nomeChave = string(to_string(valorLex->tk_value.vBool));
				break;
			case LIT_TIPO_CHAR:
				nomeChave = string(valorLex->tk_value.vChar);
				break;
			case LIT_TIPO_FLOAT:
				nomeChave = string(to_string(valorLex->tk_value.vFloat));
				break;
			case LIT_TIPO_STRING:
				nomeChave = string(valorLex->tk_value.vStr);
				break;
			case INDEF:
				nomeChave = string(valorLex->tk_value.vStr);
				break;
			default:
				nomeChave = string(valorLex->tk_value.vStr);
				break;

		}

		nomeOrg = nomeChave; 
		nomeChave.append("LIT");
	}	
	else
	{
		nomeChave = string(valorLex->tk_value.vStr);
		nomeOrg = nomeChave; 
		if(this->existeSimboloContextoAtual(nomeChave))
			this->emitirErro(ERR_DECLARED,line,nomeOrg,nomeChave);
	}

	novoSimbolo.valorLexico = *valorLex;
	novoSimbolo.parametros = parametros;

	this->insereSimboloContextoAtual(nomeChave, novoSimbolo);
}
void PilhaContexto::insereSimboloVet(int line, int natureza, lexic_val_type *valorLex,int tipo,int tamanho)
{
	DadoTabelaSimbolos novoSimbolo;
	list<DadoTabelaSimbolos> parametros;
	string nomeChave,nomeOrg;
	novoSimbolo.linha = line;
	novoSimbolo.natureza = natureza;
	novoSimbolo.tipo = tipo;
		switch(novoSimbolo.tipo)
	{
		case LIT_TIPO_INT:
			nomeChave = string(to_string(valorLex->tk_value.vInt));
			break;
		case LIT_TIPO_BOOL:
			nomeChave = string(to_string(valorLex->tk_value.vBool));
			break;
		case LIT_TIPO_CHAR:
			nomeChave = string(valorLex->tk_value.vChar);
			break;
		case LIT_TIPO_FLOAT:
			nomeChave = string(to_string(valorLex->tk_value.vFloat));
			break;
		case LIT_TIPO_STRING:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		case INDEF:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		default:
			nomeChave = string(valorLex->tk_value.vStr);
			break;

	}
	nomeOrg = nomeChave; 


	novoSimbolo.valorLexico = *valorLex;
	novoSimbolo.parametros = parametros;
	if(this->existeSimboloContextoAtual(nomeChave))
		this->emitirErro(ERR_DECLARED,line,nomeOrg,nomeChave);
	this->insereSimboloContextoAtual(nomeChave,novoSimbolo);
}

void PilhaContexto::insereFun(int line, lexic_val_type *valorLex )
{
	DadoTabelaSimbolos novoSimbolo;
	list<DadoTabelaSimbolos> parametros;
	string nome = string(valorLex->tk_value.vStr);
	novoSimbolo.natureza = NAT_FUN;
	novoSimbolo.tipo = INDEF;
	novoSimbolo.parametros = parametros;
	novoSimbolo.valorLexico = *valorLex;
	novoSimbolo.tamanho = 1;
	if(this->existeSimboloContextoAtual(nome))
		this->emitirErro(ERR_DECLARED,line,nome,nome);
	
	this->contextos.front().insereSimbolo(nome,novoSimbolo);

	cout << "exporantdo apos inserir funcao" << endl;
	this->exportaTabelas();

}

void PilhaContexto::empilhaParametro(lexic_val_type *valorLex)
{
	string nome = string(valorLex->tk_value.vStr);
	DadoTabelaSimbolos dado = this->retornaSimbolo(nome);
	this->parametrosPendentes.push_front(dado);
}


int getTamanhoTipo(int)
{
	return 0;
}

void PilhaContexto::atualizaFunTipoPar(lexic_val_type *valorLex,int tipo)
{
	string nomeChave = string(valorLex->tk_value.vStr);
	this->contextos.front().adicionaParametrosParaFunc(nomeChave,this->parametrosPendentes);
	this->contextos.front().setTipoTamanhoPorNome(nomeChave,tipo,getTamanhoTipo(tipo));
	this->parametrosPendentes.clear();
}


bool PilhaContexto::existeSimboloContextoAtual(string nome)
{
	return this->contextos.back().existeSimbolo(nome);
}

void PilhaContexto::exportaTabelas()
{
	for(auto contexto : this->contextos)
	{
		cout << "nova tabela : "<< endl;
		contexto.exportaTabela();
	}
		
}

void PilhaContexto::atualizaTipoTamanho(int tipo)
{
	MapaSimbolos::iterator itMapa;
	MapaSimbolos mapa = this->contextos.back().getTabela();
	for(itMapa = mapa.begin(); itMapa != mapa.end();++itMapa)
	{
		
		if((*itMapa).second.tipo == INDEF)
		{
			this->contextos.back().setTipoTamanhoPorNome((*itMapa).first, tipo, (*itMapa).second.tamanho*getTamanhoTipo(tipo));
			
		}
			
	}
}
void PilhaContexto::insereSimboloContextoAtual(string nome, DadoTabelaSimbolos novoSimbolo)
{
	this->contextos.back().insereSimbolo(nome, novoSimbolo);
}
bool PilhaContexto::existeSimboloContextos(string nome)
{
	for(auto contexto: this->contextos)
	{
		if(contexto.existeSimbolo(nome))
			return true;
	}
	return false;
}
DadoTabelaSimbolos PilhaContexto::retornaSimbolo(string nome)
{
	MapaSimbolos mapa = this->contextos.back().getTabela();
	return mapa[nome];
}
void PilhaContexto::emitirErro(int tipoErro,int linha, string nome,string nomeChave)
{
	DadoTabelaSimbolos declaAnterior;
	switch (tipoErro)
	{
	case ERR_DECLARED:
		cout << "Variable " << nome << " in line " << linha << " was already declared - "; 
		declaAnterior = retornaSimbolo(nomeChave);
		cout << "Previous declaration was at line " << declaAnterior.linha << "." << endl;
		break;
	default:
		break;
	}

	exit(tipoErro);
}

