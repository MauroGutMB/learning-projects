#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"
#include "ponto.h"

#define PI 3.14

typedef struct Circulo {
  Ponto* ponto;
  float raio;
} Circulo;

Circulo* criarCirculo(float x, float y, float r){
  Circulo* c = (Circulo*) malloc(sizeof(Circulo));
  c->ponto = criarPonto(x, y);
  c->raio = r;

  return c;
}

void liberarCirculo(Circulo* c){
  liberarPonto(c->ponto);
  free(c);
}

float areaCirculo(Circulo* c){
  return (PI * pow(c->raio, 2));
}
