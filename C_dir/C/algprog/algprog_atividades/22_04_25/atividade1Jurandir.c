#include <stdio.h>

int main(){

  for(int i = 1; i <= 10; i++){

    printf("- ");
    for(int j = 1; j <= 10; j++){

      int num = i * j;
      printf("%3i ", num);
    }
    printf("\n");
  }
}
