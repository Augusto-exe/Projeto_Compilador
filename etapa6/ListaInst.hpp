/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
#include <string>
#include <list>
#include <iostream>
#include <map>
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
    int tipoGerador;
    string nomeAux;
}Instrucao;

string geraRotulo(int *ultimoRotulo);
string geraRegistrador(int *ultimoReg);

Instrucao geraInst3op(string operacao,string op1,string op2, string dst, int tipoInst, int *id,int tipoGerador,string nomeAux);
Instrucao geraInst2op(string operacao,string op1, string dst, int tipoInst, int *id,int tipoGerador,string nomeAux);
void printaInst(Instrucao inst);

class ListaInst
{

	public:
		ListaInst();
		void appendInstCodigo(Instrucao inst);
        void appendInstFimCodigo(Instrucao inst);
        void appendCodigoInicio(list<Instrucao> codigoPref);
        void appendCodigoFim(list<Instrucao> codigoPos);
        list<Instrucao> getCodigo();
        void remendaTrue(list<int> idsRemendo, string rotulo);
        void remendaFalse(list<int> idsRemendo, string rotulo); 
        void exportaCod();
	private:
		list<Instrucao> codigo;
        map<string,string> regToMemAdd;

};

list<Instrucao> geraInstAtribTipoDesloc(int desloc, int escopo ,int tipo,string regOrig ,ListaInst *exp,list<int> idRemendoTrue,list<int> idRemendoFalse,int *ultimoReg,int *ultimoRotulo,int *id,int tipoGerador,string nomeAux);
list<Instrucao> geraInstIfElse(int tipo,string regOrg,ListaInst *exp,ListaInst listaT,ListaInst listaF,list<int> idRemendoTrue,list<int> idRemendoFalse,int *ultimoReg,int *ultimoRotulo,int *id, string rotT,string rotF,string rotEnd,int tipoGerador,string nomeAux);
list<Instrucao> geraBoolFromArit(int *ultimoReg,string regOrg,string rotT,string rotF, int *id,int tipoGerador,string nomeAux);
list<Instrucao> geraInstWhile(int tipo,string regOrg,ListaInst *exp,ListaInst listaT,list<int> idRemendoTrue,list<int> idRemendoFalse,int *ultimoReg,int *ultimoRotulo,int *id, string rotT,string rotEnd,int tipoGerador,string nomeAux);
list<Instrucao> geraInit(int deslocDst,int escopoDst, int natureza, string nomeValue,int deslocOrig,int escopoOrig, int *ultimoReg, int* ultimoRotulo,int *id,int tipoGerador,string nomeAux);
list<Instrucao> geraLeituraVar(string regDst, int deslocamento, int escopo, int* ultimoReg,int* ultimoRotulo,int* id,int tipoGerador,string nomeAux);
list<Instrucao> geraCodigoInicial(string rotMain,string regAux,int *id,int tipoGerador,string nomeAux );
list<Instrucao> geraInstFor(int tipo,string regOrg,ListaInst *exp,ListaInst listaT,ListaInst listaIni,ListaInst listaAtrib,list<int> idRemendoTrue,list<int> idRemendoFalse,int *ultimoReg,int *ultimoRotulo,int *id, string rotT,string rotEnd,int tipoGerador,string nomeAux);
list<Instrucao> geraInstFunc(string regPilha, int* ultimoReg, int* id, ListaInst listaT, string rotulo,int tipoGerador,string nomeAux);
list<Instrucao> geraDeclaFunc(string regPilha, int* ultimoReg, int* id, ListaInst listaT,int tipoGerador,string nomeAux);
list<Instrucao> geraInstReturn(string regExp, int* ultimoReg, int* id,int tipoGerador,string nomeAux);
list<Instrucao> geraInstList(int* ultimoReg, int* id, string regDst,int tipoGerador,string nomeAux);