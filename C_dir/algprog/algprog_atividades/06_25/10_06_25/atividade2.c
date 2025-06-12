/* 
Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos.
Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.
*/

#include <stdio.h>

void mostrarMatriz(int n, int m, int matriz[n][m]);

int main(){

  int matriz[3][3];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      int num;
      printf("Elemento [%i][%i] --> ", i, j);
      scanf("%i", &num);
      matriz[i][j] = num * (j + 1);
    }
  }

  mostrarMatriz(3, 3, matriz);

  return 0;
}

void mostrarMatriz(int n, int m, int matriz[n][m]){
  for(int i = 0; i < n; i++){
    printf("[");
    for(int j = 0; j < m; j++){
      printf("%2i", matriz[i][j]);
      if(j < m - 1){
        printf(", ");
      }
    }
    printf("]");
    printf("\n");
  }
}
