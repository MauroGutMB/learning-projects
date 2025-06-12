/*
 Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.
*/

#include <stdio.h>
#include "matvec.h"

int main(){

  int matriz[3][3];
  int soma = 0;

  preencherMatrizInt(3, 3, matriz, 1, 99);
  mostrarMatrizInt(3, 3, matriz);

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(i > j){
        soma += matriz[i][j];
      }
    }
  }

  printf("\nSoma dos elementos abaixo da diagonal principal: %i\n", soma);

  return 0;
}
