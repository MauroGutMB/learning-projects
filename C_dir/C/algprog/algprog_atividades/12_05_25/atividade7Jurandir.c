// Ler um vetor de 10 elementos. Crie um segundo vetor, com todos os elementos na ordem inversa, ou seja, o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. Imprima os dois vetores.

#include <stdio.h>

int main(){


  int numeros[10];
  int numReverso[10];
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);

  for(int i = 0; i < tamanho; i++){
    printf("insira o valor n°%i --> ", i + 1);
    scanf("%i", &numeros[i]);
  }

  int rev = 0;
  for(int i = tamanho - 1; i >= 0; i--){
    numReverso[rev] = numeros[i];
    rev++;
  }

  printf("\nVetor normal: ");
  for(int i = 0; i < tamanho; i++){
    printf("%i ", numeros[i]);
  }
  printf("\nVetor Inverso: ");
  for(int i = 0; i < tamanho; i++){
    printf("%i ", numReverso[i]);
  }

  return 0;
}
