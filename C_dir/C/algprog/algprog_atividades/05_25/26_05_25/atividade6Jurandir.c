/*
Como criar um programa que checa se o número é palíndromo
Número palíndromo é aquele que, se lido de trás para frente e de frete para trás, é o mesmo.
Exemplos: 2112, 777, 2442 etc
O número deve ter 4 dígitos.
*/

#include <stdio.h>

int main(){

  float valor;
  float palindromo[4];

  printf("Insira um valor de 4 digitos --> ");
  scanf("%f", &valor);

  if(valor < 1000 || valor > 9999){
    printf("Valor inválido.");
    return 1;
  }

  int digito_1 = valor / 1000;
  int digito_2 = (valor / 100) - digito_1 * 10;
  int digito_3 = (valor / 10) - (digito_1 * 100 + digito_2 * 10);
  int digito_4 = valor - (digito_1 * 1000 + digito_2 * 100 + digito_3 * 10);

  palindromo[0] = digito_1;
  palindromo[1] = digito_2;
  palindromo[2] = digito_3;
  palindromo[3] = digito_4;

  // printf("%i %i %i %i\n", digito_1, digito_2, digito_3, digito_4);

  printf("A sequência de números ");
  for(int i = 0; i < 4; i++){
    printf("%.0f", palindromo[i]);
  }

  int palind_1 = (palindromo[0] == palindromo[3]);
  int palind_2 = (palindromo[1] == palindromo[2]);

  if(palind_1 && palind_2){
    printf(" é palíndroma.");
  } else{
    printf(" não é palíndroma.");
  }

  return 0;
}
