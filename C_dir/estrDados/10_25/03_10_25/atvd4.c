/*
4.    Implementar função que aloca dinamicamente um int, inicializa com x e retorna o ponteiro.
*/

#include <stdio.h>
#include <stdlib.h>

int* inicializarPonteiro(int x){
  int *ptr;
  ptr = (int*) malloc(sizeof(int));

  *ptr = x;

  return ptr;
}

int main(){

  int num;
  printf("Insira um num -> ");
  scanf("%i", &num);

  int* ptr = inicializarPonteiro(num);

  printf("%i", *ptr);

  free(ptr);

  return 0;
}
