#include <stdio.h>

int main(){

  int numero;
  int fatorial = 1;

  printf("Digite um número --> ");
  scanf("%i", &numero);
  while(getchar() != '\n'){}

  for (int i = numero; i > 0; i--){
    fatorial = fatorial * i;
  }

  printf("O fatorial de %i é %i", numero, fatorial);

}
