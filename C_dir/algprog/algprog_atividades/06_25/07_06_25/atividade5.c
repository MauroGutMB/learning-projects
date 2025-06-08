/*
Faça um algorítimo que leia um vetor de 5 posições, e preencha um segundo vetor,
sendo que cada posição do segundo vetor receberá o valor do primeiro vetor na mesma posição
multiplicado pelo maior valor dentro do primeiro vetor.
*/

#include <stdio.h>

int main(){
  
  int vet1[5];
  int vet2[5];
  int maior;

  for(int i = 0; i < 5; i++){
    printf("Digite o valor %i --> ", i+1);
    scanf("%i", &vet1[i]);
    if(i == 0){
      maior = vet1[0];
    }

    if(vet1[i] > maior){
      maior = vet1[i];
    }
  }

  for(int i = 0; i < 5; i++){
    vet2[i] = vet1[i] * maior;
  }

  for(int i = 0; i < 5; i++){
    printf("%i ", vet2[i]);
  }

  return 0;
}
