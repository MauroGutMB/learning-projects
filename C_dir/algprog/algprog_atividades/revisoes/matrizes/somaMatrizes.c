#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatrizInt(int n, int m, int matriz[n][m]);
void mostrarMatrizInt(int n, int m, int matriz[n][m]);
void somarMatrizes(int n, int m, int matriz1[n][m], int matriz2[n][m], int matrizResultado[n][m]);

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
  preencherMatrizInt(n, m, matriz);
  mostrarMatrizInt(n, m, matriz);
  printf("\n\n");

  printf("Matriz 2:\n");
  preencherMatrizInt(n, m, matrizSup);
  mostrarMatrizInt(n, m, matrizSup);
  printf("\n\n");

  printf("Matriz resultado:\n");
  somarMatrizes(n, m, matriz, matrizSup, matrizResultado);
  mostrarMatrizInt(n, m, matrizResultado);

  return 0;
}

void preencherMatrizInt(int n, int m, int matriz[n][m]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      int rand_num =  (rand() % 100) + 1;
      matriz[i][j] = rand_num;
    }
  }
}

void mostrarMatrizInt(int n, int m, int matriz[n][m]){
  for(int i = 0; i < n; i++){
    printf("[");
    for(int j = 0; j < m; j++){
      printf("%3i", matriz[i][j]);
      if(j < m - 1){
        printf(", ");
      }
    }
    printf("]");
    printf("\n");
  }
}

void somarMatrizes(int n, int m, int matriz1[n][m], int matriz2[n][m], int matrizResultado[n][m]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }
}
