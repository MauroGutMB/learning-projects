#include <stdio.h>

int main(){

  float vetorNotas[5];
  float notasMaxMin[2];
  int tamNotas = sizeof(vetorNotas) / sizeof(vetorNotas[0]);
  int Nmaior = 0, Nmenor = 0;
  int Imaior = 0, Imenor = 0;
  float media = 0;


  for(int i = 0; i < tamNotas; i++){

    float nota;

    printf("Nota n°%i --> ", i + 1);
    scanf("%f", &nota);

    vetorNotas[i] = nota;

    if(Nmaior == 0 && Nmenor == 0){
      Nmaior = nota;
      Nmenor = nota;
    }

  }

  for(int i = 0; i < tamNotas; i++){
    if(vetorNotas[i] >= Nmaior){
      Nmaior = vetorNotas[i];
      Imaior = i;
    }

    if(vetorNotas[i] <= Nmenor && vetorNotas[i] != vetorNotas[i - 1]){
      Nmenor = vetorNotas[i];
      Imenor = i;
    }
  }

  notasMaxMin[0] = Nmenor;
  notasMaxMin[1] = Nmaior;

  printf("Notas: ");
  for(int i = 0; i < tamNotas; i++){
    printf("%.2f ", vetorNotas[i]);
  }

  printf("\n");

  printf("MIN - MAX: ");
  for(int i = 0; i < 2; i++){
    printf("%.2f ", notasMaxMin[i]);
  }

  printf("\n");

  printf("A média dos notas: ");
  for(int i = 0; i < tamNotas; i++){
    if(i != Imenor && i != Imaior){
      printf("%.2f ", vetorNotas[i]);
      media += vetorNotas[i];
    }
  }

  printf("É igual a: %.2f", media / 3);

}
