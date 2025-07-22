/*
3)     Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.
*/

#include <stdio.h>

int main(){
  
  int n = 3;
  int matriz[n][n];
  int produto = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("Elemento [%i][%i] --> ", i, j);
      scanf("%i", &matriz[i][j]);
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(j > i){
        produto += matriz[i][j];
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
