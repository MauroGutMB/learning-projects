/*
4) Escreva um programa que mostre o valor e o endereço de uma variável float usando ponteiros.
*/

#include <stdio.h>

int main(){

  float x = 10;
  float *px = &x;

  printf("Valor da variável x => %.2f\n", *px);
  printf("Endereço da variável x => %p\n", px);

  return 0;
}
