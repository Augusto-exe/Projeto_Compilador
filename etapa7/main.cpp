/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
/*
  Função principal para realização da E3.
  Não modifique este arquivo.
*/
#include <stdio.h>
#include <iostream>
#include <string>

#include "pilhaContexto.hpp"
extern "C" int yyparse(void);
extern "C" int yylex_destroy(void);

void *arvore = NULL;
PilhaContexto tabelas;
using namespace std;

int main (int argc, char **argv)
{
  int ret = yyparse();
  //exporta ((a_nodo*)arvore);
  
  if(ret ==0)
  {
      //((a_nodo*)arvore)->cod.exportaCod();
      //cout << endl << endl;
      if(string(argv[1]) == "-O")
        cout <<"otimizando" << endl;
      generateAsm(((a_nodo*)arvore)->cod.getCodigo(),tabelas.getContexto());
      
  }

  libera((a_nodo*)arvore);
  arvore = NULL;
  yylex_destroy();
  //cout << "exportando tabelas" << endl;
  //tabelas.exportaTabelas();
  return ret;
}