/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
#include "tabelaSimbolos.hpp"
#include <iostream>
using namespace std;

tabelaSimbolos::tabelaSimbolos()
{
	this->deslocTab=0;
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
void tabelaSimbolos::insereSimbolo(string nome, DadoTabelaSimbolos dado )
{
	this->tabSimbolos[nome] = dado;
	if((this->tabSimbolos[nome].natureza == NAT_VAR ||this->tabSimbolos[nome].natureza == NAT_VET)&&dado.tipo !=INDEF)
	{
		this->tabSimbolos[nome].deslocamento = this->deslocTab;
		this->deslocTab +=getTamanhoTipo(dado.tipo);
	}
	else
		this->tabSimbolos[nome].deslocamento = -1;
}

void tabelaSimbolos::insereTipoSimbolo(string nome, int tipo)
{
	this->tabSimbolos[nome].tipo = tipo;
	if(this->tabSimbolos[nome].natureza == NAT_VAR ||this->tabSimbolos[nome].natureza == NAT_VET )
	{
		this->tabSimbolos[nome].deslocamento = this->deslocTab;
		this->deslocTab +=getTamanhoTipo(tipo);
	}

}

void tabelaSimbolos::setDeslocamento(int desloc){
	this->deslocTab = desloc;
}

int tabelaSimbolos::getDeslocamento()
{
	return this->deslocTab;
}

bool tabelaSimbolos::existeSimbolo(string nome)
{
	bool ret;
	ret = this->tabSimbolos.find(nome) != this->tabSimbolos.end();
	return ret;
}
void tabelaSimbolos::atualizaTamanhoString(string nome, int tamanho)
{
	this->tabSimbolos[nome].tamanho = tamanho;
}
void tabelaSimbolos::exportaTabela()
{
	for(auto itTab : this->tabSimbolos)
	{

		cout << itTab.second.natureza << " nome: " << itTab.first << " - tipo: " << itTab.second.tipo << " - nro param: " << itTab.second.parametros.size() << " deslocamento "<< itTab.second.deslocamento << " escopo: " << itTab.second.escopo <<endl;

	}
}
void tabelaSimbolos::setTipoTamanhoPorNome(string nome,int tipo, int tamanho)
{
	this->tabSimbolos[nome].tipo = tipo;
	this->tabSimbolos[nome].tamanho = tamanho;
	if(this->tabSimbolos[nome].natureza == NAT_VAR ||this->tabSimbolos[nome].natureza == NAT_VET )
	{
		this->tabSimbolos[nome].deslocamento = this->deslocTab;
		this->deslocTab += tamanho;
	}
}
MapaSimbolos tabelaSimbolos::getTabela()
{
	return this->tabSimbolos;
}

void tabelaSimbolos::adicionaParametrosParaFunc(string nomeFunc,list<struct dadoTabelaSimbolos> listaParam)
{
	this->tabSimbolos[nomeFunc].parametros =listaParam;
}

int tabelaSimbolos::getTipoPeloNome(string nomeChave)
{
	return this->tabSimbolos[nomeChave].tipo;
}


