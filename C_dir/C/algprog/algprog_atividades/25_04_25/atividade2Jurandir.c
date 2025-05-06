#include <stdio.h>

int main(){

  int num, num_inicial, potencia;

  printf("Digite o valor do número --> ");
  scanf("%i", &num);

  num_inicial = num;

  printf("Digite o valor do expoente --> ");
  scanf("%i", &potencia);

  for(int exp = 1; exp < potencia; exp++){
    num *= num_inicial;
  }

  printf("O resultado de %i^%i é igual a %i ", num_inicial, potencia, num);

}
