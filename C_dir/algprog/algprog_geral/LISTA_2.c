#include <stdio.h>

int main(){

  int doisD[4][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}};

  for(int i = 0; i < sizeof(doisD)/sizeof(doisD[0]); i++){

    for(int j = 0; j < sizeof(doisD[0])/sizeof(doisD[0][0]); j++){

      printf("%c ", doisD[i][j]);

    }

    printf("\n");

  }
}
