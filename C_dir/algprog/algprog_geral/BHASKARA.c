#include <stdio.h>
#include <math.h>

int main(){

  float a, b, c;

  printf("Digite o valor de 'a' --> ");
  scanf("%f", &a);
  while (getchar() != '\n'){}

  printf("Digite o valor de 'b' --> ");
  scanf("%f", &b);
  while (getchar() != '\n'){}

  printf("Digite o valor de 'c' --> ");
  scanf("%f", &c);
  while (getchar() != '\n'){}

  float delta = sqrt(pow(b, 2) - 4 * a * c);
  float raiz1 = (b - (2 * b) + delta)/2 * a;
  float raiz2 = (b - (2 * b) - delta)/2 * a;

  printf("Raiz 1 = %.2f; Raiz 2 = %.2f.", raiz1, raiz2);
}
