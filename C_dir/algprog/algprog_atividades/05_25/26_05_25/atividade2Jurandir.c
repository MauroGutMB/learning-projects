/*
Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos.
Seu programa deve usar laços de repetição e funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
*/

#include <stdio.h>

int main(){

  int lado;

  printf("Insira o tamanho do lado do quadrado --> ");
  scanf("%i", &lado);

  if(lado < 1 || lado > 20){
    printf("Tamanho inválido.");
    return 1;
  }

  for(int i = 1; i <= lado; i++){
    for(int j = 1; j <= lado; j++){
      
      printf("* ");

    }
    printf("\n");
  }

  return 0;
}
