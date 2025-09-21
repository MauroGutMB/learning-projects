/*
3) Crie uma função que troque o valor de duas variáveis inteiras usando ponteiros.
*/

#include <stdio.h>

void alt(int *p1, int *p2){
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

int main(){

  int x = 20;
  int y = 30;

  printf("%i, %i\n", x, y);

  alt(&x, &y);

  printf("%i, %i", x, y);

  return 0;
}
