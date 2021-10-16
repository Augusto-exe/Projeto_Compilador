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

}

void PilhaContexto::empilhaParametro(lexic_val_type *valorLex)
{
	string nome = string(valorLex->tk_value.vStr);
	DadoTabelaSimbolos dado = this->retornaSimboloBack(nome);
	this->parametrosPendentes.push_front(dado);
}

int PilhaContexto::infereTipo(a_nodo* nodoEsq,a_nodo* nodoDir)
{
	int tipoEsq = nodoEsq->tipo_valor_semantico;
	int tipoDir = nodoDir->tipo_valor_semantico;

	if(tipoDir == INDEF ||tipoEsq == INDEF || tipoDir == ID_STRING || tipoEsq == ID_STRING )
		return INDEF;
	if((tipoEsq == ID_INT && tipoDir == ID_INT)||(tipoEsq == ID_INT && tipoDir == ID_BOOL)|| (tipoEsq == ID_BOOL && tipoDir == ID_INT))
		return ID_INT;
	if(tipoEsq == ID_FLOAT || tipoDir == ID_FLOAT)
		return ID_FLOAT;
	
	return ID_BOOL;
}

int PilhaContexto::infereTipoTern(a_nodo* nodoEsq,a_nodo* nodoMeio,a_nodo* nodoDir)
{
	int tipo_temp;
	a_nodo* nodo_temp;
	nodo_temp = (a_nodo*)malloc(sizeof(a_nodo));

	tipo_temp = this->infereTipo(nodoEsq,nodoMeio);
	nodo_temp->tipo_valor_semantico= tipo_temp;
	tipo_temp = this->infereTipo(nodo_temp,nodoDir);

	free(nodo_temp);

	return tipo_temp;
}

bool PilhaContexto::comparaParams(list<DadoTabelaSimbolos> listParam,a_nodo* nodo,int linha, string nomeFunc )
{
	int inputSize = 0;
	list<int> inputTipeList;
	while(nodo !=NULL)
	{
		inputSize++;
		inputTipeList.push_back(nodo->tipo_valor_semantico);
		nodo = nodo->filho;
		if(nodo!=NULL)
		{
			while(nodo->prox_irmao != NULL)
				nodo = nodo->prox_irmao;
			if(nodo->is_arg == false)
				nodo = NULL;
		}
	}
	cout << "tamanho lista arg = "<< inputSize << endl;
	if(inputSize > listParam.size())
	{
		string msg = "Expected "+ to_string(listParam.size()) +" received " + to_string(inputSize)+".";
		this->emitirErro(ERR_EXCESS_ARGS,linha,nomeFunc,msg);
	}
	if(inputSize < listParam.size())
	{
		string msg = "Expected "+ to_string(listParam.size()) +" received " + to_string(inputSize)+".";
		this->emitirErro(ERR_MISSING_ARGS,linha,nomeFunc,msg);
	}
		

}

void PilhaContexto::verificaFuncao(lexic_val_type *valorLex, a_nodo* nodo,int linha)
{
	string nomeFunc = string(valorLex->tk_value.vStr);
	bool existe = this->existeSimboloContextos(nomeFunc);
	DadoTabelaSimbolos dadoFunc;
	if(!existe)
	{
		emitirErro(ERR_UNDECLARED,valorLex->lineno,nomeFunc,nomeFunc);
	}
	dadoFunc = this->retornaSimbolo(nomeFunc);

	if(dadoFunc.natureza == NAT_VAR || dadoFunc.natureza == NAT_VET)
	{

		if(dadoFunc.natureza == NAT_VAR)
			this->emitirErro(ERR_VARIABLE,valorLex->lineno,nomeFunc,"Function");
		else
			this->emitirErro(ERR_VECTOR,valorLex->lineno,nomeFunc,"Function");

	}
	cout << "verificando func "<< nomeFunc << " " ;
	this->comparaParams(dadoFunc.parametros,nodo,linha,nomeFunc);
}

int getTamanhoTipo(int tipo)
{
	int ret;
	switch (tipo)
	{
	case ID_INT:
		ret=4;
		break;
	case ID_FLOAT:
		ret=8;
		break;
	case ID_BOOL:
		ret=1;
		break;
	case ID_CHAR:
		ret=1;
		break;
	case ID_STRING:
		ret =0;
		break;
	default:
		ret = 0;
		break;
	}
	return ret;
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
	for(PilhaMapas::reverse_iterator contexto = this->contextos.rbegin();contexto !=this->contextos.rend();++contexto )
	{
		if((*contexto).existeSimbolo(nome))
			return true;
	}
	return false;
}
DadoTabelaSimbolos PilhaContexto::retornaSimbolo(string nome)
{
	bool exitste = false;
	DadoTabelaSimbolos dadoRet;

	for(PilhaMapas::reverse_iterator contexto = this->contextos.rbegin();contexto !=this->contextos.rend();++contexto )
	{
		if((*contexto).existeSimbolo(nome))
		{
			exitste = true;
			dadoRet = (*contexto).getTabela()[nome];
			break;
		}
			
	}

	return dadoRet;
}

DadoTabelaSimbolos PilhaContexto::retornaSimboloBack(string nome)
{
	MapaSimbolos mapa = this->contextos.back().getTabela();
	return mapa[nome];
}
void PilhaContexto::emitirErro(int tipoErro,int linha, string nome,string aux="")
{
	DadoTabelaSimbolos declaAnterior;
	switch (tipoErro)
	{
	case ERR_DECLARED:
		cout << "Variable " << nome << " in line " << linha << " was already declared - "; 
		declaAnterior = retornaSimboloBack(aux);
		cout << "Previous declaration was at line " << declaAnterior.linha << "." << endl;
		break;
	case ERR_FUNCTION:
		cout << "Function " << nome << " was used as " << aux << " in line " << linha << "."<<endl;
		break;
	case ERR_VECTOR:
		cout << "Vector " << nome << " was used as " << aux << " in line " << linha << "." << endl;
		break;
	case ERR_VARIABLE:
		cout << "Variable " << nome << " was used as " << aux << " in line " << linha << "."<<endl;
		break;
	case ERR_EXCESS_ARGS:
		cout << "Excedded number of arguments to function call " << nome <<" in line "<< linha <<". " << aux << endl;
		break;
	case ERR_MISSING_ARGS:
		cout << "Missing arguments to function call " << nome <<" in line "<< linha <<". " <<aux << endl;
		break;
	default:
		break;
	}

	exit(tipoErro);
}

