#include <stdio.h>
#include <stdlib.h>

int main(){

  int *v;
  int size = 15;
  
  v = (int*) malloc(size * sizeof(int));

  printf("%p", v);

  


  free(v);

  return 0;
}
