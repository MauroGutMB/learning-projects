/*
 Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.
*/

#include <stdio.h>

typedef struct{
  int idade;
  char nome[100];
  char endereco[100];
}Pessoa;

int main(){

  int n = 3;

  Pessoa pessoas[n];

  for(int i = 0; i < n; i++){
    printf("p%i nome --> ", i+1);
    scanf("%s", pessoas[i].nome);

    printf("p%i endereço --> ", i+1);
    scanf("%s", pessoas[i].endereco);

    printf("p%i idade --> ", i+1);
    scanf("%i", &pessoas[i].idade);
  }

  printf("\nNomes: ");
  for(int i = 0; i < n; i++){
    printf("%s. ", pessoas[i].nome);
  }

  printf("\nEndereçõs: ");
  for(int i = 0; i < n; i++){
    printf("%s. ", pessoas[i].endereco);
  }

  printf("\nIdades: ");
  for(int i = 0; i < n; i++){
    printf("%i. ", pessoas[i].idade);
  }


  return 0;
}
