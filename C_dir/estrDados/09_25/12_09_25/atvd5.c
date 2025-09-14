/*
5) Crie uma função que receba um ponteiro para inteiro e multiplique o valor por 2.
*/

#include <stdio.h>

void mult(int *p){
  *p *= 2;
}

int main(){

  int x = 15;
  int *px = &x;

  printf("Valor de x pré-duplicado => %i\n", *px);

  mult(px);

  printf("Valor de x pós-duplicado => %i\n", *px);

  return 0;
}
