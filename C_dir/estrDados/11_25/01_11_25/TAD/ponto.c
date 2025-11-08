#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

typedef struct Ponto {
  float x;
  float y;
} Ponto;

Ponto* criarPonto(float x, float y){
  Ponto* p;
  p = (Ponto*) malloc(sizeof(Ponto));

  p->x = x;
  p->y = y;

  return p;
}

void liberarPonto(Ponto* p){
  free(p);
}
