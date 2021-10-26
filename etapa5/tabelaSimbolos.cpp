/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
#include "tabelaSimbolos.hpp"
#include <iostream>
using namespace std;

void tabelaSimbolos::insereSimbolo(string nome, DadoTabelaSimbolos dado )
{
	this->tabSimbolos[nome] = dado;
}

void tabelaSimbolos::insereTipoSimbolo(string nome, int tipo)
{
	this->tabSimbolos[nome].tipo = tipo;

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

			cout << itTab.second.natureza << " nome: " << itTab.first << " - tipo: " << itTab.second.tipo << " - nro param: " << itTab.second.parametros.size() << endl;

	}
}
void tabelaSimbolos::setTipoTamanhoPorNome(string nome,int tipo, int tamanho)
{
	this->tabSimbolos[nome].tipo = tipo;
	this->tabSimbolos[nome].tamanho = tamanho;
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


