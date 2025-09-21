#include <stdio.h>

void soma_prod(int *p1, int *p2);

int main(){

  int v1;
  int v2;

  printf("Valor 1 -> ");
  scanf("%i", &v1);

  printf("Valor 2 -> ");
  scanf("%i", &v2);

  printf("\n\nSoma: %i\nProd.:%i\n", v1, v2);

  soma_prod(&v1, &v2);

  printf("Valor 1 -> %i\n", v1);
  printf("Valor 2 -> %i\n", v2);

  return 0;
}

void soma_prod(int *p1, int *p2){
  int temp = *p1;
  *p1 = *p1 + *p2;
  *p2 = temp * *p2;
}
