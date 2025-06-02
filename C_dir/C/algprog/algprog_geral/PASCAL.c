#include <stdio.h>

int main(){

  int x;

  printf("X --> ");
  scanf("%i", &x);

  for(int i = 1; i <= x; i++){

    int num = 1;

    for(int k = 1; k <= x - i; k++){
      printf("  ");
    }

    for(int j = 1; j <= x; j++){

      if(i >= j){
        printf("%3i ", num);
        num = num * (i - j) / j;
      }
      
    }

    printf("\n");
  }

  return 0;
}
