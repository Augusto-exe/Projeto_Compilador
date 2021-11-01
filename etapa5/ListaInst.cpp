#include "ListaInst.hpp"

ListaInst::ListaInst()
{
    this->codigo = list<Instrucao>();
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
        regBase = "rfp";
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

list<Instrucao> geraInstIfElse(int tipo,string regOrg,ListaInst *exp,ListaInst listaT,ListaInst listaF,list<int> idRemendoTrue,list<int> idRemendoFalse,int *ultimoReg,int *ultimoRotulo,int *id, string rotT,string rotF,string rotEnd)
{
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();
    list<Instrucao>::reverse_iterator itList;
    list<Instrucao> listInstCod;
    if(tipo == ID_BOOL)
    {
        if(rotF != rotEnd)//IF com else
        {
            inst=geraInst2op(rotEnd,"","",INST_NOP_ROT,id);
            retList.push_front(inst);
            listInstCod = listaF.getCodigo();
            for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
            {
                retList.push_front((*itList));
            }
            inst=geraInst2op(rotF,"","",INST_NOP_ROT,id);
            retList.push_front(inst);
            inst = geraInst2op("jumpI","",rotEnd,INST_JMP,id);
            retList.push_front(inst);
            (*exp).remendaFalse(idRemendoFalse,rotF);
        }
        else{

            inst=geraInst2op(rotEnd,"","",INST_NOP_ROT,id);
            retList.push_front(inst);
            (*exp).remendaFalse(idRemendoFalse,rotEnd);
        }

        listInstCod = listaT.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }
        inst=geraInst2op(rotT,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        (*exp).remendaTrue(idRemendoTrue,rotT);

    }
    else
    {
        if(rotF != rotEnd)//IF com else
        {
            inst=geraInst2op(rotEnd,"","",INST_NOP_ROT,id);
            retList.push_front(inst);
            listInstCod = listaF.getCodigo();
            for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
            {
                retList.push_front((*itList));
            }
            inst=geraInst2op(rotF,"","",INST_NOP_ROT,id);
            retList.push_front(inst);
            inst = geraInst2op("jumpI","",rotEnd,INST_JMP,id);
            retList.push_front(inst);
        }
        else{

            inst=geraInst2op(rotEnd,"","",INST_NOP_ROT,id);
            retList.push_front(inst);
        }

        listInstCod = listaT.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }

        inst=geraInst2op(rotT,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        list<Instrucao> listaTemp = geraBoolFromArit(ultimoReg,regOrg,rotT,rotF,id);
        for(itList = listaTemp .rbegin();itList !=listaTemp.rend();++itList)
        {
            retList.push_front((*itList));
        }

    }

    listInstCod = (*exp).getCodigo();
    for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
    {
        retList.push_front((*itList));
    }
    
    return retList;
}

list<Instrucao> geraInstWhile(int tipo,string regOrg,ListaInst *exp,ListaInst listaT,list<int> idRemendoTrue,list<int> idRemendoFalse,int *ultimoReg,int *ultimoRotulo,int *id, string rotT,string rotEnd)
{
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();
    list<Instrucao>::reverse_iterator itList;
    list<Instrucao> listInstCod;
    string rotTemp = geraRotulo(ultimoRotulo);
    if(tipo == ID_BOOL)
    {

        inst=geraInst2op(rotEnd,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        (*exp).remendaFalse(idRemendoFalse,rotEnd);
        inst = geraInst2op("jumpI","",rotTemp,INST_JMP,id);
        retList.push_front(inst);

        
        listInstCod = listaT.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }
        inst=geraInst2op(rotT,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        (*exp).remendaTrue(idRemendoTrue,rotT);

        listInstCod = (*exp).getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }
        inst=geraInst2op(rotTemp,"","",INST_NOP_ROT,id);
        retList.push_front(inst);

    }
    else
    {
        
        inst=geraInst2op(rotEnd,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        inst = geraInst2op("jumpI","",rotTemp,INST_JMP,id);
        retList.push_front(inst);
        

        listInstCod = listaT.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }

        inst=geraInst2op(rotT,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        list<Instrucao> listaTemp = geraBoolFromArit(ultimoReg,regOrg,rotT,rotEnd,id);
        for(itList = listaTemp .rbegin();itList !=listaTemp.rend();++itList)
        {
            retList.push_front((*itList));
        }

        listInstCod = (*exp).getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }
        inst=geraInst2op(rotTemp,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
    }


    
    return retList;
}

list<Instrucao> geraInstFor(int tipo,string regOrg,ListaInst *exp,ListaInst listaT,ListaInst listaIni,ListaInst listaAtrib,list<int> idRemendoTrue,list<int> idRemendoFalse,int *ultimoReg,int *ultimoRotulo,int *id, string rotT,string rotEnd)
{
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();
    list<Instrucao>::reverse_iterator itList;
    list<Instrucao> listInstCod;
    string rotTemp = geraRotulo(ultimoRotulo);
    if(tipo == ID_BOOL)
    {

        inst=geraInst2op(rotEnd,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        (*exp).remendaFalse(idRemendoFalse,rotEnd);
        inst = geraInst2op("jumpI","",rotTemp,INST_JMP,id);
        retList.push_front(inst);
        
        listInstCod = listaAtrib.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }
        
        listInstCod = listaT.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }
        inst=geraInst2op(rotT,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        (*exp).remendaTrue(idRemendoTrue,rotT);

        listInstCod = (*exp).getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }
        inst=geraInst2op(rotTemp,"","",INST_NOP_ROT,id);
        retList.push_front(inst);

        listInstCod = listaIni.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }

    }
    else
    {
        
        inst=geraInst2op(rotEnd,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        inst = geraInst2op("jumpI","",rotTemp,INST_JMP,id);
        retList.push_front(inst);
        
        listInstCod = listaAtrib.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }

        listInstCod = listaT.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }

        inst=geraInst2op(rotT,"","",INST_NOP_ROT,id);
        retList.push_front(inst);
        list<Instrucao> listaTemp = geraBoolFromArit(ultimoReg,regOrg,rotT,rotEnd,id);
        for(itList = listaTemp .rbegin();itList !=listaTemp.rend();++itList)
        {
            retList.push_front((*itList));
        }

        listInstCod = (*exp).getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }
        inst=geraInst2op(rotTemp,"","",INST_NOP_ROT,id);
        retList.push_front(inst);

        listInstCod = listaIni.getCodigo();
        for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
        {
            retList.push_front((*itList));
        }
    }


    
    return retList;
}

list<Instrucao> geraDeclaFunc(string regPilha, int* ultimoReg, int* id, ListaInst listaT)
{
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();
    list<Instrucao>::reverse_iterator itList;
    list<Instrucao> listInstCod;


    listInstCod = listaT.getCodigo();
    for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
    {
        retList.push_front((*itList));
    }

    inst = geraInst3op("addI","rsp","16", "rsp", INST_ARITLOG, id);
    retList.push_front(inst);

    inst = geraInst2op("i2i","rsp","rfp",INST_I2I,id);
    retList.push_front(inst);
    return retList;
}

list<Instrucao> geraInstReturn(string regExp, int* ultimoReg, int* id) {
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();
    string regRetorno = geraRegistrador(ultimoReg);
    string regAux1 = geraRegistrador(ultimoReg);
    string regAux2 = geraRegistrador(ultimoReg);
    inst = geraInst2op("jump","",regRetorno,INST_JMP,id);
    retList.push_front(inst);
    inst = geraInst2op("i2i",regAux2,"rfp",INST_I2I,id);
    retList.push_front(inst);
    inst = geraInst2op("i2i",regAux1,"rsp",INST_I2I,id);
    retList.push_front(inst);
    inst = geraInst3op("loadAI", "rfp", "8", regAux2, INST_ARITLOG,id);
    retList.push_front(inst);
    inst = geraInst3op("loadAI", "rfp","4", regAux1, INST_ARITLOG, id);
    retList.push_front(inst);
    inst = geraInst3op("loadAI", "rfp", "0", regRetorno, INST_ARITLOG, id);
    retList.push_front(inst);
    inst = geraInst3op("storeAI","rfp","12",regExp,INST_MEM,id);
    retList.push_front(inst);

    return retList;
}

list<Instrucao> geraInstList(int* ultimoReg, int* id, string regDst)
{
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();

    string regAux = geraRegistrador(ultimoReg);
    inst = geraInst3op("storeAI", regDst,to_string(*id), regAux,  INST_MEM,id);
    retList.push_front(inst);
    inst = geraInst3op("loadAI", "rfp", regAux, to_string(*id), INST_LOADI, id);
    retList.push_front(inst);
    
    return retList;
}

list<Instrucao> geraInstFunc(string regPilha, int* ultimoReg, int* id, ListaInst listaT, string rotulo)
{
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();
    list<Instrucao>::reverse_iterator itList;
    list<Instrucao> listInstCod;
    regPilha = geraRegistrador(ultimoReg);

    inst = geraInst2op("jump","",rotulo,INST_JMP,id);
    retList.push_front(inst);

    listInstCod = listaT.getCodigo();
    for(itList = listInstCod.rbegin();itList !=listInstCod.rend();++itList)
    {
        retList.push_front((*itList));
    }

    inst = geraInst3op("storeAI", "rsp", to_string(*id + 8), "rfp", INST_MEM,id);
    retList.push_front(inst);
    inst = geraInst3op("storeAI", "rsp", to_string(*id + 4), "rsp", INST_MEM, id);
    retList.push_front(inst);
    inst = geraInst3op("storeAI", "rsp", to_string(*id), regPilha,  INST_MEM, id);
    retList.push_front(inst);
    inst = geraInst3op("addI", regPilha, "rpc", to_string(*id), INST_ARITLOG, id);
    retList.push_front(inst);
    return retList;
}

list<Instrucao> geraCodigoInicial(string rotMain,string regAux,int *id )
{
    Instrucao inst;
    list<Instrucao> retList;

	inst = geraInst3op("loadAI","rsp","12","r0",INST_ARITLOG,id);
	retList.push_front(inst);
	inst = geraInst2op("jumpI","",rotMain,INST_JMP,id);
	retList.push_front(inst);
	inst = geraInst3op("storeAI","rsp","8","rfp",INST_MEM,id);
	retList.push_front(inst);
	inst = geraInst3op("storeAI","rsp","4","rsp",INST_MEM,id);
	retList.push_front(inst);
	inst = geraInst3op("storeAI","rsp","0",regAux,INST_MEM,id);
	retList.push_front(inst);
	inst = geraInst3op("addI","rpc","5",regAux,INST_ARITLOG,id);
	retList.push_front(inst);



    inst = geraInst2op("loadI","1024","rfp",INST_LOADI,id);
    retList.push_front(inst);
    inst = geraInst2op("loadI","1024","rsp",INST_LOADI,id);
    retList.push_front(inst);
    inst = geraInst2op("loadI",to_string(*id +3),"rbss",INST_LOADI,id);
    retList.push_front(inst);

    return retList;

}

list<Instrucao> geraLeituraVar(string regDst, int deslocamento, int escopo, int* ultimoReg,int* ultimoRotulo,int* id)
{
    string regBase;
    Instrucao inst;
    list<Instrucao> retList;
    if(escopo == ESC_GLOBAL)
        regBase = "rbss";
    else
        regBase = "rfp";
    
    inst = geraInst3op("loadAI",regBase,to_string(deslocamento),regDst,INST_MEM_READ,id);
    retList.push_front(inst);

    return retList;
}


list<Instrucao> geraInit(int deslocDst,int escopoDst, int natureza, string nomeValue,int deslocOrig,int escopoOrig, int *ultimoReg, int* ultimoRotulo,int* id)
{
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();
    string regAux = geraRegistrador(ultimoReg);
    string regBaseD,regBaseO;
    string regDst = geraRegistrador(ultimoReg);

    if(escopoDst == ESC_GLOBAL)
        regBaseD = "rbss";
    else
        regBaseD = "rfp";
       
    if(escopoOrig == ESC_GLOBAL)
        regBaseO = "rbss";
    else
        regBaseO = "rfp";
    
    inst = geraInst3op("storeAI",regBaseD,to_string(deslocDst),regAux,INST_MEM,id);
    retList.push_front(inst);

    if(natureza == NAT_LIT)
    {
        inst = geraInst2op("loadI",nomeValue,regAux,INST_LOADI,id);
        retList.push_front(inst);
    }
    else
    {
        inst = geraInst3op("loadAI",regBaseO,to_string(deslocOrig),regAux,INST_MEM_READ,id);
        retList.push_front(inst);
    }
    return retList;
}

list<Instrucao> geraBoolFromArit(int *ultimoReg,string regOrg,string rotT,string rotF, int *id)
{
    Instrucao inst;
    list<Instrucao> retList = list<Instrucao>();
    string regTemp = geraRegistrador(ultimoReg);
    string regCmp = geraRegistrador(ultimoReg);
    inst = geraInst3op("cbr",rotT,rotF,regCmp,INST_CBR,id);
    retList.push_front(inst);
    inst = geraInst3op("cmp_NE",regOrg,regTemp,regCmp,INST_REL,id);
    retList.push_front(inst);
    inst = geraInst2op("loadI","0",regTemp,INST_LOADI,id);
    retList.push_front(inst);
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
void ListaInst::appendInstFimCodigo(Instrucao inst){
    this->codigo.push_back(inst);

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

    if((codigoPref.back().id != this->codigo.back().id)||(codigoPref.front().id != this->codigo.front().id) || (this->codigo.size() == 0))
    {
        for(itList = codigoPref.rbegin();itList !=codigoPref.rend();++itList)
        {
            this->codigo.push_front((*itList));
        }

    }


}

void ListaInst::appendCodigoFim(list<Instrucao> codigoPos){
    list<Instrucao>::iterator itList;

    if((codigoPos.back().id != this->codigo.back().id)||(codigoPos.front().id != this->codigo.front().id) || (this->codigo.size() == 0))
    for(itList = codigoPos.begin();itList !=codigoPos.end();++itList)
    {
        this->codigo.push_back((*itList));
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
        case INST_MEM_READ:
            cout <<inst.operacao << " " << inst.op1 <<", " << inst.op2  <<" => "<<  inst.dst << endl;
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
        case INST_HALT:
            cout << "halt" << endl;
            break;
        case INST_I2I:
            cout <<inst.operacao << " "<< inst.op1 <<" => "<< inst.dst   << endl;
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