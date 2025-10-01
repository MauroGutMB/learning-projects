/*
3. O MDC entre dois números é o maior número que divide ambos.
Exemplo: mdc(48,18) = 6.
Implemente uma função recursiva para calcular o MDC de dois números.
*/

#include <stdio.h>

int mdcFunc(int x, int y){


  if(y == 0){
    return x;
  }

  /*
    Chamada recursiva, onde o primeiro parâmetro é o segundo número da chamada anterior e o segundo 
    parâmetro é o resto da divisão do primeiro número pelo segundo número da chamada anterior
    ciclo: mdc(48, 18) -> mdc(18, 48 % 18) -> mdc(18, 12) -> mdc(12, 18 % 12) -> mdc(12, 6) -> mdc(6, 12 % 6) -> mdc(6, 0) = 6
  */

  return mdcFunc(y, x % y);
}

int main(){

  int x, y, mdc;
  scanf("%i %i", &x, &y);
  printf("%i", mdcFunc(x, y));

  return 0;
}
