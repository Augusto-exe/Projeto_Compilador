#include <string>
#include <iostream>
#include <list>
#include <map>
#include "ListaInst.hpp"

using namespace std;

typedef struct instAsm // inst: operacao op1, op2 => dst _OU_ operacao op1 => dst
{
    string operacao;
    string op1;
    string op2;
    string dst;
    int n_op;
    int tipoInst;
    int id;
    int tipoGerador;
    string nomeAux;
}InstAsm;


void printaInstAsm(InstAsm inst);
InstAsm geraInstAsm3op(string operacao,string op1,string op2,string dst,int tipoInst, int *id);

class ListaAsm
{
	public:
		ListaAsm();
		void appendInstAsmCodigo(InstAsm inst);
        void appendInstAsmFimCodigo(InstAsm inst);
        void appendCodigoAsmInicio(list<InstAsm> codigoPref);
        void appendCodigoAsmFim(list<InstAsm> codigoPos);
        list<InstAsm> getCodigoAsm();
        void remendaTrue(list<int> idsRemendo, string rotulo);
        void remendaFalse(list<int> idsRemendo, string rotulo); 
        void exportaCodAsm();
	private:
		list<InstAsm> codigoAsm;
        map<string,string> regToMemAdd;
};