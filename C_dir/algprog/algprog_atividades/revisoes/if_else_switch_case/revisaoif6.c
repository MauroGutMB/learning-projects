#include <stdio.h>

// Calculadora com if-else com operadores de adição, subtração, multiplicação e divisão

int main(){

  int numero1, numero2, operacao;
  // tipo de dado novo, não vai cair na prova. (tipo char)
  char operador;

  printf("Digite o valor do primeiro número: ");
  scanf("%d", &numero1);

  printf("Digite o valor do segundo número: ");
  scanf("%d", &numero2);

  printf("Qual operação você deseja fazer entre %d e %d?\n", numero1, numero2);
  printf("('+' Para soma, '-' Para subtração, '*' Para multiplicação, '/' Para divisão): ");

  // representações com o tipo char são feitas com '%c'
  // a função scanf precisa ser ajustada para conseguir ler corretamente a entrada
  // o espaço entre a primeira aspas e o símbolo % não é por acaso
  scanf(" %c", &operador);

  if(operador == '+'){
    operacao = numero1 + numero2; 
  } else if(operador == '-'){
    operacao = numero1 - numero2;
  } else if(operador == '*'){
    operacao = numero1 * numero2;
  } else if(operador == '/' && numero2 != 0){
    operacao = numero1 / numero2;
  } else{
    printf("Operação inválida.");
    return 1;
  }

  printf("%d %c %d = %d", numero1, operador, numero2, operacao);
}
