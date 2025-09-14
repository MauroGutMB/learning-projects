/*
2) Crie um programa que use um ponteiro para alterar o valor de uma variável inteira.
*/

#include <stdio.h>

int main(){

  int var = 10;
  int *p = &var;

  *p = 15;

  printf("%i", var);

  return 0;
}
