#include <stdio.h>

int main(){

  int linhas;
  int colunas;
  int cont = 1;

  printf("Linhas --> ");
  scanf("%i", &linhas);
  printf("Colunas --> ");
  scanf("%i", &colunas);

  int matriz[linhas][colunas];

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      matriz[i][j] = j+1;
      cont++;
    }
  }

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("%3i ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
