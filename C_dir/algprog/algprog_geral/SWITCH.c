#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void IMC();
void MEDIA();
void rosquinha();
void calculadora();

int main(){

  int opt;
  
  while(1){
    printf("\n");
    printf("+----------------------+\n");
    printf("| 1. IMC               |\n");
    printf("| 2. Média             |\n");
    printf("| 3. Rosquinha ASCII   |\n");
    printf("| 4. Calculadora       |\n");
    printf("| 5. Sair              |\n");
    printf("+----------------------+\n");

    printf("\nEscolha uma das funções --> ");
    scanf("%i", &opt);

    printf("\n");
    switch (opt) {
      case 1:
        printf("Calculando o IMC.\n\n");
        system("clear");
        IMC();
        break;
      case 2:
        printf("Calculando a Média.\n\n");
        system("clear");
        MEDIA();
        break;
      case 3:
        rosquinha();
        break;
      case 4:
        printf("Iniciando a Calculadora.\n\n");
        system("clear");
        calculadora();
        break;
      case 5:
        printf("Fechando o programa.\n\n");
        exit(1);
      default:
        printf("Escolha inválida");
        break;
    
    }
  }
}

void IMC(){

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
}

void MEDIA(){


  float a, b, c;

  printf("Digite a primeira nota --> ");
  scanf("%f", &a);
  printf("Digite a segunda nota --> ");
  scanf("%f", &b);

  c = (a + b)/2;

  printf("A média é %.2f\n", c);

  if (c < 7 && c >= 4){
    float pf;
    printf("O aluno está de prova final.\n");
    printf("Digite a terceira nota --> ");
    scanf("%f", &pf);

    c = (a + b + pf)/3;

    if (c < 6){
      printf("O aluno está REPROVADO.\n");
      printf("A média do aluno foi de %.2f", c);
    } else {
      printf("O aluno foi aprovado na prova final.\n");
      printf("A média final do aluno foi de %.2f", c);
    } 

  } else if(c < 4) {
    printf("O aluno está reprovado e não tem direito a prova final.");
  } else if ( c == 7){
    printf("O aluno está na média.");
  } else {
    printf("O aluno está Aprovado.");
  }

}

void rosquinha(){

    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("\x1b[2J");
    for(;;) {
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; j < 6.28; j += 0.07) {
            for(i=0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y= 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        printf("\x1b[H");
        for(k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        usleep(30000);
    }
}

void calculadora(){

  char operador;
  float num1;
  float num2;

  //primeiro valor
  printf("Digite o primeiro valor --> ");
  scanf("%f", &num1);

  //operador
  printf("Selecione o operador (+, -, / ou *) --> ");
  scanf(" %c", &operador);

  //segundo valor
  printf("Digite o segundo valor --> ");
  scanf("%f", &num2);

  //Switch para cada operação
  switch (operador) {
    case '/':
      printf("%.2f", num1 / num2);
      break;
    case '*':
      printf("%.2f", num1 * num2);
      break;
    case '+':
      printf("%.2f", num1 + num2);
      break;
    case '-':
      printf("%.2f", num1 - num2);
      break;
    default:
      printf("A operação não pode ser realizada.");
      break;
  }
}
