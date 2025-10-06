/*
2.     Ler n, alocar um vetor de n inteiros, ler os valores, imprimir a soma e liberar a memória.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int n, soma = 0;
  int *vetor;

  printf("Insira a quantidade de N -> ");
  scanf("%i", &n);

  vetor = (int*) malloc(n * sizeof(int));

  for(int i = 0; i < n; i++){
    printf("Insira o elemento N-%i -> ", i+1);
    scanf("%i", (vetor+i));
    soma += *(vetor+i);
  }

  printf("\n\nVetor de inteiros:\n");
  for(int i = 0; i < n; i++){
    printf("%i\n", *(vetor+i));
  }
  printf("\nSoma dos números -> %i", soma);

  free(vetor);

  return 0;
}
