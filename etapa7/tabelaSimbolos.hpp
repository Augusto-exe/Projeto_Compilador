/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
#include<list>
#include<string>
#include "arvore.hpp"
#include <unordered_map>
using namespace std;

int getTamanhoTipo(int tipo);
class tabelaSimbolos{
	public:
		tabelaSimbolos();
		void insereSimbolo(string nome, DadoTabelaSimbolos dado );
		MapaSimbolos getTabela();
		void insereTipoSimbolo(string nome, int tipo);
		bool existeSimbolo(string nome);
		void exportaTabela();
		void setTipoTamanhoPorNome(string nome,int tipo,int tamanho);
		void adicionaParametrosParaFunc(string nomeFunc,list<struct dadoTabelaSimbolos> listaParam);
		int getTipoPeloNome(string nomeChave);
		void atualizaTamanhoString(string nome, int tamanho);
		void setDeslocamento(int desloc);
		int getDeslocamento();
		void setRotuloPorNome(string nomeFunc,string rotulo);
		string getRotuloPorNome(string nomeFunc);
	private:
		int deslocTab;
		MapaSimbolos tabSimbolos;
};