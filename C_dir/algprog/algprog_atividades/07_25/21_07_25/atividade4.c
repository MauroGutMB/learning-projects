/*
4)     Faça um programa que leia um nome e imprima as 4 últimas letras do nome.
*/

#include <stdio.h>
#include <string.h>

int main(){

  char nome[40];
  int tamanho = 0;
  int letras = 4;

  printf("Insira um nome --> ");
  fgets(nome, 40, stdin);

  nome[strlen(nome) - 1] = '\0';
  
  tamanho = strlen(nome);

  while(letras > 0){
    printf("%c", nome[tamanho-letras]);
    letras--;
  }

  return 0;
}
