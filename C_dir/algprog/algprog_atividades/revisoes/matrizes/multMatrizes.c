#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int n, int m, int matriz[n][m]);
void mostrarMatriz(int n, int m, int matriz[n][m]);
void multiplicarMatrizes(int n, int m, int matriz1[n][m], int matriz2[n][m], int matrizResultado[n][m]);

int main(){

  srand(time(NULL));
  int n, m;

  printf("Valor de Linhas --> ");
  scanf("%i", &n);
  printf("Valor de Colunas --> ");
  scanf("%i", &m);

  int matriz[n][m]; 
  int matrizSup[n][m]; 
  int matrizResultado[n][m]; 

  printf("\nMatriz 1:\n");
  preencherMatriz(n, m, matriz);
  mostrarMatriz(n, m, matriz);
  printf("\n\n");

  printf("Matriz 2:\n");
  preencherMatriz(n, m, matrizSup);
  mostrarMatriz(n, m, matrizSup);
  printf("\n\n");

  printf("Matriz resultado:\n");
  multiplicarMatrizes(n, m, matriz, matrizSup, matrizResultado);
  mostrarMatriz(n, m, matrizResultado);

  return 0;
}

void preencherMatriz(int n, int m, int matriz[n][m]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      int rand_num =  (rand() % 100) + 1;
      matriz[i][j] = rand_num;
    }
  }
}

void mostrarMatriz(int n, int m, int matriz[n][m]){
  for(int i = 0; i < n; i++){
    printf("[");
    for(int j = 0; j < m; j++){
      printf("%4i", matriz[i][j]);
      if(j < m - 1){
        printf(", ");
      }
    }
    printf("]");
    printf("\n");
  }
}

void multiplicarMatrizes(int n, int m, int matriz1[n][m], int matriz2[n][m], int matrizResultado[n][m]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      matrizResultado[i][j] = matriz1[i][j] * matriz2[i][j];
    }
  }
}
