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
		cout << "nome: " << itTab.first << " - tipo: " << itTab.second.tipo << endl;
	}
}


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

}