/*
Fazer um algorítimo que leia os valores de um vetor inteiro de tamanho 10,
e imprima o valor da soma dos números ímpares presentes neste vetor.
*/

#include <stdio.h>

int main(){

  int vetor[10];
  int soma = 0;

  for(int i = 0; i < 10; i++){
    printf("Digite o valor %i --> ", i + 1);
    scanf("%i", &vetor[i]);
  }

  for(int i = 0; i < 10; i++){
    if(vetor[i] % 2 == 1){
      soma += vetor[i];
    }
  }

  printf("Soma dos ímpares do vetor: %i", soma);

  return 0;
}
