/*
Escreva um algoritmo que leia uma matriz M(5x5) e crie dois vetores que contenham respectivamente 
as somas das linhas e das colunas de M. Escreva a matriz e os vetores criados.
*/

#include <stdio.h>
#include "matvec.h"

int main(){

  int matriz[5][5];
  int vetC[5] = {0, 0, 0, 0, 0};
  int vetL[5];

  // for(int i = 0; i < 5; i++){
  //   for(int j = 0; j < 5; j++){
  //     int valor;
  //     printf("Insira o valor de M(%ix%i) --> ", i+1, j+1);
  //     scanf("%i", &valor);
  //     matriz[i][j] = valor;
  //   }
  // }

  preencherMatrizInt(5, 5, matriz, 1, 10);

  for(int i = 0; i < 5; i++){
    int somaL = 0;
    for(int j = 0; j < 5; j++){
      somaL += matriz[i][j];
    }
    vetL[i] = somaL;
  }

  for(int i = 0; i < 5; i++){
    int col = 0;
    for(int j = 0; j < 5; j++){
      vetC[col] += matriz[i][j];
      col++;
    }
  }

  printf("Matriz:");
  mostrarMatrizInt(5, 5, matriz);

  printf("\nSoma das linhas:\n");
  for(int i = 0; i < 5; i++){
    printf("[");
    printf("%2i", vetL[i]);
    printf("]\n");
  }

  printf("\nSoma das colunas:");
  mostrarVetorInt(5, vetC);

  return 0;
}
