#include "ListaInst.hpp"

ListaInst::ListaInst()
{

}
string geraRotulo(int *ultimoRotulo)
{
    *ultimoRotulo = *ultimoRotulo+1;
    string retStr = "L" + to_string(*ultimoRotulo);
    return retStr;
}
string geraRegistrador(int *ultimoReg)
{
    *ultimoReg = *ultimoReg+1;
    string retStr = "r" + to_string(*ultimoReg);
    return retStr;
}

Instrucao geraInst3op(string operacao,string op1,string op2, string dst){
    Instrucao inst;
    inst.dst = dst;
    inst.n_op = 3;
    inst.op1 = op1;
    inst.op2 = op2;
    inst.operacao = operacao;
    return inst;
}
Instrucao geraInst2op(string operacao,string op1,string dst){
    Instrucao inst;
    inst.dst = dst;
    inst.n_op = 2;
    inst.op1 = op1;
    inst.op2 = "";
    inst.operacao = operacao;
    return inst;
}
void ListaInst::appendInstCodigo(Instrucao inst){
    this->codigo.push_front(inst);

}
void ListaInst::appendCodigoInicio(list<Instrucao> codigoPref){
    list<Instrucao>::reverse_iterator itList;
    for(itList = codigoPref.rbegin();itList !=codigoPref.rend();++itList)
    {
        this->codigo.push_front((*itList));
    }
}
list<Instrucao> ListaInst::getCodigo(){
    return this->codigo;
}
void ListaInst::exportaCod(){
    for(auto inst : codigo)
    {
        printaInst(inst);
    }
}
void printaInst(Instrucao inst)
{
    if(inst.n_op == 3)
        cout <<inst.operacao << " "<< inst.op1 <<", " << inst.op2 <<" => "<< inst.dst  << endl;
    else
        cout <<inst.operacao << " "<< inst.op1 <<" => "<< inst.dst   << endl;
}


/*
int main()
{
    int ultimoReg=-1,ultimoRotulo =-1;
    ListaInst cod1 = ListaInst();
    ListaInst cod2 = ListaInst();
    ListaInst cod3 = ListaInst();
    ListaInst cod4 = ListaInst();
    cod1.appendInstCodigo(geraInst2op("LoadI","12",geraRegistrador(&ultimoReg)));
    cod1.appendInstCodigo(geraInst2op("LoadI","24",geraRegistrador(&ultimoReg)));
    cod2.appendInstCodigo(geraInst3op("add","r0","r1",geraRegistrador(&ultimoReg)));
    cod2.appendCodigoInicio(cod1.getCodigo());
    cod2.exportaCod();

    return 0;
}*/