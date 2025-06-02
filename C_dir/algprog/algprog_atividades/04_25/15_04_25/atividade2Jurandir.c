#include <ctype.h>
#include <stdio.h>

int main(){

  char plano;
  float salario;

  printf("Qual o plano de trabalho do empregado? (A, B ou C) --> ");
  scanf("%c", &plano);
  plano = toupper(plano);

  printf("Qual o salário do empregado? --> ");
  scanf("%f", &salario);

  switch (plano) {
    case 'A':
      printf("O salário do funcionário é: %.2fR$", salario + (salario * 0.1));
      break;
    case 'B':
      printf("O salário do funcionário é: %.2fR$", salario + (salario * 0.15));
      break;
    case 'C':
      printf("O salário do funcionário é: %.2fR$", salario + (salario * 0.2));
      break;
  
  }
}
