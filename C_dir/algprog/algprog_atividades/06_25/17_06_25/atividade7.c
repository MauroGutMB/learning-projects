/*
Construa uma estrutura aluno com nome, número de matrícula e curso. 
Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
  char nome[50];
  char curso[50];
  int matricula;
}Aluno;

int main(){

  int n = 5;

  Aluno alunos[n];

  for(int i = 0; i < n; i++){
    printf("Nome do aluno %i --> ", i+1);
    fgets(alunos[i].nome, 50, stdin);
    alunos[i].nome[strlen(alunos[i].nome) - 1] = '\0';

    printf("Curso do aluno %i --> ", i+1);
    fgets(alunos[i].curso, 50, stdin);
    alunos[i].curso[strlen(alunos[i].curso) - 1] = '\0';

    printf("N° de matricula --> ");
    scanf("%i", &alunos[i].matricula);
    while(getchar() != '\n'){}
  }

  printf("\nNomes: ");
  for(int i = 0; i < n; i++){
    printf("%s. ", alunos[i].nome);
  }

  printf("\nCursos: ");
  for(int i = 0; i < n; i++){
    printf("%s. ", alunos[i].nome);
  }

  printf("\nMatriculas: ");
  for(int i = 0; i < n; i++){
    printf("%i. ", alunos[i].matricula);
  }

  return 0;
}
