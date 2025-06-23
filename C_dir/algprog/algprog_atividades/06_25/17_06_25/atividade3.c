/*
Digite um nome, calcule e retorne quantas letras tem esse nome.
*/

#include <stdio.h>

int main(){

  char string[50];
  int tamanho = 0;

  printf("Insira o nome --> ");
  fgets(string, 50, stdin);

  while(string[tamanho] != '\0'){
    tamanho++;
  } 

  printf("%i", tamanho - 1);

  return 0;
}
