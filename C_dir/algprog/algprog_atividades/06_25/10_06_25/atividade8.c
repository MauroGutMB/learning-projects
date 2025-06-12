/*
 Faça um algoritmo para ler uma matriz 20x20. O algoritmo deve escrever na tela apenas os números primos.
 Os que não forem primos devem ser substituídos por Zero.
*/

#include <stdio.h>
#include "matvec.h"

int main(){
  
  int matriz[20][20];

  preencherMatrizInt(20, 20, matriz, 1, 99);

  printf("Matriz:");
  mostrarMatrizInt(20, 20, matriz);

  for(int i = 0; i < 20; i++){
    for(int j = 0; j < 20; j++){
      int val = matriz[i][j];
      if(val == 1 || val == 2){
        matriz[i][j] = 0;
      }
      for(int div = 2; div < val; div++){
        if(val % div == 0){
          matriz[i][j] = 0;
        }
      }
    }
  }

  printf("\nMatriz apenas com os números primos:");
  mostrarMatrizInt(20, 20, matriz);

  return 0;
}
