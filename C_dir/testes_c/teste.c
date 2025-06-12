#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void preencherMatrizInt(int n, int m, int matriz[n][m], int min, int max);
void mostrarMatrizInt(int n, int m, int matriz[n][m]);

int main(){

  srand(time(NULL));

  int matriz1[5][5];
  int matriz2[5][5];
  int matriz3[5][5];

  preencherMatrizInt(5, 5, matriz1, 1, 10);
  mostrarMatrizInt(5, 5, matriz1);
  printf("\n");
  preencherMatrizInt(5, 5, matriz2, 1, 10);
  mostrarMatrizInt(5, 5, matriz2);
  printf("\n");
  preencherMatrizInt(5, 5, matriz3, 1, 10);
  mostrarMatrizInt(5, 5, matriz3);

  return 0;
}

void preencherMatrizInt(int n, int m, int matriz[n][m], int min, int max){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      int rand_num =  (rand() % (max - min + 1)) + min;
      matriz[i][j] = rand_num;
    }
  }
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
