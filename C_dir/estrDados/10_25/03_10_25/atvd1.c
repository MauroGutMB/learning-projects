/*
1.     Leia n, aloque um vetor de int de tamanho n, leia os valores e imprima-os.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int n;
  int *vetor;

  printf("Insira a quantidade de N -> ");
  scanf("%i", &n);

  vetor = (int*) malloc(n * sizeof(int));

  for(int i = 0; i < n; i++){
    printf("Insira o elemento N-%i -> ", i+1);
    scanf("%i", (vetor+i));
  }

  printf("\n\nVetor de inteiros:\n");
  for(int i = 0; i < n; i++){
    printf("%i\n", *(vetor+i));
  }

  free(vetor);

  return 0;
}
