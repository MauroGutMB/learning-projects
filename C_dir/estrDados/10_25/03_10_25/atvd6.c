/*
6.    Ler vetor e criar outro apenas com os números ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

int* retornarImpares(int *v){
  //contar impares 
  return NULL;
}

int main(){

  int *vetor;
  int tamanho;

  printf("Insira o tamanho do vetor -> ");
  scanf("%i", &tamanho);

  vetor = (int*) malloc(tamanho * sizeof(int));

  for(int i = 0; i < tamanho; i++){
    printf("Elemento %i -> ", i+1);
    scanf("%i", (vetor+i));
  }

  // #TODO

  free(vetor);

  return 0;
}
