#include <stdio.h>
#include <stdlib.h>
#include "dlk.h"

int main(){

  dlk* p = criar_dlk(5);

  p = inserir_no(p, 10);
  p = inserir_no(p, 15);

  imprimir_dlk(p);
  printf("\n");
  imprimir_reverso_dlk(p);

  dlk_liberar(p);


  return 0;
}
