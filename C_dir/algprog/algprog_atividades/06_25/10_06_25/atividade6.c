/*
Faca uma matriz de tamanho 5x5. Em seguida, imprima o produto dos valores contidos em sua diagonal principal. 
*/

#include <stdio.h>
#include "matvec.h"

int main(){

  int matriz[5][5];
  int produto = 1;

  preencherMatrizInt(5, 5, matriz, 1, 10);
  mostrarMatrizInt(5, 5, matriz);

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(i == j){
        produto *= matriz[i][j];
      }
    }
  }

  printf("\nProduto da diagonal principal: %i\n", produto);

  return 0;
}
