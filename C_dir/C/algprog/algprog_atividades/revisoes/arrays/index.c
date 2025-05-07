#include <stdio.h>

int main(){

  int vetorNums[10];
  int tam = sizeof(vetorNums) / sizeof(vetorNums[0]);
  int nMaior = 0, nMenor = 0;
  int iMaior = 0, iMenor = 0;

  for(int i = 0; i < tam; i++){
    int num = 0;

    printf("vetorNums[%i] = ", i);
    scanf("%i", &num);

    if(iMenor == 0 && iMaior == 0){
      nMenor = num, nMaior = num;
    }

    vetorNums[i] = num;
  }

  for(int i = 0; i < tam; i++){
    if(vetorNums[i] <= nMenor){
      nMenor = vetorNums[i]; 
      iMenor = i;
    }
    if(vetorNums[i] >= nMaior){
      nMaior = vetorNums[i];
      iMaior = i;
    }
  }

  printf("Valores do vetor: ");
  for(int i = 0; i < tam; i++){
    printf("%i ", vetorNums[i]);
  }

  printf("\n");

  printf("Menor e maior valor: ");
  printf("%i %i", vetorNums[iMenor], vetorNums[iMaior]);

  printf("\n");

  printf("Soma dos dois valores: ");
  printf("%i", vetorNums[iMenor] + vetorNums[iMaior]);

  return 0;
}
