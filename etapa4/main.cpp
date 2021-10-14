/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
/*
  Função principal para realização da E3.
  Não modifique este arquivo.
*/
#include <stdio.h>
#include <iostream>

#include "pilhaContexto.hpp"
extern "C" int yyparse(void);
extern "C" int yylex_destroy(void);

void *arvore = NULL;
PilhaContexto tabelas;

int main (int argc, char **argv)
{
  int ret = yyparse(); 
  exporta ((a_nodo*)arvore);
  libera((a_nodo*)arvore);
  arvore = NULL;
  yylex_destroy();
  cout << "exportando tabelas" << endl;
  tabelas.exportaTabelas();
  return ret;
}