#include <stdio.h>

int main(){

  int p90kg = 0, idade;
  float peso, idade_total = 0;

  for(int i = 1; i <= 7; i++){

    printf("Insira o peso da pessoa N°%i: ", i);
    scanf("%f", &peso);

    printf("Insira a idade da pessoa N°%i: ", i);
    scanf("%i", &idade);

    if(peso > 90){
      p90kg++;
    }
    
    idade_total += idade;
  }

  printf("A quantidade de pessoas com mais de 90 Quilos: %i\n", p90kg);
  printf("A Média da idade de todas as pesssoas: %.2f", (idade_total / 7));
  
}
