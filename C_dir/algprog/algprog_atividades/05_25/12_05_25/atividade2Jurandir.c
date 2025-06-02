// Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y. 

#include <stdio.h>

int main(){

  int vetorNums[8];
  int tam = 8;
  int x = 0, y = 0;
  int somaXY;

  for(int i = 0; i < tam; i++){
    
    int num;

    printf("Valor do número %i --> ", i + 1);
    scanf("%i", &num);

    vetorNums[i] = num;
  }

  printf("Vetor: ");
  for(int i = 0; i < tam; i++){
    printf("%i ", vetorNums[i]);
  }

  printf("\n");

  printf("Insira o Index de x --> ");
  scanf("%i", &x);

  printf("Insira o Index de y --> ");
  scanf("%i", &y);

  somaXY = vetorNums[x] + vetorNums[y];

  printf("A soma do Index %i e %i é: %i", x, y, somaXY);

  return 0;
}
