#include <stdio.h>

int main(){

  int x;
  float y;
  char z;

  int  *px = &x;
  float *py = &y;
  char *pz = &z;

  printf("%p\n", px);
  printf("%p\n", py);
  printf("%p\n", pz);

  scanf("%i", px);

  printf("\n%p, %i", px, *px);

  *px = 5;

  printf("\n%p, %i", px, *px);

  return 0;
}
