#include <stdio.h>
#include <stdlib.h>

int* retonar_impares(int *v, int t, int *t2){
  int imp = 0;
  for(int i = 0; i < t; i++){
    if(*(v+i) % 2 != 0){
      imp++;
    }
  }
  int *v2 = (int*) malloc(imp * sizeof(int));
  for(int i = 0; i < t; i++){
    if(*(v+i) % 2 != 0){
      *(v2) = *(v + i);
      v2++; // erro de incremento em ponteiro
      (*(t2))++;
    }
  }
  v2-=imp;
  return v2;
}

int main(){

  int t, t2 = 0;
  int *pt2 = &t2;
  int *v;
  scanf("%i", &t);
  v = (int*)malloc(t * sizeof(int));
  for(int i = 0; i < t; i++){
    scanf("%i", (v+i));
  }

  int *v2 = retonar_impares(v, t, pt2);

  printf("Normal: ");
  for(int i = 0; i < t; i++){
    printf("%i ", *(v+i));
  }
  printf("\nÍmpares: ");
  for(int i = 0; i < *pt2; i++){
    printf("%i ", *(v2+i));
  }

  free(v);
  free(v2);

  return 0;
}
