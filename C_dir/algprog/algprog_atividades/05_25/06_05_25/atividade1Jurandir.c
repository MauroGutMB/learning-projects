#include <stdio.h>

int main(){

  int num[10];

  for(int i = 0; i < 10; i++){

    printf("Digite o Número %i --> ", i + 1);
    scanf("%i", &num[i]);
  }

  printf("Ordem normal dos endereços: ");
  for(int i = 0; i < 10; i++){
    printf("%i ", num[i]);
  }

  printf("\n");

  printf("Ordem Inversa: ");
  for(int i = 9; i >= 0; i--){
    printf("%i ", num[i]);
  }

  return 0;
}
