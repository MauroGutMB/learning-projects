#include <stdio.h>

int main(){


  int numero;
  int qtdd = 0, numeros_acima = 0, numeros_abaixo = 0, soma = 0;
  
  while(qtdd < 10){
    qtdd++;

    printf("Digite o valor %i -> ", qtdd);
    scanf("%i", &numero);
    while(getchar() != '\n'){}

    soma += numero;
    
    if(numero < 10){
      numeros_abaixo++;
    } else if(numero > 20){
      numeros_acima++;
    } 
  }

  printf("\nA soma dos números: %i\n", soma);
  printf("\nNúmeros acima de 20: %i", numeros_acima);
  printf("\nNúmeros abaixo de 10: %i", numeros_abaixo);

}
