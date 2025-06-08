/*
Dado dois números inteiros X e Y, preencha um vetor em que é armazenado os primeiro X números múltiplos de Y. 
*/

#include <stdio.h>

void mostrarVetor(int arr[], int size);

int main(){

  int x, y;

  printf("Digite o valor de X --> ");
  scanf("%i", &x);

  printf("Digite o valor de y --> ");
  scanf("%i", &y);

  int vetor[x];
  vetor[0] = y;

  for(int i = 1; i < x; i++){
    vetor[i] = vetor[i-1] + y;
  }

  mostrarVetor(vetor, x);

  return 0;
}

void mostrarVetor(int arr[], int size){
  printf("[");
  for(int i = 0; i < size; i++){
    printf("%i", arr[i]);
    if(i < size - 1){
      printf(", ");
    }
  }
  printf("]\n");
}
