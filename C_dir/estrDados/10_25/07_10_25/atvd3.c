/*
 * 3) Crie uma estrutura para armazenar dados de alunos (nome e cidade). Crie uma função para criar/adicionar alunos usando malloc.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[30];
  char cidade[20];
} Aluno;

void criarAluno(Aluno *aluno, char nome[30], char cidade[20]){
  strcpy(aluno->nome, nome);
  strcpy(aluno->cidade, cidade);
}

void limparAluno(Aluno *aluno){
  if(aluno == NULL){
    return;
  }
  free(aluno);
}

void adicionarAluno(Aluno *aluno, char nome[30], char cidade[20], int *nAlunos){
  Aluno *novoAluno;

  if((novoAluno = (Aluno*) malloc(*nAlunos * sizeof(Aluno))) == NULL){
    free(novoAluno);
    return;
  }

  strcpy(novoAluno->nome, nome);
  strcpy(novoAluno->cidade, cidade);

  if((aluno = (Aluno*) realloc(aluno, *nAlunos++)) == NULL){
    printf("Falha ao realocar memoria.");
    return;
  }

}

int main(){

  Aluno *aluno;
  int quantidadeAlunos = 1;

  aluno = (Aluno*) malloc(quantidadeAlunos * sizeof(Aluno));

  criarAluno(aluno, "Claudio", "Corrente");

  printf("%s", aluno->cidade);

  limparAluno(aluno);

  return 0;
}
