#include <stdio.h>

// Verificação de um triângulo válido (A + B > C)

int main(){

  int ladoA, ladoB, ladoC;

  printf("Digite o valor do lado A: ");
  scanf("%d", &ladoA);

  printf("Digite o valor do lado B: ");
  scanf("%d", &ladoB);

  printf("Digite o valor do lado C: ");
  scanf("%d", &ladoC);

  printf("A verificação é: %d + %d > %d\n", ladoA, ladoB, ladoC);

  if(ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){
    printf("O triângulo é um triângulo válido.");
  } else{
    printf("O triângulo é um triângulo inválido.");
  }
}
