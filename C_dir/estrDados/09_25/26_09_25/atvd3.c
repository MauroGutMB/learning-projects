/*
1. A sequência de Fibonacci começa com 0 e 1. Cada termo seguinte é a soma dos dois anteriores: 0, 1, 1, 2, 3, 5, 8, …
Crie uma função recursiva que calcule o n-ésimo termo da sequência.
*/

#include <stdio.h>

int fib(int f){
  if(f <= 1){
    return f;
  }

  return fib(f - 1) + fib(f - 2);
}

int main(){

  int f;
  scanf("%i", &f);
  f = fib(f);
  printf("%i", f);

  return 0;
}
