/*
1) Declare um vetor de inteiros com 5 elementos e use um ponteiro para imprimir todos os valores do vetor.
*/

#include <stdio.h>

int main(){

  int v[5];

  for(int i = 0; i < 5; i++){
    v[i] = i+1;
  }

  for(int i = 0; i < 5; i++){
    printf("%i ", *v+i);
  }

  return 0;
}
