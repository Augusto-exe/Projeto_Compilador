/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
#include "pilhaContexto.hpp"
#include <iostream>
using namespace std;


PilhaContexto::PilhaContexto()
{
	this->insereContexto();
}

void PilhaContexto::insereContexto()
{
	tabelaSimbolos contexto;
	this->contextos.push_back(contexto);
}

tabelaSimbolos PilhaContexto::popContexto()
{
	tabelaSimbolos mapaRet = this->contextos.back();

	this->contextos.pop_back();

	return mapaRet;
}
string getNomeValorLexico(lexic_val_type* valorLex)
{
	string nomeChave;
	if(valorLex->type == TIPO_LIT)
	{
		switch (valorLex->value_type)
		{
		case LIT_TIPO_INT:
			nomeChave = string(to_string(valorLex->tk_value.vInt));
			break;
		case LIT_TIPO_BOOL:
			nomeChave = string(to_string(valorLex->tk_value.vBool));
			break;
		case LIT_TIPO_CHAR:
			nomeChave = string(valorLex->tk_value.vChar);
			break;
		case LIT_TIPO_FLOAT:
			nomeChave = string(to_string(valorLex->tk_value.vFloat));
			break;
		case LIT_TIPO_STRING:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		default:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		}
	}
	else
	{
		nomeChave = string(valorLex->tk_value.vStr);
	}
	return nomeChave;
}



Instrucao PilhaContexto::insereSimboloNonVet(int line, int natureza, lexic_val_type *valorLex, int tipo,int*id,int tipoGerador,int escopo)
{
	DadoTabelaSimbolos novoSimbolo;
	list<DadoTabelaSimbolos> parametros;
	Instrucao inst;
	string nomeChave,nomeOrg;
	novoSimbolo.linha = line;
	novoSimbolo.natureza = natureza;
	novoSimbolo.tipo = tipo;
	novoSimbolo.tamanho = 1;
	novoSimbolo.escopo= escopo;
	if(natureza == NAT_LIT)
	{
		novoSimbolo.tamanho = getTamanhoTipo(novoSimbolo.tipo);
		switch(novoSimbolo.tipo)
		{			
			case LIT_TIPO_INT:
				nomeChave = string(to_string(valorLex->tk_value.vInt));
				break;
			case LIT_TIPO_BOOL:
				nomeChave = string(to_string(valorLex->tk_value.vBool));
				break;
			case LIT_TIPO_CHAR:
				nomeChave = string(valorLex->tk_value.vChar);
				break;
			case LIT_TIPO_FLOAT:
				nomeChave = string(to_string(valorLex->tk_value.vFloat));
				break;
			case LIT_TIPO_STRING:
				nomeChave = string(valorLex->tk_value.vStr);
				novoSimbolo.tamanho = nomeChave.size(); 
				break;
			case INDEF:
				nomeChave = string(valorLex->tk_value.vStr);
				break;
			default:
				nomeChave = string(valorLex->tk_value.vStr);
				break;

		}

		nomeOrg = nomeChave; 
		nomeChave.append("LIT");
	}	
	else
	{
		nomeChave = string(valorLex->tk_value.vStr);
		nomeOrg = nomeChave; 
		if(novoSimbolo.tipo == INDEF)
		{
			this->varTipoPend.push_back(nomeChave);
		}
		else
		{
			inst = geraInst3op("addI","rsp",to_string( getTamanhoTipo(tipo)),"rsp",INST_ARITLOG,id,tipoGerador,"");;
		}
		if(this->existeSimboloContextoAtual(nomeChave))
			this->emitirErro(ERR_DECLARED,line,nomeOrg,nomeChave);
	}

	novoSimbolo.valorLexico = *valorLex;
	novoSimbolo.parametros = parametros;



	this->insereSimboloContextoAtual(nomeChave, novoSimbolo);

	return inst;
}
void PilhaContexto::insereSimboloVet(int line, int natureza, lexic_val_type *valorLex,int tipo,int tamanho, int escopo)
{
	DadoTabelaSimbolos novoSimbolo;
	list<DadoTabelaSimbolos> parametros;
	string nomeChave,nomeOrg;
	novoSimbolo.linha = line;
	novoSimbolo.natureza = natureza;
	novoSimbolo.tipo = tipo;
	novoSimbolo.tamanho = tamanho;
	novoSimbolo.escopo= escopo;
	switch(novoSimbolo.tipo)
	{
		case LIT_TIPO_INT:
			nomeChave = string(to_string(valorLex->tk_value.vInt));
			break;
		case LIT_TIPO_BOOL:
			nomeChave = string(to_string(valorLex->tk_value.vBool));
			break;
		case LIT_TIPO_CHAR:
			nomeChave = string(valorLex->tk_value.vChar);
			break;
		case LIT_TIPO_FLOAT:
			nomeChave = string(to_string(valorLex->tk_value.vFloat));
			break;
		case LIT_TIPO_STRING:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		case INDEF:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		default:
			nomeChave = string(valorLex->tk_value.vStr);
			break;

	}
	nomeOrg = nomeChave; 

	if(novoSimbolo.tipo == INDEF)
	{
		this->varTipoPend.push_back(nomeChave);
	}
	novoSimbolo.valorLexico = *valorLex;
	novoSimbolo.parametros = parametros;
	if(this->existeSimboloContextoAtual(nomeChave))
		this->emitirErro(ERR_DECLARED,line,nomeOrg,nomeChave);
	this->insereSimboloContextoAtual(nomeChave,novoSimbolo);
}

void PilhaContexto::insereInicPendente(lexic_val_type *valorVariable,lexic_val_type *valorValue)
{
	int tipoValue;
	IniciacaoPendente ini;
	if(valorValue->type != TIPO_LIT)
	{
		tipoValue = this->verificaVar(valorValue);
	}
	ini.variable =valorVariable;
	ini.value =valorValue;
	this->inicsPendentes.push_front(ini);
}

list<Instrucao> PilhaContexto::fazInic(int *ultimoReg,int *ultimoRotulo,int *id)
{
	DadoTabelaSimbolos var,value;
	list<Instrucao> retList = list<Instrucao>();
	list<Instrucao> auxList = list<Instrucao>();
	int linha;
	string nome;
	for(auto ini : this->inicsPendentes)
	{
		var = this->getSimboloPorValorLex(ini.variable);
		value = this->getSimboloPorValorLex(ini.value);
		linha = ini.value->lineno;
		nome = string(ini.variable->tk_value.vStr);
		if(value.tipo == ID_CHAR && var.tipo != ID_CHAR )
		{
			string msg = nome;
			nome = string(ini.value->tk_value.vStr);
			this->emitirErro(ERR_CHAR_TO_X,linha,nome,msg);
		}
		if(value.tipo == ID_STRING && var.tipo != ID_STRING )
		{
			string msg;
			msg = nome;
			nome = string(ini.value->tk_value.vStr);
			this->emitirErro(ERR_STRING_TO_X,linha,nome,msg);
		}

		if(value.tipo!=var.tipo && !(checaConversaoImplicita(value.tipo,var.tipo)))
		{
			string msg;
			msg= string(ini.value->tk_value.vStr);
			this->emitirErro(ERR_WRONG_TYPE,linha,nome,msg);
		}
		if(var.tipo == ID_STRING && value.tipo == ID_STRING )
		{
			this->contextos.back().atualizaTamanhoString(nome,value.tamanho);
		}
		string nomeValue = getNomeValorLexico(ini.value);
		auxList = geraInit(var.deslocamento,var.escopo,value.natureza, nomeValue ,value.deslocamento,value.escopo,ultimoReg,ultimoRotulo,id,GERA_INI,nome);
		for(list<Instrucao>::reverse_iterator itList = auxList.rbegin();itList !=auxList.rend();++itList)
        {
            retList.push_front((*itList));
        }
	}
	this->inicsPendentes.clear();
	return retList;
}


void PilhaContexto::insereFun(int line, lexic_val_type *valorLex, int rotulo )
{
	DadoTabelaSimbolos novoSimbolo;
	list<DadoTabelaSimbolos> parametros;
	string nome = string(valorLex->tk_value.vStr);
	novoSimbolo.natureza = NAT_FUN;
	novoSimbolo.tipo = INDEF;
	novoSimbolo.parametros = parametros;
	novoSimbolo.valorLexico = *valorLex;
	novoSimbolo.tamanho = 1;
	novoSimbolo.escopo = ESC_GLOBAL;
	novoSimbolo.rot_reg = rotulo;
	novoSimbolo.deslocamento =-1;
	if(this->existeSimboloContextos(nome))
		this->emitirErro(ERR_DECLARED,line,nome,nome);
	
	this->contextos.front().insereSimbolo(nome,novoSimbolo);

}

void PilhaContexto::empilhaParametro(lexic_val_type *valorLex)
{
	string nome = string(valorLex->tk_value.vStr);
	DadoTabelaSimbolos dado = this->retornaSimboloBack(nome);
	this->parametrosPendentes.push_back(dado);
}

int PilhaContexto::infereTipo(a_nodo* nodoEsq,a_nodo* nodoDir)
{
	int tipoEsq = nodoEsq->tipo_valor_semantico;
	int tipoDir = nodoDir->tipo_valor_semantico;

	if((tipoDir != tipoEsq) &&(tipoEsq == ID_STRING || tipoDir == ID_STRING))
	{
		emitirErro(ERR_STRING_TO_X,nodoEsq->valor_lexico->lineno,"","");
	}
	if((tipoDir != tipoEsq) &&(tipoEsq == ID_CHAR || tipoDir == ID_CHAR))
	{
		emitirErro(ERR_CHAR_TO_X,nodoEsq->valor_lexico->lineno,"","");
	}
	if(tipoEsq == tipoDir)
		return tipoDir;
	if(tipoDir == INDEF ||tipoEsq == INDEF || tipoDir == ID_STRING || tipoEsq == ID_STRING || tipoDir == ID_CHAR || tipoEsq ==ID_CHAR )
		return INDEF;
	if((tipoEsq == ID_INT && tipoDir == ID_INT)||(tipoEsq == ID_INT && tipoDir == ID_BOOL)|| (tipoEsq == ID_BOOL && tipoDir == ID_INT))
		return ID_INT;
	if(tipoEsq == ID_FLOAT || tipoDir == ID_FLOAT)
		return ID_FLOAT;
	
	return ID_BOOL;
}

int PilhaContexto::getDeslocamentoAtual()
{
	return this->contextos.back().getDeslocamento();

}
void PilhaContexto::setDeslocamentoAtual(int desloc)
{
	this->contextos.back().setDeslocamento(desloc);

}

int PilhaContexto::infereTipoTern(a_nodo* nodoEsq,a_nodo* nodoMeio,a_nodo* nodoDir)
{
	int tipo_temp;
	a_nodo* nodo_temp;
	nodo_temp = new a_nodo;

	tipo_temp = this->infereTipo(nodoEsq,nodoMeio);
	nodo_temp->tipo_valor_semantico= tipo_temp;
	tipo_temp = this->infereTipo(nodo_temp,nodoDir);

	free(nodo_temp);

	return tipo_temp;
}
bool checaConversaoImplicita(int tipoOrig,int tipoDst)
{
	bool ret = false;
	if(tipoOrig == ID_BOOL &&(tipoDst == ID_INT || tipoDst == ID_FLOAT ))
		ret = true;
	if(tipoOrig == ID_INT &&(tipoDst == ID_BOOL || tipoDst == ID_FLOAT ))
		ret = true;
	if(tipoOrig == ID_FLOAT &&(tipoDst == ID_INT || tipoDst == ID_BOOL ))
		ret = true;
	return ret;
}

list<Instrucao> PilhaContexto::comparaParams(list<DadoTabelaSimbolos> listParam,a_nodo* nodo,int linha, string nomeFunc,int *id)
{
	int inputSize = 0;
	list<int> inputTipeList;
	list<string> regList;
	list<int> tamList;
	list<Instrucao> retList;
	Instrucao inst;
	int offset = 16;

	while(nodo !=NULL)
	{
		inputSize++;
		inputTipeList.push_back(nodo->tipo_valor_semantico);
		regList.push_back(nodo->reg);
		tamList.push_back(getTamanhoTipo(getTipoPorValorLex(nodo->valor_lexico)));
		nodo = nodo->filho;
		if(nodo!=NULL)
		{
			while(nodo->prox_irmao != NULL)
				nodo = nodo->prox_irmao;
			if(nodo->is_arg == false)
				nodo = NULL;
		}
	}
	if(inputSize > listParam.size())
	{
		string msg = "Expected "+ to_string(listParam.size()) +" received " + to_string(inputSize)+".";
		this->emitirErro(ERR_EXCESS_ARGS,linha,nomeFunc,msg);
	}
	if(inputSize < listParam.size())
	{
		string msg = "Expected "+ to_string(listParam.size()) +" received " + to_string(inputSize)+".";
		this->emitirErro(ERR_MISSING_ARGS,linha,nomeFunc,msg);
	}

	int iteration = 0;
	list<int>::iterator it1 = inputTipeList.begin();
	list<DadoTabelaSimbolos>::iterator it2 =listParam.begin();
	list<string>::iterator it3 = regList.begin();
	list<int>::iterator it4 = tamList.begin();
	for(; it1 != inputTipeList.end() && it2 != listParam.end() && it3!=regList.end(); ++it1, ++it2,++it3,++it4)
	{

		iteration++;
		if((*it1)==ID_STRING)
		{
			string msg;
			msg= "received parameter of illegal type STRING.";
			this->emitirErro(ERR_FUNCTION_STRING,linha,nomeFunc,msg);
		}
		
		if((*it1)!=(*it2).tipo && !(checaConversaoImplicita((*it1),(*it2).tipo)))
		{
			string msg;
			msg= "received argument number " + to_string(iteration) +" with incopatible type.";
			this->emitirErro(ERR_WRONG_TYPE_ARGS,linha,nomeFunc,msg);
		}
		inst = geraInst3op("storeAI","rsp",to_string(offset),(*it3),INST_MEM,id,GERA_PARAM,nomeFunc);
		retList.push_back(inst);
		offset = offset + 4;//mudar para ficar pelo tamanho da entrada
		
	}
	return retList;

}

int PilhaContexto::getTipoFuncao(lexic_val_type *valorLex)
{
	string nomeFunc = string(valorLex->tk_value.vStr);
	bool existe = this->existeSimboloContextos(nomeFunc);
	DadoTabelaSimbolos dadoFunc;
	if(!existe)
	{
		emitirErro(ERR_UNDECLARED,valorLex->lineno,nomeFunc,nomeFunc);
	}
	dadoFunc = this->retornaSimbolo(nomeFunc);

	return dadoFunc.tipo;
}

//retornar intruções para chamada da função
list<Instrucao> PilhaContexto::verificaFuncao(lexic_val_type *valorLex, a_nodo* nodo,int linha,int *id,int* ultimoRotulo,int*ultimoReg,string regFun,string rotFun)
{
	string nomeFunc = string(valorLex->tk_value.vStr);
	bool existe = this->existeSimboloContextos(nomeFunc);
	list<Instrucao> retList,auxList;
	Instrucao inst;
	int countInst =5;
	string auxReg =geraRegistrador(ultimoReg);
	DadoTabelaSimbolos dadoFunc;

	if(!existe)
	{
		emitirErro(ERR_UNDECLARED,valorLex->lineno,nomeFunc,nomeFunc);
	}
	dadoFunc = this->retornaSimbolo(nomeFunc);

	if(dadoFunc.natureza == NAT_VAR || dadoFunc.natureza == NAT_VET)
	{

		if(dadoFunc.natureza == NAT_VAR)
			this->emitirErro(ERR_VARIABLE,valorLex->lineno,nomeFunc,"Function");
		else
			this->emitirErro(ERR_VECTOR,valorLex->lineno,nomeFunc,"Function");

	}

	inst = geraInst3op("loadAI","rsp","12",regFun,INST_ARITLOG,id,GERA_FUN_CALL,nomeFunc);
	retList.push_front(inst);
	inst = geraInst2op("jumpI","",rotFun,INST_JMP,id,GERA_FUN_CALL,nomeFunc);
	retList.push_front(inst);

	auxList = this->comparaParams(dadoFunc.parametros,nodo,linha,nomeFunc,id);


	countInst = countInst+auxList.size();
    list<Instrucao>::reverse_iterator itList;
    for(itList = auxList.rbegin();itList !=auxList.rend();++itList)
    {
        retList.push_front((*itList));
    }
	inst = geraInst3op("storeAI","rsp","8","rfp",INST_MEM,id,GERA_FUN_CALL,nomeFunc);
	retList.push_front(inst);
	inst = geraInst3op("storeAI","rsp","4","rsp",INST_MEM,id,GERA_FUN_CALL,nomeFunc);
	retList.push_front(inst);
	inst = geraInst3op("storeAI","rsp","0",auxReg,INST_MEM,id,GERA_FUN_CALL,nomeFunc);
	retList.push_front(inst);
	inst = geraInst3op("addI","rpc",to_string(countInst),auxReg,INST_ARITLOG,id,GERA_FUN_CALL,nomeFunc);
	retList.push_front(inst);

	return  retList;
}

//retornar o tipo da função
int PilhaContexto::verificaVetor(lexic_val_type *valorLex, a_nodo* vetIndex)
{
	string nomeVet = string(valorLex->tk_value.vStr);
	bool existe = this->existeSimboloContextos(nomeVet);
	DadoTabelaSimbolos dadoVet;
	if(!existe)
	{
		emitirErro(ERR_UNDECLARED,valorLex->lineno,nomeVet,nomeVet);
	}
	dadoVet = this->retornaSimbolo(nomeVet);

	if(dadoVet.natureza == NAT_FUN || dadoVet.natureza == NAT_VAR)
	{

		if(dadoVet.natureza == NAT_VAR)
			this->emitirErro(ERR_VARIABLE,valorLex->lineno,nomeVet,"Vector");
		else
			this->emitirErro(ERR_FUNCTION,valorLex->lineno,nomeVet,"Vector");

	}
	if(vetIndex->tipo_valor_semantico!=ID_INT && !(checaConversaoImplicita(ID_INT,vetIndex->tipo_valor_semantico)))
		this->emitirErro(ERR_WRONG_TYPE,valorLex->lineno,nomeVet,"Array");
		
	return dadoVet.tipo;
}

//retornar o tipo da Var
int PilhaContexto::verificaVar(lexic_val_type *valorLex)
{
	string nomeVar = string(valorLex->tk_value.vStr);
	bool existe = this->existeSimboloContextos(nomeVar);
	DadoTabelaSimbolos dadoVar;
	if(!existe)
	{
		emitirErro(ERR_UNDECLARED,valorLex->lineno,nomeVar,nomeVar);
	}
	dadoVar = this->retornaSimbolo(nomeVar);

	if(dadoVar.natureza == NAT_FUN || dadoVar.natureza == NAT_VET)
	{

		if(dadoVar.natureza == NAT_FUN)
			this->emitirErro(ERR_FUNCTION,valorLex->lineno,nomeVar,"Variable");
		else
			this->emitirErro(ERR_VECTOR,valorLex->lineno,nomeVar,"Variable");

	}

	return dadoVar.tipo;
}

void PilhaContexto::atualizaFunTipoPar(lexic_val_type *valorLex,int tipo)
{
	string nomeChave = string(valorLex->tk_value.vStr);
	if(tipo == ID_STRING)
	{
		string msg;
		msg= "received illegal return type STRING.";
		this->emitirErro(ERR_FUNCTION_STRING,valorLex->lineno,nomeChave,msg);
	}
	for(auto parametro:this->parametrosPendentes)
	{
		if(parametro.tipo == ID_STRING)
		{
			string msg;
			msg= "received a parameter with illegal type STRING.";
			this->emitirErro(ERR_FUNCTION_STRING,valorLex->lineno,nomeChave,msg);
		}
	}
	this->contextos.front().adicionaParametrosParaFunc(nomeChave,this->parametrosPendentes);
	this->contextos.front().setTipoTamanhoPorNome(nomeChave,tipo,getTamanhoTipo(tipo));
	this->parametrosPendentes.clear();
}

void PilhaContexto::setRotuloFun(lexic_val_type *valorLex,string rotFun)
{
	string nomeChave = string(valorLex->tk_value.vStr);

	this->contextos.front().setRotuloPorNome(nomeChave,rotFun);
}
string PilhaContexto::getRotuloFun(lexic_val_type *valorLex){
	
	string nomeChave = string(valorLex->tk_value.vStr);
	return this->contextos.front().getRotuloPorNome(nomeChave);
}


bool PilhaContexto::existeSimboloContextoAtual(string nome)
{
	return this->contextos.back().existeSimbolo(nome);
}

void PilhaContexto::exportaTabelas()
{
	for(auto contexto : this->contextos)
	{
		cout << endl << "nova tabela : "<< endl;
		contexto.exportaTabela();
	}
		
}
MapaSimbolos PilhaContexto::getContexto(){
	return this->contextos.back().getTabela();
}
int PilhaContexto::getTipoPorValorLex(lexic_val_type *valorLex)
{
	string nomeChave ;
	if(valorLex->type == TIPO_LIT)
	{
		switch (valorLex->value_type)
		{
		case LIT_TIPO_INT:
			nomeChave = string(to_string(valorLex->tk_value.vInt));
			break;
		case LIT_TIPO_BOOL:
			nomeChave = string(to_string(valorLex->tk_value.vBool));
			break;
		case LIT_TIPO_CHAR:
			nomeChave = string(valorLex->tk_value.vChar);
			break;
		case LIT_TIPO_FLOAT:
			nomeChave = string(to_string(valorLex->tk_value.vFloat));
			break;
		case LIT_TIPO_STRING:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		default:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		}
		nomeChave.append("LIT");
	}
	else{
		nomeChave = string(valorLex->tk_value.vStr);
	}
	DadoTabelaSimbolos dado = retornaSimbolo(nomeChave);
	return dado.tipo;
}
DadoTabelaSimbolos PilhaContexto::getSimboloPorValorLex(lexic_val_type *valorLex)
{
	string nomeChave;
	if(valorLex->type == TIPO_LIT)
	{
		switch (valorLex->value_type)
		{
		case LIT_TIPO_INT:
			nomeChave = string(to_string(valorLex->tk_value.vInt));
			break;
		case LIT_TIPO_BOOL:
			nomeChave = string(to_string(valorLex->tk_value.vBool));
			break;
		case LIT_TIPO_CHAR:
			nomeChave = string(valorLex->tk_value.vChar);
			break;
		case LIT_TIPO_FLOAT:
			nomeChave = string(to_string(valorLex->tk_value.vFloat));
			break;
		case LIT_TIPO_STRING:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		default:
			nomeChave = string(valorLex->tk_value.vStr);
			break;
		}
		nomeChave.append("LIT");
	}
	else{
		nomeChave = string(valorLex->tk_value.vStr);
	}
	DadoTabelaSimbolos dado = retornaSimbolo(nomeChave);
	return dado;
}

//retorna o tipo encontrado da input
int PilhaContexto::avaliaInput(lexic_val_type *valorLex)
{
	int tipo = this->getTipoPorValorLex(valorLex);
	if(tipo != ID_INT && tipo != ID_FLOAT )
	{
		string msg = "";
		string nome = "";
		this->emitirErro(ERR_WRONG_PAR_INPUT,valorLex->lineno,nome,msg);
	}
	return tipo;
}
int PilhaContexto::avaliaOutput(lexic_val_type *valorLex)
{

	int tipo = this->getTipoPorValorLex(valorLex);
	if(tipo != ID_INT && tipo != ID_FLOAT )
	{
		string msg = "";
		string nome = "";
		this->emitirErro(ERR_WRONG_PAR_OUTPUT,valorLex->lineno,nome,msg);
	}
	return tipo;
}

void PilhaContexto::avaliaShift(lexic_val_type *valorLex)
{
	if(valorLex->tk_value.vInt > 16)
	{
		string msg =to_string(valorLex->tk_value.vInt),nome ="";
		this->emitirErro(ERR_WRONG_PAR_SHIFT,valorLex->lineno,nome,msg);
	}

}
list<Instrucao> PilhaContexto::atualizaTipoTamanho(int tipo, int*id)
{
	list<Instrucao> retList;
	Instrucao inst;
	MapaSimbolos mapa = this->contextos.back().getTabela();
	for(auto nome:this->varTipoPend)
	{
		
		if(mapa[nome].tipo == INDEF)
		{
			if(tipo == ID_STRING && mapa[nome].natureza ==NAT_VET)
			{
				this->emitirErro(ERR_STRING_VECTOR,mapa[nome].linha,nome,"");
			} 
			this->contextos.back().setTipoTamanhoPorNome(nome, tipo, mapa[nome].tamanho*getTamanhoTipo(tipo));
			
		}
		if(mapa[nome].escopo == ESC_LOCAL)
		{
			inst = geraInst3op("addI","rsp",to_string( mapa[nome].tamanho*getTamanhoTipo(tipo)),"rsp",INST_ARITLOG,id,GERA_DEC_LOC,"");
			retList.push_back(inst);
		}
	
	}
	this->varTipoPend.clear();
	return retList;
}
void PilhaContexto::insereSimboloContextoAtual(string nome, DadoTabelaSimbolos novoSimbolo)
{
	this->contextos.back().insereSimbolo(nome, novoSimbolo);
}
bool PilhaContexto::existeSimboloContextos(string nome)
{
	for(PilhaMapas::reverse_iterator contexto = this->contextos.rbegin();contexto !=this->contextos.rend();++contexto )
	{
		if((*contexto).existeSimbolo(nome))
			return true;
	}
	return false;
}
DadoTabelaSimbolos PilhaContexto::retornaSimbolo(string nome)
{
	bool exitste = false;
	DadoTabelaSimbolos dadoRet;

	for(PilhaMapas::reverse_iterator contexto = this->contextos.rbegin();contexto !=this->contextos.rend();++contexto )
	{
		if((*contexto).existeSimbolo(nome))
		{
			exitste = true;
			dadoRet = (*contexto).getTabela()[nome];
			break;
		}
			
	}

	return dadoRet;
}

void PilhaContexto::verificaReturn(int tipoRet,int linha)
{

	int tipoFunc =this->getTipoUltimaFunc();
	if(tipoRet!=tipoFunc && !(checaConversaoImplicita(tipoRet,tipoFunc)))
	{
		string msg ="",nome="";
		this->emitirErro(ERR_WRONG_PAR_RETURN,linha,nome,msg);
	}
}
int PilhaContexto::getTipoUltimaFunc()
{
	//this->exportaTabelas();
	DadoTabelaSimbolos dado = (*(this->contextos.front().getTabela().begin())).second;
	return dado.tipo;

}
void PilhaContexto::verificaAtrib(a_nodo* nodoDst,a_nodo* nodoOrig)
{
	string nome = string(nodoDst->valor_lexico->tk_value.vStr);
	int linha = nodoDst->valor_lexico->lineno;

	if(nodoOrig->tipo_valor_semantico == ID_CHAR && nodoDst->tipo_valor_semantico != ID_CHAR )
	{
		string msg = nome;
		nome = getNomeValorLexico(nodoOrig->valor_lexico);
		this->emitirErro(ERR_CHAR_TO_X,linha,nome,msg);
	}

	if(nodoOrig->tipo_valor_semantico == ID_STRING && nodoDst->tipo_valor_semantico != ID_STRING )
	{
		string msg;
		msg = nome;
		nome = getNomeValorLexico(nodoOrig->valor_lexico);
		this->emitirErro(ERR_STRING_TO_X,linha,nome,msg);
	}

	if(nodoDst->tipo_valor_semantico!=nodoOrig->tipo_valor_semantico && !(checaConversaoImplicita(nodoOrig->tipo_valor_semantico,nodoDst->tipo_valor_semantico)))
	{
		string msg;
		msg= getNomeValorLexico(nodoOrig->valor_lexico);
		this->emitirErro(ERR_WRONG_TYPE,linha,nome,msg);
	}

	if(nodoDst->tipo_valor_semantico == ID_STRING && nodoOrig->tipo_valor_semantico == ID_STRING )
	{
		DadoTabelaSimbolos dadoDst,dadoOrig;
		dadoDst = this->retornaSimbolo(string(nodoDst->valor_lexico->tk_value.vStr));
		dadoOrig = this->retornaSimbolo(string(nodoOrig->valor_lexico->tk_value.vStr));
		if(dadoOrig.tamanho > dadoDst.tamanho)
		{
			string msg;
			msg= "exceeded maximum size of "+ to_string(dadoDst.tamanho) + " received value with size " +to_string(dadoOrig.tamanho)+".";
			this->emitirErro(ERR_STRING_MAX,linha,nome,msg);
		}
	}
}

DadoTabelaSimbolos PilhaContexto::retornaSimboloBack(string nome)
{
	MapaSimbolos mapa = this->contextos.back().getTabela();
	return mapa[nome];
}
void PilhaContexto::emitirErro(int tipoErro,int linha, string nome,string aux)
{
	DadoTabelaSimbolos declaAnterior;
	switch (tipoErro)
	{
	case ERR_DECLARED:
		cout << "Identifier " << nome << " in line " << linha << " was already declared - "; 
		declaAnterior = retornaSimboloBack(aux);
		cout << "Previous declaration was at line " << declaAnterior.linha << "." << endl;
		break;
	case ERR_FUNCTION:
		cout << "Function " << nome << " was used as " << aux << " in line " << linha << "."<<endl;
		break;
	case ERR_VECTOR:
		cout << "Vector " << nome << " was used as " << aux << " in line " << linha << "." << endl;
		break;
	case ERR_VARIABLE:
		cout << "Variable " << nome << " was used as " << aux << " in line " << linha << "."<<endl;
		break;
	case ERR_EXCESS_ARGS:
		cout << "Exceeded number of arguments to function call " << nome <<" in line "<< linha <<". " << aux << endl;
		break;
	case ERR_MISSING_ARGS:
		cout << "Missing arguments to function call " << nome <<" in line "<< linha <<". " <<aux << endl;
		break;
	case ERR_WRONG_TYPE_ARGS:
		cout << "Function " << nome <<" in line " << linha<< " " << aux << endl;
		break;
	case ERR_FUNCTION_STRING:
		cout << "Function " << nome <<" in line " << linha << " " << aux << endl;
		break;
	case ERR_UNDECLARED:
		cout << "Identifier " << nome << " in line " << linha << " was not declared before use" << endl;
		break; 
	case ERR_STRING_TO_X:
		cout << "Tried to make illegal conversion of string " << nome << " to symbol " << aux<<" in line "<< linha  << "." << endl;
		break;
	case ERR_CHAR_TO_X:
		cout << "Tried to make illegal conversion of char " << nome << " to symbol " << aux <<" in line "<< linha <<"." << endl;
		break;
	case ERR_WRONG_TYPE:
		cout << "Tried to make illegal conversion of " << nome << " to symbol "<< aux <<" in line "<< linha << "." << endl;
		break;
	case ERR_STRING_MAX:
		cout << "Assignment of string " << nome << " in line " << linha << " " << aux << "." << endl;
		break;
	case ERR_WRONG_PAR_INPUT:
		cout << "Used symbol of invalid type for input in line " << linha << " expected type INT or FLOAT." << endl;
		break;
	case ERR_WRONG_PAR_OUTPUT:
		cout << "Used symbol of invalid type for output in line " << linha << " expected type INT or FLOAT." << endl;
		break;
	case ERR_WRONG_PAR_SHIFT:
		cout << "Value " << aux << " exceeded limit of 16 for shift in line " << linha << "." << endl;
		break;
	case ERR_WRONG_PAR_RETURN:
		cout << "Return value at line " << linha << " does not implicitly match function type declaration."<< endl;
		break;
	case ERR_STRING_VECTOR:
		cout << "Declaring Vector " << nome << " with illegal type STRING in line " << linha << ".";
		break;	
	default:
		break;
	}

	exit(tipoErro);
}

