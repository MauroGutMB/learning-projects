
// Fatorial com recursividade

#include <stdio.h>

int fat(int n){

  if(n == 1){
    return n;
  } else{
    return n * fat(n-1);
  }
  
}

int main(){

  int x;

  scanf("%i", &x);

  x = fat(x);

  printf("%i", x);

  return 0;
}
