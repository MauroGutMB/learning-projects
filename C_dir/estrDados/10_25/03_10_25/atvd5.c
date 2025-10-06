/*
5.    Dado o vetor v de tamanho n, criar novo vetor 2n, copiar o vetor antigo e  liberá-lo.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

  int *vetor1;
  int s1;

  printf("Insira o tamanho do vetor 1 -> ");
  scanf("%i", &s1);

  vetor1 = (int*) malloc(s1 * sizeof(int));

  for(int i = 0; i < s1; i++){
    printf("Valor %i -> ", i+1);
    scanf("%i", (vetor1+i));
  }

  int *vetor2;
  int s2 = s1*2;

  vetor2 = (int*) malloc(s2 * sizeof(int));

  for(int i = 0; i < s1; i++){
    *(vetor2+i) = *(vetor1+i);
  }

  int count = 0;
  for(int i = s1; i < s2; i++){
    *(vetor2+i) = *(vetor1+count);
    count++;
  }


  printf("\nO vetor copiado:\n");
  for(int i = 0; i < s2; i++){
    printf("%i\n", *(vetor2+i));
  }

  free(vetor1);
  free(vetor2);

  return 0;
}
