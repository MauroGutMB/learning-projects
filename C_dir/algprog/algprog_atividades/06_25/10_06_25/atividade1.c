/*
Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for,
multiplicando cada elemento por 5 e imprime o resultado.
*/

#include <stdio.h>

void mostrarMatrizInt(int n, int m, int matriz[n][m]);

int main(){

  int matriz[3][3];

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      int num;
      printf("Elemento [%i][%i] --> ", i, j);
      scanf("%i", &num);
      matriz[i][j] = num * 5;
    }
  }

  mostrarMatrizInt(3, 3, matriz);

  return 0;
}

void mostrarMatrizInt(int n, int m, int matriz[n][m]){
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
