/*
6.    Ler vetor e criar outro apenas com os números ímpares.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int *vetor;
  int tamanho;

  printf("Defina um tamanho para o vetor -> ");
  scanf("%i", &tamanho);

  vetor = (int*) malloc(tamanho * sizeof(int));

  int nImpares = 0;

  for(int i = 0; i < tamanho; i++){
    printf("Elemento %i => ", i+1);
    scanf("%i", (vetor+i));
    if(*(vetor+i) % 2 == 1){
      nImpares++;
    }
  }

  printf("\nMostrar vetor:\n");
  for(int i = 0; i < tamanho; i++){
    printf("Elemento %i = %i\n", i+1, *(vetor+i));
  }

  int *vetorImpares = (int*) malloc(nImpares * sizeof(int));
  int contador = 0;
  
  for(int i = 0; i < tamanho; i++){
    if(*(vetor+i) % 2 == 1){
      *(vetorImpares + contador) = *(vetor+i);
      contador++;
    }
  }

  printf("\nMostrar vetor impar:\n");
  for(int i = 0; i < nImpares; i++){
    printf("Elemento %i = %i\n", i+1, *(vetorImpares+i));
  }

  free(vetorImpares);
  free(vetor);

  return 0;
}
