#include "Ponto.h"

typedef struct circulo Circulo;
Circulo* criarCirculo(Circulo *c, Ponto *pi, float r);
void liberarCirculo(Circulo *c);
Ponto* getPontoInicial(Circulo *c);
void setPontoInicial(Circulo *c, Ponto *pi);
float getRaio(Circulo *c);
void setRaio(Circulo *c, float r);
float getArea(Circulo *c);
float getPerimetro(Circulo *c);
