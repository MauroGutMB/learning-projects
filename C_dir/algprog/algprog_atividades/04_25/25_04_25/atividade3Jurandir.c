#include <stdio.h>

int main(){

  int n, verificacao = 0, booleano = 0;

  printf("Digite um número --> ");
  scanf("%i", &n);

  for(int i = 1; i <= n; i++){
    verificacao += i;
    if(verificacao == n){
      printf("O número é perfeito.");
      booleano = 1;
      break;
    } 
  }
  
  if(booleano == 0){
    printf("O número é imperfeito.");
  }
}
