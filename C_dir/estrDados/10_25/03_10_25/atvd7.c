/*
 * 7.     Definir struct Aluno com um nome e 3 notas. Alocar vetor de alunos dinamicamente, ler e imprimir médias.
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct {
  char nome[40];
  int notas[3];
} Aluno;


int main(){

  Aluno *alunos;

  int tamanho;

  printf("Quantos alunos você possui? -> ");
  scanf("%i", &tamanho);

  alunos = (Aluno*) malloc(tamanho * sizeof(Aluno));

  for(int i = 0; i < tamanho; i++){
    printf("Nome do aluno %i -> ", i+1);
    scanf("%s", alunos[i].nome);

    printf("Nota 1 ->");
    scanf("%i", &alunos[i].notas[0]);

    printf("Nota 2 ->");
    scanf("%i", &alunos[i].notas[1]);

    printf("Nota 3 ->");
    scanf("%i", &alunos[i].notas[2]);
  }

  printf("Alunos:\n");
  for(int i = 0; i < tamanho; i++){
    printf("Nome: %s\n", (*(alunos+i)).nome);
    printf("Média: %i\n", (((*(alunos+i)).notas[0] + (*(alunos+i)).notas[1] + (*(alunos+i)).notas[2])) / 3 );
  }
  free(alunos);

  return 0;
}
