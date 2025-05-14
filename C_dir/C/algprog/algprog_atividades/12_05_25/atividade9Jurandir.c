#include <stdio.h>

int main(){

  int vetor[8], tamVetor = sizeof(vetor) / sizeof(vetor[0]);

  for(int i = 0; i < tamVetor; i++){
    printf("Digite o valor do n°%i --> ", i + 1);
    scanf("%i", &vetor[i]);
  }

  int pares = 0;
  int impares = 0;

  for(int i = 0; i < tamVetor; i++){
    if(vetor[i] % 2 == 0){
      pares++;
    } else{
      impares++;
    }
  }

  int vetorPares[pares], tamPares = sizeof(vetorPares) / sizeof(vetorPares[0]);
  int vetorImpares[impares], tamImpares = sizeof(vetorImpares) / sizeof(vetorImpares[0]);

  int x = 0, y = 0;
  for(int i = 0; i < tamVetor; i++){
    if(vetor[i] % 2 == 0){
      vetorPares[x] = vetor[i];
      x++;
    } else{
      vetorImpares[y] = vetor[i];
      y++;
    }
  }

  // printf("\n\n");
  // printf("Vetor dos pares: ");
  // for(int i = 0; i < tamPares; i++){
  //   printf("%i ", vetorPares[i]);
  // }
  // printf("\n\n");
  // printf("Vetor dos impares: ");
  // for(int i = 0; i < tamImpares; i++){
  //   printf("%i ", vetorImpares[i]);
  // }
  // printf("\n\n");

  for(int i = 0; i < tamPares; i++){
    for(int i2 = 0; i2 < tamPares; i2++){

      if(vetorPares[i] < vetorPares[i2]){
        int temp = vetorPares[i];
        vetorPares[i] = vetorPares[i2];
        vetorPares[i2] = temp;
      }

    }
  }

  for(int i = 0; i < tamImpares; i++){
    for(int i2 = 0; i2 < tamImpares; i2++){

      if(vetorImpares[i] > vetorImpares[i2]){
        int temp = vetorImpares[i];
        vetorImpares[i] = vetorImpares[i2];
        vetorImpares[i2] = temp;
      }

    }
  }
  
  // printf("Após a organização: ");
  //
  // printf("\n\n");
  // printf("Vetor dos pares: ");
  // for(int i = 0; i < tamPares; i++){
  //   printf("%i ", vetorPares[i]);
  // }
  // printf("\n\n");
  // printf("Vetor dos impares: ");
  // for(int i = 0; i < tamImpares; i++){
  //   printf("%i ", vetorImpares[i]);
  // }
  // printf("\n\n");


  printf("Os números impressos na ordem \'Pares em crescente, Ímpares em ordem decrescente\':\n");
  for(int i = 0; i < tamPares; i++){
    printf("%i ", vetorPares[i]);
  }
  for(int i = 0; i < tamImpares; i++){
    printf("%i ", vetorImpares[i]);
  }

  return 0;
}
