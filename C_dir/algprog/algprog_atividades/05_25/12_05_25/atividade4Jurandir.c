// Preencher um vetor com 5 numeros e a medida que for digitado o numero, calcular o cubo e mostrar em outro vetor. Mostrar os dois vetores. 

#include <stdio.h>

int main(){

  int numeros[5];
  int cubos[5];
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);


  for(int i = 0; i < tamanho; i++){
    printf("insira o valor n°%i --> ", i + 1);
    scanf("%i", &numeros[i]);
    printf("O valor do cubo de %i é %i\n\n", numeros[i], numeros[i] * numeros[i] * numeros[i]);
  }

  for(int i = 0; i < tamanho; i++){
    cubos[i] = numeros[i] * numeros[i] * numeros[i];
  }

  printf("\nVetor dos números: ");
  for(int i = 0; i < tamanho; i++){
    printf("%i ", numeros[i]);
  }
  printf("\nVetor dos cubos: ");
  for(int i = 0; i < tamanho; i++){
    printf("%i ", cubos[i]);
  }

  return 0;
}
