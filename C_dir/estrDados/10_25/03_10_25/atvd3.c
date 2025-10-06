/*
3.    Alocar vetor de n doubles, calcular média.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  double n, soma = 0;
  double *vetor;

  printf("Insira a quantidade de N -> ");
  scanf("%lf", &n);

  vetor = (double*) malloc(n * sizeof(double));

  for(int i = 0; i < n; i++){
    printf("Insira o elemento N-%i -> ", i+1);
    scanf("%lf", (vetor+i));
    soma += *(vetor+i);
  }

  printf("\n\nVetor de double:\n");
  for(int i = 0; i < n; i++){
    printf("%.2lf\n", *(vetor+i));
  }
  printf("\nMédia dos números -> %.2lf", soma/n);

  free(vetor);

  return 0;
}
