/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
#include <list>
#include <string>
#include "tabelaSimbolos.hpp"
#include "errors.h"


typedef list<tabelaSimbolos> PilhaMapas;
struct inicPend
{
	lexic_val_type* variable;
	lexic_val_type* value;	
};

bool checaConversaoImplicita(int tipoOrig,int tipoDst);
typedef struct inicPend IniciacaoPendente;
string getNomeValorLexico(lexic_val_type* valorLex);
class PilhaContexto
{

	public:
		PilhaContexto();
		void insereContexto();
		tabelaSimbolos popContexto();
		Instrucao insereSimboloNonVet(int line, int natureza, lexic_val_type *valorLex,int tipo, int*id,int escopo = ESC_LOCAL);
		void insereSimboloVet(int line, int natureza, lexic_val_type *valorLex,int tipo,int tamanho,int escopo = ESC_LOCAL);
		list<Instrucao> atualizaTipoTamanho(int tipo, int*id);
		void adicionaParametro(string nome,string nome_par);
		void insereSimboloContextoAtual(string nome, DadoTabelaSimbolos novoSimbolo);
		bool existeSimboloContextos(string nome);
		bool existeSimboloContextoAtual(string nome);
		DadoTabelaSimbolos retornaSimboloBack(string nome);
		void exportaTabelas();
		void emitirErro(int tipoErro, int linha, string nome,string aux);
		void insereFun(int line, lexic_val_type *valorLex,int rotulo );
		void atualizaFunTipoPar(lexic_val_type *valorLex,int tipo );
		void empilhaParametro(lexic_val_type *valorLex);
		int infereTipo(a_nodo* nodoEsq,a_nodo* nodoDir);
		list<Instrucao> verificaFuncao(lexic_val_type *valorLex, a_nodo * nodo,int linha,int *id,int* ultimoRotulo,int*ultimoReg,string regFun,string rotFun);
		int getTipoFuncao(lexic_val_type *valorLex);
		int verificaVetor(lexic_val_type *valorLex, a_nodo * vetIndex);
		int verificaVar(lexic_val_type *valorLex);
		int infereTipoTern(a_nodo* nodoEsq,a_nodo* nodoMeio,a_nodo* nodoDir);
		DadoTabelaSimbolos retornaSimbolo(string nome);
		list<Instrucao> comparaParams(list<DadoTabelaSimbolos> listParam,a_nodo* nodo, int linha,string nomeFunc,int *id );
		void verificaAtrib(a_nodo* nodoDst,a_nodo* nodoOrig);
		int getTipoPorValorLex(lexic_val_type *valorLex);
		DadoTabelaSimbolos getSimboloPorValorLex(lexic_val_type *valorLex);
		int avaliaInput(lexic_val_type *valorLex);
		int avaliaOutput(lexic_val_type *valorLex);
		void avaliaShift(lexic_val_type *valorLex);
		void verificaReturn(int tipoRet,int linha);
		int getTipoUltimaFunc();
		void insereInicPendente(lexic_val_type *valorVariable,lexic_val_type *valorValue);
		list<Instrucao> fazInic(int *ultimoReg,int *ultimoRotulo,int*id);
		int getDeslocamentoAtual();
		void setDeslocamentoAtual(int desloc);
		void setRotuloFun(lexic_val_type *valorLex,string rotFun);
		string getRotuloFun(lexic_val_type *valorLex);
		
	private:
		PilhaMapas contextos;
		list<struct dadoTabelaSimbolos> parametrosPendentes;
		list<IniciacaoPendente> inicsPendentes;
		list<string> varTipoPend;

};