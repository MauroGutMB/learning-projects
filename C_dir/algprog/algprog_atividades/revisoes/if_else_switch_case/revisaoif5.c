#include <stdio.h>

// Classificação de notas de 0 a 100 entre A, B, C, D, E ou F

int main(){

  int nota;

  printf("Insira a nota do aluno: ");
  scanf("%d", &nota);

  if(nota >= 0 && nota < 10){
    printf("O aluno foi classificado como F, sua nota foi %d.", nota);
  } else if(nota >= 10 && nota < 20){
    printf("O aluno foi classificado como E, sua nota foi %d.", nota);
  } else if(nota >= 20 && nota < 40){
    printf("O aluno foi classificado como D, sua nota foi %d.", nota);
  } else if(nota >= 40 && nota < 60){
    printf("O aluno foi classificado como C, sua nota foi %d.", nota);
  } else if(nota >= 60 && nota < 80){
    printf("O aluno foi classificado como B, sua nota foi %d.", nota);
  } else if(nota >= 80 && nota <= 100){
    printf("O aluno foi classificado como A, sua nota foi %d.", nota);
  } else{
    printf("A nota iserida está inválida.");
  }
}
