#include <stdio.h>

// Dia da semana de acordo com o dia do mês

int main(){
  
  int dia;

  printf("Insira o dia do mês: ");
  scanf("%d", &dia);

  if(dia  < 1 || dia > 31){
    printf("Data inválida.");
    return 1;
  }

  switch(dia % 7) {
    case 0:
      printf("Hoje é Domingo.");
      break;
    case 1:
      printf("Hoje é Segunda-Feira.");
      break;
    case 2:
      printf("Hoje é Terça-Feira.");
      break;
    case 3:
      printf("Hoje é Quarta-Feira.");
      break;
    case 4:
      printf("Hoje é Quinta-Feira.");
      break;
    case 5:
      printf("Hoje é Sexta-Feira.");
      break;
    case 6:
      printf("Hoje é Sábado.");
      break;
  }
}
