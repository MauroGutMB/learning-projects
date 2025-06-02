#include <stdio.h>

int main(){

  int vetorNums[10];
  int tam = sizeof(vetorNums) / sizeof(vetorNums[0]);
  int Npares = 0;

  for(int i = 0; i < tam; i++){

    int num;

    printf("Index[%i] --> ", i);
    scanf("%i", &num);

    vetorNums[i] = num;
  }

  for(int i = 0; i < tam; i++){
    if(vetorNums[i] % 2 == 0 && vetorNums[i] != 0){
      printf("O número %i no index %i é par.\n", vetorNums[i], i);
      Npares++;
    }
  } 

  printf("Foram encontrados %i números pares.", Npares);

}
