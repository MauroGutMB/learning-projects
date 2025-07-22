/*
5)     Faça um programa que verifique se uma palavra digitada pelo usuário é um palíndromo.
*/

#include <stdio.h>
#include <string.h>

int main(){

  char palavra[40];
  int tamanho = 0;
  int palindromo = 0;

  printf("Insira uma palavra --> ");
  fgets(palavra, 40, stdin);

  palavra[strlen(palavra) - 1] = '\0';

  tamanho = strlen(palavra);
  int tamMetade = tamanho / 2;

  for(int i = 0; i < tamanho; i++){
    char comp1 = i;
    char comp2 = tamanho-1-i;

    if(palavra[comp1] == palavra[comp2] && i != tamanho - tamMetade - 1){
      palindromo = 1;
    } else {
    palindromo = 0;
    }
  }

  if(palindromo == 1){
    printf("'%s' É palíndroma.", palavra);
  } else{
    printf("'%s' Não é palíndroma.", palavra);
  }

  return 0;
}
