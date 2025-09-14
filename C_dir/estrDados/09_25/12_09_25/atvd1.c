/*
 1) Escreva um programa que declare uma variável inteira, um ponteiro para inteiro, atribua o endereço da variável ao ponteiro e imprima:
     a) O valor da variável.
     b) O endereço da variável.
     c) O valor armazenado no ponteiro.
*/

#include <stdio.h>

void informacoes(int *p){

  printf("%p\n", &*p);
  printf("%p\n", &p);
  printf("%i\n", *p);

}

int main(){

  int valor = 10;
  int *pValor = &valor;

  informacoes(pValor);

  return 0;
}
