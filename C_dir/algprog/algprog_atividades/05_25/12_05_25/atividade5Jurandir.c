//  Preencher um vetor com os numeros 10 a 20, e depois mostrar os elementos pares do vetor de trás prá frente 

#include <stdio.h>

int main(){

  int numeros[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);

  printf("Números pares de trás pra frente: ");
  for(int i = tamanho - 1; i >= 0; i--){
    if(numeros[i] % 2 == 0){
      printf("%i ", numeros[i]);
    }
  }

  return 0;
}
