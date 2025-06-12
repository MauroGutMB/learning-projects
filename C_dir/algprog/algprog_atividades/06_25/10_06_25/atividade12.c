/*
Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta. 
Uma matriz transposta é obtida de uma matriz original trocando suas linhas por colunas.
*/

#include <stdio.h>
#include "matvec.h"

int main(){

  int n;
  int m;

  printf("Linhas --> ");
  scanf("%i", &n);
  printf("Colunas --> ");
  scanf("%i", &m);

  int matriz[n][m];

  preencherMatrizInt(n, m, matriz, 1, 99);

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

  printf("\n");

  for(int i = 0; i < m; i++){
    printf("[");
    for(int j = 0; j < n; j++){
      printf("%2i", matriz[j][i]);
      if(j < n - 1){
        printf(", ");
      }
    }
    printf("]");
    printf("\n");
  }

  return 0;
}
