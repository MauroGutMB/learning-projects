/*
2. Dado um número inteiro, implemente uma função recursiva que calcule a soma de seus dígitos.
Exemplo: 1234 → 1+2+3+4 = 10.
*/

#include <stdio.h>
int somaDigitos(int num){

  if(num < 10){
    return num;
  } 

  num = (num % 10) + somaDigitos(num / 10);

  return num;
}

int main(){

  printf("%i\n", somaDigitos(1129));
  return 0;

}
