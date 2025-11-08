#include <stdio.h>
#include <stdlib.h>

int main(){

  int* x = (int*) malloc(sizeof(int));

  *x = 5;
  int z = 7;

  printf("%i, %p\n", *x, x);
  printf("%i, %p\n", z, &z);

  free(x);

  return 0;
}
