#include <stdio.h>

int main(){

  float peso;
  float altura;
  float imc;

  printf("Insira seu peso atual (KGs)--> ");
  scanf("%f", &peso);

  printf("Insira altura atual (M)--> ");
  scanf("%f", &altura);

  imc = peso/(altura*altura);

  printf("IMC => %.2f\n", imc);

  if (imc < 18.5){
    printf("Você está no estado de Magreza.");
  } else if (imc <=24.9 ){
    printf("Você está no estado de Eutrofia.");
  } else if (imc <=29.9 ){
    printf("Você está no estado de Pré-Obesidade.");
  } else if (imc <=34.9 ){
    printf("Você está no estado de Obesidade I.");
  } else if (imc <=39.9 ){
    printf("Você está no estado de Obesidade II.");
  } else {
    printf("Você está no estado de Obesidade III.");
  }

  return 0;
}
