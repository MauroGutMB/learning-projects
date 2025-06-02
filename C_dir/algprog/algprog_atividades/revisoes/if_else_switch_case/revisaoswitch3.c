#include <stdio.h>

// Calculadora usando Switch case

int main(){

  int numero1, numero2, operacao;
  char operador;

  printf("Digite o primeiro número: ");
  scanf("%d", &numero1);

  printf("Digite o segundo número: ");
  scanf("%d", &numero2);

  printf("Qual operação você deseja fazer entre %d e %d?\n", numero1, numero2);
  printf("('+' Para soma, '-' Para subtração, '*' Para multiplicação, '/' Para divisão): ");
  scanf(" %c", &operador);

  switch (operador){
    case '+':
      operacao = numero1 + numero2;
      printf("%d %c %d = %d", numero1, operador, numero2, operacao);
      break;
    case '-':
      operacao = numero1 - numero2;
      printf("%d %c %d = %d", numero1, operador, numero2, operacao);
      break;
    case '*':
      operacao = numero1 * numero2;
      printf("%d %c %d = %d", numero1, operador, numero2, operacao);
      break;
    case '/':
      operacao = numero1 / numero2;
      printf("%d %c %d = %d", numero1, operador, numero2, operacao);
      break;
    default:
      printf("A operação não pôde ser realizada.");
  }

}
