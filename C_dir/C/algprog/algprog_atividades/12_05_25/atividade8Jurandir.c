// Ler um vetor de 10 elementos inteiros e positivos. Criar um segundo vetor da seguinte forma: os elementos de índice par receberão os respectivos elementos divididos por 2; os elementos de índice ímpar receberão os respectivos elementos multiplicados por 3. Imprima os dois vetores.

#include <stdio.h>

int main(){

  int nums[10] = {4, 6, 8, 10, 12, 14, 16, 18, 20, 22};
  int tamanho = sizeof(nums) / sizeof(nums[0]);

  for(int i = 0; i < tamanho; i++){
    printf("Indice %i --> %i\n", i, nums[i]);
  }

  printf("---------------------\n");

  for(int i = 0; i < tamanho; i++){
    if(i % 2 == 0 && i != 0){
      nums[i] /= 2;
    }
    if(i % 2 == 1){
      nums[i] *= 3;
    }
  }

  for(int i = 0; i < tamanho; i++){
    printf("Indice %i --> %i\n", i, nums[i]);
  }

  return 0;
}
