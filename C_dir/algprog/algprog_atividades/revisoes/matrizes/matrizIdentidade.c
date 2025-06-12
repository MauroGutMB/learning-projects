#include <stdio.h>

void mostrarMatrizInt(int n, int m, int matriz[n][m]);

int main(){

  int n;

  printf("N --> ");
  scanf("%i", &n);

  int matriz[n][n];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == j){
        matriz[i][j] = 1;
      } else{
        matriz[i][j] = 0;
      }
    }
  }

  mostrarMatrizInt(n, n, matriz);

  return 0;
}

void mostrarMatrizInt(int n, int m, int matriz[n][m]){
  for(int i = 0; i < n; i++){
    printf("[");
    for(int j = 0; j < m; j++){
      printf("%i", matriz[i][j]);
      if(j < m - 1){
        printf(", ");
      }
    }
    printf("]");
    printf("\n");
  }
}
