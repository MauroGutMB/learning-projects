/*
 Faça um programa para criar três matrizes 3x4 de números reais, A, B e C. As matrizes A e B devem ser preenchidas 
 com valores digitados pelo usuário. O programa deve calcular a soma das matrizes A e B e armazenar o resultado na matriz C.
 Ao final, o programa deverá exibir o conteúdo de C.
*/

#include <stdio.h>
#include "matvec.h"

int main(){

  int n = 3, m = 4;
  float matriz1[n][m];
  float matriz2[n][m];
  float matriz3[n][m];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      float val;
      printf("A(%ix%i) --> ", i+1, j+1);
      scanf("%f", &val);
      matriz1[i][j] = val;
      matriz3[i][j] = val;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      float val;
      printf("B(%ix%i) --> ", i+1, j+1);
      scanf("%f", &val);
      matriz2[i][j] = val;
      matriz3[i][j] += val;
    }
  }

  printf("\nMatriz A:");
  mostrarMatrizFloat(n, m, matriz1);

  printf("\nMatriz B:");
  mostrarMatrizFloat(n, m, matriz2);

  printf("\nMatriz C:");
  mostrarMatrizFloat(n, m, matriz3);

  return 0;
}
