#include <stdio.h>
#include <stdlib.h>
#include "classes/atributos_animal.h"

int main(){

  Atributo *at1;

  at1 = gerarAtributoAnimal(at1, 5, "Masculino");

  printf("%i\n%s", getAtributoIdade(at1), getAtributoSexo(at1));

  free(at1);

  return 0;
}
