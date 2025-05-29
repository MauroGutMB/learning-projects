//  Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado em outro vetor.
//  Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos. 

#include <stdio.h>

int main(){

  float vetorReais[10];
  float vetorQuadrado[10];

  int tam = sizeof(vetorReais) / sizeof(vetorReais[0]);

  for(int i = 0; i < tam; i++){
    
    float num;

    printf("Número real N°%i --> ", i + 1);
    scanf("%f", &num);

    vetorReais[i] = num;
    vetorQuadrado[i] = num * num;
  }

  printf("Vetor dos números: ");
  for(int i = 0; i < tam; i++){
    printf("%.2f ", vetorReais[i]);
  }

  printf("\n");

  printf("Vetor dos quadrados: ");
  for(int i = 0; i < tam; i++){
    printf("%.2f ", vetorQuadrado[i]);
  }

  return 0;
}
