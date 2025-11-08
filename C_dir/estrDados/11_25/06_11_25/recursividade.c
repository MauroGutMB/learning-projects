#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

// função fibonacci
int fib(int n) {
  if (n <= 1) {
    return n;
  }

  return fib(n - 1) + fib(n - 2);
}

// função fatorial
int fat(int n) {
  if (n < 1) {
    return 0;
  }

  if (n == 1) {
    return n;
  }

  return n * fat(n - 1);
}

// função soma
int soma(int n) {
  /*
   * FORMA DE ARGUMENTOS
   *
  va_list args;
  va_start(args, n_args);

  int sum = 0;

  for(int i = 0; i < n_args; i++){
    sum += va_arg(args, int);
  }

  return sum;
  */

  // forma recursiva

  int opt;

  printf("\nInsira 1 para inserir um número\nInsira 2 para retornar a função\n-> ");
  scanf("%i", &opt);

  switch (opt) {
  case 1:
    printf("\nNúmero a ser somado: ");
    int num;
    scanf("%i", &num);

    return n + soma(num);

  case 2:
    return n;
  }


  return 0;
}

// main
int main() {

  int x;

  printf("digite x -> ");
  scanf("%i", &x);

  // printf("fib de x -> %i\n", fib(x));
  // printf("fat de x -> %i\n", fat(x));

  printf("\nsoma: %i\n", soma(x));

  return 0;
}
