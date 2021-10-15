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




/*
int main()
{
	tabelaSimbolos tabela;
	DadoTabelaSimbolos novoDado;
	novoDado.tipo = 1;
	tabela.insereSimbolo("primeiro",novoDado);
	novoDado.tipo = 2;
	tabela.insereSimbolo("segundo",novoDado);
	novoDado.tipo = 3;
	tabela.insereSimbolo("terceiro",novoDado);
	tabela.exportaTabela();

}*/