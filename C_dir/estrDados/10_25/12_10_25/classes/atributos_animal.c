#include <string.h>
#include <stdlib.h>
#include "atributos_animal.h"

struct atributo {
  int idade;
  char sexo[10];
};

Atributo* gerarAtributoAnimal(Atributo *at, int idade, char sexo[10]){
  at = (Atributo*) malloc(sizeof(Atributo));

  at->idade = idade;
  strcpy(at->sexo, sexo);

  return at;
}

void setAtributoIdade(Atributo *at, int idade){
  at->idade = idade;
}
int getAtributoIdade(Atributo *at){
  return at->idade;
}

void setAtributoSexo(Atributo *at, char sexo[10]){
  strcpy(at->sexo, sexo);
}
char* getAtributoSexo(Atributo *at){
  return at->sexo;
}
