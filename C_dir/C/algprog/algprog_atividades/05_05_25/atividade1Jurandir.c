#include <stdio.h>

int main(){

  int Imaior50 = 0, Pmenor40 = 0, Alt10_20 = 0, idade;
  float alttotal = 0, m10_20 = 0, alt, peso;  

  for(int i = 1; i <= 10; i++){

    printf("Insira a idade da pessoa N°%i --> ", i);
    scanf("%i", &idade);

    printf("Insira a altura da pessoa N°%i --> ", i);
    scanf("%f", &alt);

    printf("Insira o peso da pessoa N°%i --> ", i);
    scanf("%f", &peso);

    if(idade > 50){
      Imaior50++;
    }

    if(idade >= 10 && idade <= 20){
      alttotal += alt;
      m10_20 += alt;
      Alt10_20++;
    }

    if(peso < 40){
      Pmenor40++;
    }
  }

  printf("Quantidade de pessoas com idade acima de 50 anos: %i\n", Imaior50);
  printf("Média das alturas das pessoas com idade entre 10 a 20 anos: %.2f\n", m10_20 / Alt10_20);
  printf("Pessoas com peso inferior a 40 Quilos: %.2f%%", (10 / (float)Pmenor40));


}
