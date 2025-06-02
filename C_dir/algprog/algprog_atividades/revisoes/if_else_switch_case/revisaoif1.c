#include <stdio.h>

//Números pares ou Ímpares

int main(){

  int numero_que_vai_ser_verificado;

  printf("Digite algum número para verificá-lo: ");
  scanf("%d", &numero_que_vai_ser_verificado);
  // O sinal de '%' representa o resto da divisão de um número pelo outro.
  if(numero_que_vai_ser_verificado % 2 == 0){
    printf("O número é par.");
  } else{
    printf("O número é ímpar.");
  }
}
