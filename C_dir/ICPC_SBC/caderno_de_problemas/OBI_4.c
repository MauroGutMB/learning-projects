// Questão do gráfico de barras

#include <stdio.h>

int main(){

  int cols;

  scanf("%i", &cols);

  int vals[cols];
  int higher;

  for(int i = 0; i < cols; i++){
    scanf("%i", &vals[i]);
    if(i == 0){
      higher = vals[0];
    }
    if(vals[i] > higher){
      higher = vals[i];
    }
  }

  int lns = higher;
  int matr[lns][cols];

  for(int i = 0; i < lns; i++){
    for(int j = 0; j < cols; j++){
      matr[i][j] = 1;
    }
  }

  for(int i = 0; i < cols; i++){
    int ln = higher - vals[i];
    for(int j = 0; j < ln; j++){
      matr[j][i] = 0;
    }
  }

  for(int i = 0; i < lns; i++){
    for(int j = 0; j < cols; j++){
      printf("%i ", matr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
