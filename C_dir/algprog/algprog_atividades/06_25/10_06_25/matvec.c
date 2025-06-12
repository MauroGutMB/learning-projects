#include "matvec.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ----------------------- IMPRIMIR -----------------------------//
//
//       ############      MATRIZES       ############
void mostrarMatrizInt(int n, int m, int matriz[n][m]){
  printf("\n");
  for(int i = 0; i < n; i++){
    printf("[");
    for(int j = 0; j < m; j++){
      printf("%2i", matriz[i][j]);
      if(j < m - 1){
        printf(", ");
      }
    }
    printf("]\n");
  }
}

void mostrarMatrizFloat(int n, int m, float matriz[n][m]){
  printf("\n");
  for(int i = 0; i < n; i++){
    printf("[");
    for(int j = 0; j < m; j++){
      printf("%.2f", matriz[i][j]);
      if(j < m - 1){
        printf(", ");
      }
    }
    printf("]\n");
  }
}

//        ############      VETORES       ############

void mostrarVetorInt(int n, int vetor[n]){
  printf("\n[");
  for(int i = 0; i < n; i++){
    printf("%i", vetor[i]);
    if(i < n - 1){
      printf(", ");
    }
  }
  printf("]\n");
}


// ----------------------- PREENCHER -----------------------------//

//       ############      MATRIZES       ############

void preencherMatrizInt(int n, int m, int matriz[n][m], int min, int max){
  srand(time(NULL));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      int rand_num =  (rand() % (max - min + 1)) + min;
      matriz[i][j] = rand_num;
    }
  }
}

void preencherMatrizFloat(int n, int m, float matriz[n][m], int min, int max){
  srand(time(NULL));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      float div = (rand() % 100) + 1;
      float rand_num = ((rand() % (max - min + 1)) + min) + div / 100;
      matriz[i][j] = rand_num;
    }
  }
}
