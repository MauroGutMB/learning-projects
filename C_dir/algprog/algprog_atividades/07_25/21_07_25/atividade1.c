/*
1)     Desenvolva um algoritmo que receba os valores de uma matriz de ordem 3x3 de números inteiros e
exiba o produto dos elementos de sua diagonal principal.
*/

#include <stdio.h>

int main(){

  int n = 3;
  int matriz[n][n];
  int produto = 1;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("Elemento [%i][%i] --> ", i, j);
      scanf("%i", &matriz[i][j]);
    }
  }


  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == j){
        produto *= matriz[i][j];
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%2i ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\nProduto -> %i", produto);

  return 0;
}
