#include <stdio.h>

int main(){

  char ch[] = {'a', 'b', 'c', 'd', 'e'};

  for(int i = 0; i < sizeof(ch); i++){
    printf("%i ", ch[i]);
  }

  printf("\n");

  float fl[] = {2.3, 5.3, 9.3, 8.3};

  for(int i = 0; i < sizeof(fl) / sizeof(fl[0]); i++){
    printf("%f ", fl[i]);
  }

  printf("\n");

  double db[] = {8.4, 9.1, 8.7, 9.2};

  for(int i = 0; i < sizeof(db) / sizeof(db[0]); i++){
    printf("%f ", db[i]);
  }
}
