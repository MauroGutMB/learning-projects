#include <stdio.h>

// O maior número entre dois números

int main(){

  int numero1, numero2;

  printf("Digite o valor do primeiro número: ");
  scanf("%d", &numero1);

  printf("Digite o valor do segundo número: ");
  scanf("%d", &numero2);

  if(numero1 > numero2){
    printf("O primeiro número é maior que o segundo, pois %i é maior que %i.", numero1, numero2);
  } else if(numero2 > numero1){
    printf("O segundo número é maior que o primeiro, pois %i é maior que %i.", numero2, numero1);
  } else{
    printf("Os números são iguais. %i é igual a %i.", numero1, numero2);
  }
}
