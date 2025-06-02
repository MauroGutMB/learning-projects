//  Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui. 

#include <stdio.h>

int main(){

  int numeros[10];
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);
  int pares = 0;

  for(int i = 0; i < tamanho; i++){
    printf("insira o valor n°%i --> ", i + 1);
    scanf("%i", &numeros[i]);
  }

  for(int i = 0; i < tamanho; i++){
    if(numeros[i] % 2 == 0 && numeros[i] != 0){
      printf("O número %i no index %i é par.\n", numeros[i], i);
      pares++;
    }
  }

  printf("Foram encontrados %i números pares.", pares);

  return 0;
}
