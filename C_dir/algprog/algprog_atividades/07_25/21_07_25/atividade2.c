/*
2)     Faça uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos em sua diagonal 
secundaria subtraído pela soma dos elementos da diagonal principal. 
*/

#include <stdio.h>

int main(){

  int n = 3;
  int matriz[n][n];
  int produtoDP = 0;
  int produtoDS = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("Elemento [%i][%i] --> ", i, j);
      scanf("%i", &matriz[i][j]);
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == j){
        produtoDP += matriz[i][j];
      }
      if(i + j == n - 1){
        produtoDS += matriz[i][j];
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%2i ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\n\nDP = %i\nDS = %i", produtoDP, produtoDS);

  return 0;
}
