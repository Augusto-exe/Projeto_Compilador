#include <list>
#include <string>
#include "tabelaSimbolos.hpp"
#include "errors.h"


typedef list<MapaSimbolos> PilhaMapas;


class PilhaContexto
{

	public:
		PilhaContexto();
		void insereContexto();
		MapaSimbolos popContexto();
		void insereSimboloNonVet(int line, int natureza, lexic_val_type *valorLex);
		void insereSimboloVet(int line, int natureza, lexic_val_type *valorLex,int tamanho);
		void adicionaParametro(string nome,string nome_par);
		void insereSimboloContextoAtual(string nome, DadoTabelaSimbolos novoSimbolo);
		bool existeSimboloContextos(string nome);
		DadoTabelaSimbolos retornaSimbolo(string nome);
		void emitirErro(int tipoErro);

	private:
		PilhaMapas contextos;

};