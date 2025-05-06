#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  float num1, num2;
  char operador;

  while(1){

    printf("+----------------------------+\n");
    printf("|      Calculadora Em C      |\n");
    printf("+----------------------------+\n");
    printf("| '+' Para soma              |\n");
    printf("| '-' Para subtração         |\n");
    printf("| '*' Para multiplicação     |\n");
    printf("| '/' Para divisão           |\n");
    printf("| '^' Para potenciação       |\n");
    printf("| 's' ou '0' Para sair       |\n");
    printf("+----------------------------+\n\n");


    while(1){
      printf("Digite o primeiro valor --> ");
      scanf("%f", &num1);
      if(num1 == 0)exit(2);
      while (getchar() != '\n'){}

      while(1){
        printf("Selecione o operador (+, -, /, * ou ^) --> ");
        scanf("%c", &operador);
        if(operador == 's')exit(2);
        while (getchar() != '\n'){}

        if (operador != '+' && operador != '-' && operador != '/' && operador != '*' && operador != '^'){
          printf("Você não está usando um operador válido. tente novamente.\n\n");
          continue;
        } else {break;}
      }

      printf("Digite o segundo valor --> ");
      scanf("%f", &num2);
      if(num2 == 0)exit(2);
      while (getchar() != '\n'){}
      break;
    }

    switch (operador) {
      case '/':
        system("clear");
        printf("%.2f %c %.2f Resultado --> ", num1, operador, num2);
        printf("%.2f\n\n", num1 / num2);
        num1 = 0;
        break;
      case '*':
        system("clear");
        printf("%.2f %c %.2f Resultado --> ", num1, operador, num2);
        printf("%.2f\n\n", num1 * num2);
        num1 = 0;
        break;
      case '+':
        system("clear");
        printf("%.2f %c %.2f Resultado --> ", num1, operador, num2);
        printf("%.2f\n\n", num1 + num2);
        num1 = 0;
        break;
      case '-':
        system("clear");
        printf("%.2f %c %.2f Resultado --> ", num1, operador, num2);
        printf("%.2f\n\n", num1 - num2);
        num1 = 0;
        break;
      case '^':
        system("clear");
        printf("%.2f %c %.2f Resultado --> ", num1, operador, num2);
        printf("%.2f\n\n", pow(num1, num2));
        num1 = 0;
        break;
    }
  }
}
