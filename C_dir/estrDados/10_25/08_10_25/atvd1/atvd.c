#include <stdio.h>
#include <stdlib.h>
#include "Circulo.h"
#include "Ponto.h"

int main(){

  Circulo *c1;
  Ponto *p1;

  float x, y;
  float r;

  printf("Ponto inicial -> ");
  scanf("%f %f", &x, &y);

  printf("Raio -> ");
  scanf("%f", &r);

  p1 = criarPonto(x, y);
  c1 = criarCirculo(c1, p1, r);

  printf("Ponto inicial => (%.2f, %.2f)\n", getX(getPontoInicial(c1)), gety(getPontoInicial(c1))); 
  printf("Raio => %.2f\n", getRaio(c1));


  printf("Área => %.2f\n", getArea(c1));
  printf("Perímetro => %.2f\n", getPerimetro(c1));

  liberarCirculo(c1);
  freePonto(p1);
  return 0;
}
