/*
  Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.
*/

#include <stdio.h>
#include <string.h>

int main(){

  char string[50];

  printf("Insira o nome --> ");
  fgets(string, 50, stdin);

  string[strlen(string) - 1] = '\0';

  printf("Primeras quatro letras --> ");

  for(int i = 0; i < 4; i++){
    printf("%c", string[i]);
  }

  return 0;
}
