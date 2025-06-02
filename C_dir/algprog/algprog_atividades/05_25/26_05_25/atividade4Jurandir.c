/*
Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A
(Progressão Aritmética), armazenando esses valores em um vetor de tamanho 10.
*/

#include <stdio.h>

int main(){

  float razao;
  float vetor[10];
  
  printf("Defina o valor inicial da P.A --> ");
  scanf("%f", &vetor[0]);

  printf("Defina uma razão para a P.A --> ");
  scanf("%f", &razao);

  float incremento = vetor[0];

  for(int i = 1; i < 10; i++){
    vetor[i] = incremento + razao;
    incremento = incremento + razao;
  }

  for(int i = 0; i < 10; i++){
    printf("%.2f ", vetor[i]);
  }

  return 0;
}
