#include <stdio.h>

int main(){

  int quantidade_de_numeros = 0, maior = 0 , menor = 0; 
  float media, numero;
  float soma = 0;

  do{
    quantidade_de_numeros++;
    printf("Digite o valor %i --> ", quantidade_de_numeros);
    scanf("%f", &numero);
    while(getchar() != '\n'){}

    soma += numero;

    if(maior == 0 && menor == 0){
      maior = numero, menor = numero;
    }
    
    if(numero < menor){
      menor = numero;
    }
    if(numero > maior){
      maior = numero;
    }

  }while (quantidade_de_numeros < 20);

  media = soma/quantidade_de_numeros;

  printf("\nO soma foi %.2f, sua média é %.2f", soma, media);
  printf("\nO maior número foi: %i", maior);
  printf("\nO menor número foi: %i", menor);

}
