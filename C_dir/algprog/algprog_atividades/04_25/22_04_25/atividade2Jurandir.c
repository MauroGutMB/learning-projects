#include <stdio.h>

int main(){

  int escolhido;

  printf("Digite um número para imprimir a sua tabuada --> ");
  scanf("%i", &escolhido);

  printf("A tabuada de %i de 1 a 10 é:\n", escolhido);
  for(int i = 1; i <= 10; i++){
    printf("%i ", i * escolhido);
  }
}
