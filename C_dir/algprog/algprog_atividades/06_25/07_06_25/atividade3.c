/*
  Preencha e imprima um vetor dos 20 primeiros números primos começando com o número 5000.
*/

#include <stdio.h>

void mostrarVetor(int arr[], int size);

int main(){

  int vetorPrimos[20];
  int valor = 5000;
  int contador = 0;

  while(contador < 20){
    int primo = 1;
    for(int div = 2; div < valor; div++){
      if(valor % div == 0){
        primo = 0;
        break;  
      }
    }
    if(primo){
      vetorPrimos[contador] = valor;
      contador++;
    }
    valor++;
  }

  mostrarVetor(vetorPrimos, 20);

  return 0;
}

void mostrarVetor(int arr[], int size){
  printf("[");
  for(int i = 0; i < size; i++){
    printf("%i", arr[i]);
    if(i < size - 1){
      printf(", ");
    }
  }
  printf("]\n");
}
