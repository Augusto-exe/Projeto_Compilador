#include <list>
#include <string>
#include "tabelaSimbolos.hpp"
#include "errors.h"


typedef list<tabelaSimbolos> PilhaMapas;
struct inicPend
{
	DadoTabelaSimbolos variable;
	DadoTabelaSimbolos value;	
};

typedef struct inicPend IniciacaoPendente;
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
		void emitirErro(int tipoErro, int linha, string nome,string aux);
		void insereFun(int line, lexic_val_type *valorLex );
		void atualizaFunTipoPar(lexic_val_type *valorLex,int tipo );
		void empilhaParametro(lexic_val_type *valorLex);
		int infereTipo(a_nodo* nodoEsq,a_nodo* nodoDir);
		int verificaFuncao(lexic_val_type *valorLex, a_nodo * nodo,int linha);
		int infereTipoTern(a_nodo* nodoEsq,a_nodo* nodoMeio,a_nodo* nodoDir);
		DadoTabelaSimbolos retornaSimbolo(string nome);
		bool comparaParams(list<DadoTabelaSimbolos> listParam,a_nodo* nodo, int linha,string nomeFunc );
		void verificaAtrib(a_nodo* nodoDst,a_nodo* nodoOrig);
		int getTipoPorValorLex(lexic_val_type *valorLex);
		int avaliaInput(lexic_val_type *valorLex);
		int avaliaOutput(lexic_val_type *valorLex);
		void avaliaShift(lexic_val_type *valorLex);
		void verificaReturn(int tipoRet,int linha);
		int getTipoUltimaFunc();
		void insereInicPendente(lexic_val_type *valorVariable,lexic_val_type *valorValue);
		
	private:
		PilhaMapas contextos;
		list<struct dadoTabelaSimbolos> parametrosPendentes;
		list<IniciacaoPendente> inicsPendentes;

};