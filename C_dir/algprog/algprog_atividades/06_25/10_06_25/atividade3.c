/*
Faça um algoritmo que receba valores inteiros de uma matriz 5×2 e preencha um vetor 
inteiro de tamanho 10. Imprima o vetor preenchido.
*/

#include <stdio.h>

void mostrarMatrizInt(int n, int m, int matriz[n][m]);
void mostrarVetor(int n, int vetor[n]);

int main(){

  int matriz[5][2];
  int vetor[10];
  int indice = 0;

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 2; j++){
      int num;
      printf("Elemento [%i][%i] --> ", i, j);
      scanf("%i", &num);
      matriz[i][j] = num;
      vetor[indice] = num;
      indice++;
    }
  }

  printf("\nMatriz:\n");
  mostrarMatrizInt(5, 2, matriz);
  printf("\nVetor:\n");
  mostrarVetor(10, vetor);

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

void mostrarVetor(int n, int vetor[n]){
  printf("[");
  for(int i = 0; i < n; i++){
    printf("%i", vetor[i]);
    if(i < n - 1){
      printf(", ");
    }
  }
  printf("]");
}
