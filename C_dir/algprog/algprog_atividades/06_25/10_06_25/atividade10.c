/*
 Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, 
 ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
*/

#include <stdio.h>
#include "matvec.h"

int main(){

  int matriz[5][5];
  int x;
  int presente = 0;

  preencherMatrizInt(5, 5, matriz, 1, 99);
  mostrarMatrizInt(5, 5, matriz);

  printf("\nBusque por um número na matriz acima --> ");
  scanf("%i", &x);

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(matriz[i][j] == x){
        printf("Valor encontrada na coordenada (%i, %i).\n", i+1, j+1);
        presente = 1;
      }
    }
  }

  if(!presente){
    printf("Número não presente na matriz.\n");
  }

  return 0;
}
