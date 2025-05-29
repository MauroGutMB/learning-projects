#include <stdio.h>
#include <stdlib.h>


int main(){

  int num = 5;
  int *pNum = malloc(sizeof(int));
  *pNum = num;


  printf("%i", *pNum);

  free(pNum);

  return 0;
}
