/*
3) Implemente uma função que receba um vetor e seu tamanho e retorne o maior valor usando ponteiros.
*/

#include <stdio.h>

int maiorVal(int n, int *pV){
  int m = *pV;
  for(int i = 0; i < n; i++){
    if(*(pV+i) > m){
      m = *(pV+i);
    }
  }
  return m;
}

int main(){

  int vetor[] = {9, 2, 1, 4, 1, 9, 10, 5, 3, 8, 6, 7};
  int size = sizeof(vetor) / sizeof(vetor[0]);

  int x = maiorVal(size, vetor);

  printf("%i", x);

  return 0;
}
