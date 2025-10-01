/*
2) Faça um programa que leia 5 números inteiros e armazene-os em um vetor. Depois, use ponteiros para calcular e imprimir a soma deles.
*/

#include <stdio.h>

int main(){

  int v[5];
  int *pv = v;
  int soma = 0;

  for(int i = 0; i < 5; i++){
    scanf("%i", &v[i]);
  }

  for(int i = 0; i < 5; i++){
    soma += *pv;
    pv++;
  }

  printf("%i", soma);

  return 0;
}
