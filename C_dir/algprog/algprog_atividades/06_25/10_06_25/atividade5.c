/*
Faca uma matriz de tamanho 3x3. Em seguida, imprima a soma dos valores contidos em sua diagonal secundaria
*/

#include "matvec.h"
#include <stdio.h>

int main(){


  int matriz[3][3];
  int soma = 0;

  preencherMatrizInt(3, 3, matriz, 1, 100);

  mostrarMatrizInt(3, 3, matriz);

  int d1 = 0;
  int d2 = 2;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(i == d1 && j == d2){
        soma += matriz[d1][d2];
      }
    }
    d2--;
    d1++;
  }

  printf("\n\nSoma da diagonal secundaria: %i\n", soma);

  return 0;
}
