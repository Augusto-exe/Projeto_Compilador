/* Grupo C -Augusto Exenberger Becker e Vitória Lentz */
/*
  Função principal para realização da E3.
  Não modifique este arquivo.
*/
#include <stdio.h>
#include "arvore.h"
#include "pilhaContexto.hpp"
extern int yyparse(void);
extern int yylex_destroy(void);

void *arvore = NULL;
PilhaContexto tabelas;

int main (int argc, char **argv)
{
  int ret = yyparse(); 
  exporta (arvore);
  libera(arvore);
  arvore = NULL;
  yylex_destroy();
  return ret;
}