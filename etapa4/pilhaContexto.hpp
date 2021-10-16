#include <list>
#include <string>
#include "tabelaSimbolos.hpp"
#include "errors.h"


typedef list<tabelaSimbolos> PilhaMapas;


class PilhaContexto
{

	public:
		PilhaContexto();
		void insereContexto();
		tabelaSimbolos popContexto();
		void insereSimboloNonVet(int line, int natureza, lexic_val_type *valorLex,int tipo);
		void insereSimboloVet(int line, int natureza, lexic_val_type *valorLex,int tipo,int tamanho);
		void atualizaTipoTamanho(int tipo);
		void adicionaParametro(string nome,string nome_par);
		void insereSimboloContextoAtual(string nome, DadoTabelaSimbolos novoSimbolo);
		bool existeSimboloContextos(string nome);
		bool existeSimboloContextoAtual(string nome);
		DadoTabelaSimbolos retornaSimboloBack(string nome);
		void exportaTabelas();
		void emitirErro(int tipoErro, int linha, string nome,string nomeChave);
		void insereFun(int line, lexic_val_type *valorLex );
		void atualizaFunTipoPar(lexic_val_type *valorLex,int tipo );
		void empilhaParametro(lexic_val_type *valorLex);
		int infereTipo(a_nodo* nodoEsq,a_nodo* nodoDir);
		void verificaFuncao(lexic_val_type *valorLex, a_nodo * nodo,int linha);
		int infereTipoTern(a_nodo* nodoEsq,a_nodo* nodoMeio,a_nodo* nodoDir);
		DadoTabelaSimbolos retornaSimbolo(string nome);
		bool comparaParams(list<DadoTabelaSimbolos> listParam,a_nodo* nodo, int linha,string nomeFunc );
		//Implementar get tipo funcao
	private:
		PilhaMapas contextos;
		list<struct dadoTabelaSimbolos> parametrosPendentes;

};