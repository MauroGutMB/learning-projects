/*
Desenvolva um algoritmo que receba os valores de uma matriz de ordem 3x3 de números inteiros 
e exiba os elementos de sua diagonal principal. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarMatrizInt(int n, int m, int matriz[n][m]);
void preencherMatrizInt(int n, int m, int matriz[n][m]);

int main(){

  srand(time(NULL));

  int matriz[3][3];

  preencherMatrizInt(3, 3, matriz);

  mostrarMatrizInt(3, 3, matriz);

  return 0;
}

void mostrarMatrizInt(int n, int m, int matriz[n][m]){
  for(int i = 0; i < n; i++){
    printf("[");
    for(int j = 0; j < m; j++){
      if(matriz[i][j] == 0){
        printf("  ");
      } else{
        printf("%2i", matriz[i][j]);
      }
      if(j < m - 1){
        printf(" ");
      }
    }
    printf("]");
    printf("\n");
  }
}

void preencherMatrizInt(int n, int m, int matriz[n][m]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      int rand_num =  (rand() % 99) + 1;
      if(i == j){
        matriz[i][j] = rand_num;
      } else{
        matriz[i][j] = 0;
      }
    }
  }
}
