#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
#include "circulo.h"

int main(){

  Circulo* meuCirculo = criarCirculo(4.5, 10, 3);

  printf("Endereço do círculo: %p\n", meuCirculo);
  printf("Área do círculo: %.2f\n", areaCirculo(meuCirculo));

  liberarCirculo(meuCirculo);

  return 0;
}
