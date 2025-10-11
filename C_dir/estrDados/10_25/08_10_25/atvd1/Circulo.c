#include <stdlib.h>
#include "Circulo.h"
#include "Ponto.h"

struct circulo{
  Ponto *pontoInicial;
  float raio;
};

Circulo* criarCirculo(Circulo *c, Ponto *pi, float r){
  c = (Circulo*) malloc(sizeof(Circulo));
  c->pontoInicial = pi;
  c->raio = r;

  return c;
}

void liberarCirculo(Circulo *c){
  free(c);
}

Ponto* getPontoInicial(Circulo *c){
  return c->pontoInicial;
}

void setPontoInicial(Circulo *c, Ponto *pi){
  c->pontoInicial = pi;
}

float getRaio(Circulo *c){
  return c->raio;
}

void setRaio(Circulo *c, float r){
  c->raio = r;
}

float getArea(Circulo *c){
  float pi = 3.14;
  return (pi * (c->raio * c->raio));
}

float getPerimetro(Circulo *c){
  float pi = 3.14;
  return (2 * pi * c->raio);
}

float getDistancia(Circulo *c, Ponto *p){

  // float dx = pow((p2->x - p1->x), 2);
  // float dy = pow((p2->y - p1->y), 2);
  return 0;
}
