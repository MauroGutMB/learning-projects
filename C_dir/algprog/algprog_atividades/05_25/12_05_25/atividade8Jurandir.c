// Ler um vetor de 10 elementos inteiros e positivos. Criar um segundo vetor da seguinte forma:
// os elementos de índice par receberão os respectivos elementos divididos por 2; os elementos de índice ímpar receberão os respectivos elementos
// multiplicados por 3. Imprima os dois vetores.

#include <stdio.h>

int main(){

  float nums[10];
  int tamanho = sizeof(nums) / sizeof(nums[0]);

  for(int i = 0; i < tamanho; i++){
    printf("Elemento n° %i --> ", i + 1);
    scanf("%f", &nums[i]);
  }

  printf("\n\n");

  for(int i = 0; i < tamanho; i++){
    printf("Indice %i --> %.1f\n", i, nums[i]);
  }

  printf("---------------------\n");

  for(int i = 0; i < tamanho; i++){
    if(i % 2 == 0){
      nums[i] /= 2;
    }
    if(i % 2 == 1){
      nums[i] *= 3;
    }
  }

  for(int i = 0; i < tamanho; i++){
    printf("Indice %i --> %.1f\n", i, nums[i]);
  }

  return 0;
}
