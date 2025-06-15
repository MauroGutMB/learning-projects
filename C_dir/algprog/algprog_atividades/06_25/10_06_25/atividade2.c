/* 
Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos.
Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.
*/

#include <stdio.h>

int main(){

  int indice_aux = 0;
  int vetor[3];
  int matriz[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};

  for(int i = 0; i < 3; i++){
    printf("elemento %i --> ", i+1);
    scanf("%i", &vetor[i]);
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      matriz[j][i] *= vetor[indice_aux];
    }
    indice_aux++;
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%2i ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
