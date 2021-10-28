#include <string>
#include <list>
#include <iostream>
#include "common.h"

using namespace std;

typedef struct instrucao // inst: operacao op1, op2 => dst _OU_ operacao op1 => dst
{
    string operacao;
    string op1;
    string op2;
    string dst;
    int n_op;
    int tipoInst;
    int id;
}Instrucao;

string geraRotulo(int *ultimoRotulo);
string geraRegistrador(int *ultimoReg);
Instrucao geraInst3op(string operacao,string op1,string op2, string dst, int tipoInst, int *id);
Instrucao geraInst2op(string operacao,string op1, string dst, int tipoInst, int *id);
void printaInst(Instrucao inst);

class ListaInst
{

	public:
		ListaInst();
		void appendInstCodigo(Instrucao inst);
        void appendCodigoInicio(list<Instrucao> codigoPref);
        list<Instrucao> getCodigo();
        void remendaTrue(list<int> idsRemendo, string rotulo);
        void remendaFalse(list<int> idsRemendo, string rotulo); 
        void exportaCod();
	private:
		list<Instrucao> codigo;

};
