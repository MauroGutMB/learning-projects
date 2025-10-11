#include <stdlib.h>
#include <math.h>
#include "Circulo.h"
#include "Ponto.h"

struct ponto {
  float x;
  float y;
};

Ponto* criarPonto(float x, float y){
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p->x = x;
  p->y = y;

  return p;
}

void freePonto(Ponto *p){
  free(p);
}

float getX(Ponto *p){
  return p->x;
}

float gety(Ponto *p){
  return p->y;
}

void setPonto(Ponto *p, int x, int y){
  p->x = x;
  p->y = y;
}

float getDistancia(Ponto *p1, Ponto *p2){
  float dx = pow((p2->x - p1->x), 2);
  float dy = pow((p2->y - p1->y), 2);
  return sqrt(dx + dy);
}
