#include <stdio.h>

int main(){

  int num, soma = 0;

  printf("Digite um número --> ");
  scanf("%i", &num);

  for(int i = 1; i <= num; i++){
    soma += i;
  }

  printf("A soma de todos os números de 1 a %i é igual a %i ", num, soma);
}
