/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
#include<list>
#include<string>
#include "arvore.hpp"
#include <unordered_map>
using namespace std;

struct dadoTabelaSimbolos
{
	int linha;
	int natureza;
	int tipo;
	int tamanho;
	list<struct dadoTabelaSimbolos> parametros;
	lexic_val_type valorLexico;
};

typedef struct dadoTabelaSimbolos DadoTabelaSimbolos; 
typedef unordered_map<string,DadoTabelaSimbolos> MapaSimbolos;

class tabelaSimbolos{
	public:
		void insereSimbolo(string nome, DadoTabelaSimbolos dado );
		MapaSimbolos getTabela();
		void insereTipoSimbolo(string nome, int tipo);
		bool existeSimbolo(string nome);
		void exportaTabela();
		void setTipoTamanhoPorNome(string nome,int tipo,int tamanho);
		void adicionaParametrosParaFunc(string nomeFunc,list<struct dadoTabelaSimbolos> listaParam);
		int getTipoPeloNome(string nomeChave);
		void atualizaTamanhoString(string nome, int tamanho);
	private:
		MapaSimbolos tabSimbolos;
};