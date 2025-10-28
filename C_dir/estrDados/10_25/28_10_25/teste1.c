#include <stdio.h>
#include <stdlib.h>

int main(){

  int *x;
  x = (int*)malloc(sizeof(int));

  printf("Insira x -> ");

  scanf("%i", x);

  printf("%i", *x);

  return 0;
}
