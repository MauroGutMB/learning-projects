/*
Fazer um algoritmo que: Preencha 3 vetores, o primeiro com a nota da primeira prova,
o segundo com a nota da segunda prova e o terceiro com a média das 2 primeiras notas,
e imprima o resultado “APROVADO” para aqueles que obtiverem uma média igual ou acima de 6,
e “REPROVADO” para quem obtiverem uma média abaixo de 6.
OBS: Saia do laço quando a primeira nota for igual a -1.
*/

#include <stdio.h>

void mostrarMedias(float arr[], int size);

int main(){

  float notas1[40];
  float notas2[40];
  float medias[40];
  int qtdd_notas = 0;

  for(int i = 0; i < 40; i++){
    printf("Digite a primeira nota do aluno %i --> ", i + 1);
    scanf("%f", &notas1[i]);

    if(notas1[i] == -1){
      break;
    }

    printf("Digite a segunda nota do aluno %i --> ", i + 1);
    scanf("%f", &notas2[i]);

    medias[i] = (notas1[i] + notas2[i]) / 2;

    if(medias[i] >= 6){
      printf("APROVADO.\n");
    } else{
      printf("REPROVADO.\n");
    }

    qtdd_notas++;
  }

  mostrarMedias(medias, qtdd_notas);

  return 0;
}

void mostrarMedias(float arr[], int size){
  printf("[");
  for(int i = 0; i < size; i++){
    printf("%.2f", arr[i]);
    if(i < size - 1){
      printf(", ");
    }
  }
  printf("]\n");
}
