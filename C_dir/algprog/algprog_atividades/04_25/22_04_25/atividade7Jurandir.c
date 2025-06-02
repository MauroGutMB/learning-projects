#include <stdio.h>

int main(){

  int numero;
  long long fatorial = 1;

  printf("Digite um número --> ");
  scanf("%i", &numero);

  for (int i = numero; i > 0; i--){
    fatorial = fatorial * i;
  }

  printf("O fatorial de %i é %lli", numero, fatorial);

}
