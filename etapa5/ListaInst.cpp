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
list<Instrucao> geraInstAtribTipoDesloc(int desloc, int escopo ,int tipo,string regOrig ,ListaInst *exp,list<int> idRemendoTrue,list<int> idRemendoFalse,int *ultimoReg,int *ultimoRotulo,int *id)
{
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();
    string regBase;
    string regDst = geraRegistrador(ultimoReg);
    if(escopo == ESC_GLOBAL)
        regBase = "rbss";
    else
        regBase = "rbf";
    if(tipo == ID_BOOL)
    {
        string rot1 = geraRotulo(ultimoRotulo);
        string rot2 = geraRotulo(ultimoRotulo);
        string rot3 = geraRotulo(ultimoRotulo);
        inst = geraInst3op("storeAI",regBase,to_string(desloc),regDst,INST_MEM,id);
        retList.push_front(inst);
        inst=geraInst2op(rot3,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        inst = geraInst2op("jumpI","",rot3,INST_JMP,id);
        retList.push_front(inst);
        inst = geraInst2op("loadI","1",regDst,INST_LOADI,id);
        retList.push_front(inst);
        inst=geraInst2op(rot2,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        (*exp).remendaTrue(idRemendoTrue,rot2);
        inst = geraInst2op("jumpI","",rot3,INST_JMP,id);
        retList.push_front(inst);
        inst = geraInst2op("loadI","0",regDst,INST_LOADI,id);
        retList.push_front(inst);
        inst=geraInst2op(rot1,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        (*exp).remendaFalse(idRemendoFalse,rot1);


    }
    else
    {
        inst = geraInst3op("storeAI",regBase,to_string(desloc),regOrig,INST_MEM,id);
        retList.push_front(inst);
    }
    list<Instrucao>::reverse_iterator itList;
    list<Instrucao> listInstCod = (*exp).getCodigo();
    for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
    {
        retList.push_front((*itList));
    }
    
    return retList;
}

Instrucao geraInst3op(string operacao,string op1,string op2, string dst,int tipoInst, int *id){
    Instrucao inst;
    inst.dst = dst;
    inst.n_op = 3;
    inst.op1 = op1;
    inst.op2 = op2;
    inst.operacao = operacao;
    inst.tipoInst = tipoInst;
    *id= *id+1;
    inst.id = *id;
    return inst;
}
Instrucao geraInst2op(string operacao,string op1,string dst,int tipoInst, int *id){
    Instrucao inst;
    inst.dst = dst;
    inst.n_op = 2;
    inst.op1 = op1;
    inst.op2 = "";
    inst.operacao = operacao;
    inst.tipoInst = tipoInst;
    *id= *id+1;
    inst.id = *id;
    return inst;
}
void ListaInst::appendInstCodigo(Instrucao inst){
    this->codigo.push_front(inst);

}
void ListaInst::remendaTrue(list<int> idsRemendo, string rotulo)
{
    list<Instrucao>::iterator itInst;
    list<int>::iterator itId;
    for(itId = idsRemendo.begin();itId != idsRemendo.end();++itId)
    {
        for(itInst= this->codigo.begin();itInst !=this->codigo.end();++itInst)
        {
            if((*itId) == (*itInst).id)
            {
                (*itInst).op1= rotulo; //VERIFICAR CASOS EM Q PODE TER Q TROCAR OUTRO OPERADOR
            }
        }
    }
}
void ListaInst::remendaFalse(list<int> idsRemendo, string rotulo)
{
    list<Instrucao>::iterator itInst;
    list<int>::iterator itId;
    for(itId = idsRemendo.begin();itId != idsRemendo.end();++itId)
    {
        for(itInst= this->codigo.begin();itInst !=this->codigo.end();++itInst)
        {
            if((*itId) == (*itInst).id)
            {
                (*itInst).op2= rotulo; //VERIFICAR CASOS EM Q PODE TER Q TROCAR OUTRO OPERADOR
            }
        }
    }

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
        switch (inst.tipoInst)
        {
        case INST_ARITLOG:
            cout <<inst.operacao << " "<< inst.op1 <<", " << inst.op2 <<" => "<< inst.dst  << endl;
            break;
        case INST_MEM:
            cout <<inst.operacao << " " <<inst.dst << " => "<< inst.op1 <<", " << inst.op2 <<  endl;
            break;
        case INST_REL:
            cout <<inst.operacao << " "<< inst.op1 <<", " << inst.op2 <<" -> "<< inst.dst  << endl;
            break;
        case INST_CBR:
            cout <<inst.operacao << " "<<  inst.dst <<" -> " << inst.op1 <<", " << inst.op2  << endl;
            break;
        default:
            break;
        }
        
    else
    switch (inst.tipoInst)
        {
        case INST_JMP:
            cout <<inst.operacao << " -> "<< inst.dst  << endl;
            break;
        case INST_LOADI:
            cout <<inst.operacao << " "<< inst.op1 <<" => "<< inst.dst   << endl;
            break;
        case INST_NOP_ROT:
            cout <<inst.operacao << ": "<< "nop" << endl;
            break;
        default:
            break;
        }
        
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