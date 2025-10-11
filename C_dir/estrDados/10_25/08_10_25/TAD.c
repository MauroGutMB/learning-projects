#include <stdio.h>
#include "lib/funcs.h"

int main(){

  Ponto *p1;
  Ponto *p2;

  p1 = criarPonto(4.5, 10);
  p2 = criarPonto(-8, 2);

  printf("%f", getX(p1));

  freePonto(p1);
  freePonto(p2);

  return 0;
}
