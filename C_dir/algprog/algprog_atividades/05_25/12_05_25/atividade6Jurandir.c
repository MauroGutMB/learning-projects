// Preencher um vetor com os numeros 10 a 20, e depois mostrar os elementos ímpares do vetor. 

#include <stdio.h>

int main(){

  int numeros[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);

  printf("Números ímpares: ");
  for(int i = 0; i <= tamanho; i++){
    if(numeros[i] % 2 == 1){
      printf("%i ", numeros[i]);
    }
  }

  return 0;
}
