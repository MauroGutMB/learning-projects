/*
Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A
(Progressão Aritmética), armazenando esses valores em um vetor de tamanho 10.
*/

#include <stdio.h>

int main(){

  int razao;
  int vetor[10];
  
  printf("Defina o valor inicial da P.A --> ");
  scanf("%i", &vetor[0]);

  printf("Defina uma razão para a P.A --> ");
  scanf("%i", &razao);

  int incremento = vetor[0];

  for(int i = 1; i < 10; i++){
    vetor[i] = incremento + razao;
    incremento = incremento + razao;
  }

  for(int i = 0; i < 10; i++){
    printf("%i ", vetor[i]);
  }

  return 0;
}
