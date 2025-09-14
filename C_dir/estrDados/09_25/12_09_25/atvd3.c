/*
3) Crie uma função que troque o valor de duas variáveis inteiras usando ponteiros.
*/

#include <stdio.h>

void alt(int *p){
  *p = 15;
}

int main(){

  int x = 20;
  printf("%i\n", x);

  alt(&x);

  printf("%i", x);

  return 0;
}
