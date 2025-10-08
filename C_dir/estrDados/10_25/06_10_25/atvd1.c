/*
 * 1) Implemente uma função que calcule as raízes de uma equação do segundo grau, do tipo 'ax^2 + bx + c = 0'.
 * Esta função deve obedecer ao protótipo: 
 *
 *    int raizes(float a, float b, float c,float *x1, float *x2);
 * 
 * Esta função deve ter como retorno o número de raízes reais e distintas da equação.
 * Se existirem raízes reais, seus valores devem ser armazenados em x1 e x2
 */

#include <math.h>
#include <stdio.h>

int raizes(float a, float b, float c,float *x1, float *x2){

  // (-b +- Delta) / 2 . a
  // Delta = sqrt(b^2 - 4.a.c)
  
  float dt = ((b * b) - (4 * a * c));

  *x1 = ((b * -1) + sqrt(dt)) / (2 * a);
  *x2 = ((b * -1) - sqrt(dt)) / (2 * a);

  if(dt > 0){
    return 2;
  } else if(dt == 0){
    return 1;
  }

  return 0;
}

int main(){

  float a = 10, b = 20, c = 1, x1, x2;

  int nRaizes = raizes(a, b, c, &x1, &x2);

  printf("+----------------+\n");
  printf("| Raiz 1: %2.2f   \n", x1);
  printf("| Raiz 2: %2.2f   \n", x2);
  printf("| Raízes: %2i     \n", nRaizes);
  printf("+----------------+\n");

  return 0;
}
