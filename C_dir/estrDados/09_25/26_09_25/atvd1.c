
// Fatorial sem recursividade

#include <stdio.h>

int fat(int fat){

  int f = 1;

  for(int i = fat; i > 0; i--){
    f *= i; 
  }

  return f;
}

int main(){

  int x;

  scanf("%i", &x);

  x = fat(x);

  printf("%i", x);

  return 0;
}
