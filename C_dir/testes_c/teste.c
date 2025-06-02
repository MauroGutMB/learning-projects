#include <stdio.h>

int main(){

  int x = 13;

  for(int i = 1; i <= x; i++){

    int y = 1; 

    for(int z = 1; z <= x - i; z++){
      printf("  ");
    }

    for(int j = 1; j <= x; j++){
      if(i >= j){
        printf("%3i ", y);
        y = y * (i - j) / j;
      }
    }
    printf("\n");
  }

  return 0;
}
