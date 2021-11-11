#include "generateAsm.hpp"


ListaAsm::ListaAsm()
{
    this->codigoAsm = list<InstAsm>();
}
void ListaAsm::appendInstAsmCodigo(InstAsm inst){
    this->codigoAsm.push_front(inst);

}
void ListaAsm::appendInstAsmFimCodigo(InstAsm inst){
    this->codigoAsm.push_back(inst);

}
void ListaAsm::remendaTrue(list<int> idsRemendo, string rotulo)
{
    list<InstAsm>::iterator itInst;
    list<int>::iterator itId;
    for(itId = idsRemendo.begin();itId != idsRemendo.end();++itId)
    {
        for(itInst= this->codigoAsm.begin();itInst !=this->codigoAsm.end();++itInst)
        {
            if((*itId) == (*itInst).id)
            {
                (*itInst).op1= rotulo; //VERIFICAR CASOS EM Q PODE TER Q TROCAR OUTRO OPERADOR
            }
        }
    }
}
void ListaAsm::remendaFalse(list<int> idsRemendo, string rotulo)
{
    list<InstAsm>::iterator itInst;
    list<int>::iterator itId;
    for(itId = idsRemendo.begin();itId != idsRemendo.end();++itId)
    {
        for(itInst= this->codigoAsm.begin();itInst !=this->codigoAsm.end();++itInst)
        {
            if((*itId) == (*itInst).id)
            {
                (*itInst).op2= rotulo; //VERIFICAR CASOS EM Q PODE TER Q TROCAR OUTRO OPERADOR
            }
        }
    }

} 
void ListaAsm::appendCodigoAsmInicio(list<InstAsm> codigoPref){
    list<InstAsm>::reverse_iterator itList;

    if((codigoPref.back().id != this->codigoAsm.back().id)||(codigoPref.front().id != this->codigoAsm.front().id) || (this->codigoAsm.size() == 0))
    {
        for(itList = codigoPref.rbegin();itList !=codigoPref.rend();++itList)
        {
            this->codigoAsm.push_front((*itList));
        }

    }


}

void ListaAsm::appendCodigoAsmFim(list<InstAsm> codigoPos){
    list<InstAsm>::iterator itList;

    if((codigoPos.back().id != this->codigoAsm.back().id)||(codigoPos.front().id != this->codigoAsm.front().id) || (this->codigoAsm.size() == 0))
    for(itList = codigoPos.begin();itList !=codigoPos.end();++itList)
    {
        this->codigoAsm.push_back((*itList));
    }


}
list<InstAsm> ListaAsm::getCodigoAsm(){

    return this->codigoAsm;
}
void ListaAsm::exportaCodAsm(){
    for(auto inst : this->codigoAsm)
    {
        //printaInstAsm(inst);
    }
}
InstAsm geraInstAsm3op(string operacao,string op1,string op2,string dst,int tipoInst, int *id)
{
    InstAsm inst;
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
InstAsm geraInstAsm2op(string operacao,string op1,string dst,int tipoInst, int *id)
{
    InstAsm inst;
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

list<InstAsm> geraAsmArit(string operation,int *id)
{
    list<InstAsm> listaRet;
    InstAsm inst;
    inst = geraInstAsm2op("pushl","\%eax","",ASM_PUSH,id);
    listaRet.push_front(inst);
    inst = geraInstAsm3op(operation,"\%eax","\%edx","\%eax",ASM_ARIT,id);
    listaRet.push_front(inst);
    inst = geraInstAsm2op("popl","\%eax","",ASM_POP,id);
    listaRet.push_front(inst);
    inst = geraInstAsm2op("popl","\%edx","",ASM_POP,id);
    listaRet.push_front(inst);
    
    return listaRet;
}
list<InstAsm> convertIloc(list<Instrucao> codIloc,int *id)
{

}
list<InstAsm> geraAsmAtri(int desloc,int *id)
{

}
