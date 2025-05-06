#include <stdio.h>

int main(){

  int vetor1[] = {24, 69, 48, 96, 8};
  int vetor2[] = {2, 3, 3, 4, 5};
  int tam = sizeof(vetor1)/sizeof(vetor1[0]);
  int produto[5];
  int prod_escal = 0;

  for(int i = 0; i < tam; i++){
    produto[i] = vetor1[i];
    printf("%3i ", vetor1[i]);
  }

  printf("\n");
  for(int i = 0; i < tam; i++){
    produto[i] *= vetor2[i]; 
    printf("%3i ", vetor2[i]);
  }

  printf("\n");
  for(int i = 0; i < tam; i++){
    printf("%3i ", produto[i]);
  }

  printf("\n");
  for(int i = 0; i < tam; i++){
    prod_escal += produto[i];
  }

  printf("\n%i", prod_escal);
  
  return 0;
}
