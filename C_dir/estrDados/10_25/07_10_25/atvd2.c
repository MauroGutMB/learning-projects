/*
 * 2) Implemente uma função que receba como parãmetro um vetor de números inteiros de tamanho 'n' e inverta
 * a ordem dos elementos armazenados nesse vetor. A função deve obedecer ao protótipo:
 *    void inverte(int n, int *vet);
 */

#include <stdio.h>
#include <stdlib.h>

void inverte(int n, int *vet){
  for(int i = 0; i < n/2; i++){
    int temp = *(vet+(n-i-1));
    int temp2 = *(vet+(i));

    *(vet+i) = temp;
    *(vet+(n-i-1)) = temp2;
  }
}

int main(){

  int *vetor;
  int tamanho;

  scanf("%i", &tamanho);

  vetor = (int*) malloc(tamanho * sizeof(int));

  for(int i = 0; i < tamanho; i++){
    scanf("%i", (vetor+i));
  }

  inverte(tamanho, vetor);

  for(int i = 0; i < tamanho; i++){
    printf("%i", *(vetor+i));
    if(i < tamanho - 1){
      printf(", ");
    }
  }

  free(vetor);

  return 0;
}
