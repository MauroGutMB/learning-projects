#include <stdio.h>

int main(){

  int dia, d_semana;

  printf("Insira um dia do mês (1 - 31) --> ");
  scanf("%d", &dia);

  if(dia < 1 || dia > 31){
    printf("Data inválida.");
    return 1;
  }

  d_semana = dia % 7;

  switch (d_semana) {
    case 0:
      printf("Hoje é domingo. É o começo da semana.");
      break;
    case 1:
      printf("Hoje é segunda. É dia útil.");
      break;
    case 2:
      printf("Hoje é terça. É dia útil.");
      break;
    case 3:
      printf("Hoje é quarta. É dia útil.");
      break;
    case 4:
      printf("Hoje é quinta. É dia útil.");
      break;
    case 5:
      printf("Hoje é sexta. É dia útil.");
      break;
    case 6:
      printf("Hoje é sábado. É final de semana.");
      break;
  
  }
}
