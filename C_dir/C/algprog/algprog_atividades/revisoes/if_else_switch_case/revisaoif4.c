#include <stdio.h>

// Verificação de um ano bisexto

int main(){

  int ano;

  printf("Digite em qual ano estamos: ");
  scanf("%d", &ano);

  if(ano % 4 == 0){
    printf("Estamos em um ano bisexto.");
  } else{
    printf("Estamos em um ano não bisexto.");
  }
}
