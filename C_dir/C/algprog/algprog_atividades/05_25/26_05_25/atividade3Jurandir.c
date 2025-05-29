/*
Faça um programa que recebe a altura de um triangulo em um número inteiro e imprima-o utilizando asteriscos.
*/

#include <stdio.h>

int main(){

  int lado;

  printf("Insira o tamanho do lado do quadrado --> ");
  scanf("%i", &lado);

  for(int i = 1; i <= lado; i++){

    // for(int j = 1; j <= lado - i; j++){
    //   printf(" ");
    // }

    for(int j = 1; j <= lado; j++){

      if(i >= j){
        printf("* ");
      }
    }
    printf("\n");
  }

  return 0;
}
