#include <stdio.h>

int main(){

  int numero;
  int booleano;
  int verificacao;

  printf("Escolha um número qualquer para verificar se esse número é primo ou não --> ");
  scanf("%i", &numero);
  while(getchar() != '\n'){}

  if(numero <= 2){
    booleano = 1;
  } else{

    for(int i = 2; i < numero; i++){
      verificacao = numero % i;
      if(verificacao == 0){
        booleano = 0;
        break;
      } else{
        booleano = 1;
      }
    }
  } 

  if(booleano == 1){
    printf("\nO número é primo.");
  } else{
    printf("\nO número não é primo.");
  }

}
