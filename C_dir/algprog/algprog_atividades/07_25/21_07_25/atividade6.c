/*
6)     Construa uma estrutura Funcionário com nome, número de matrícula, tempo de serviço, idade e CPF. 
Leia do usuário a informação de 3 funcionários, armazene em vetor dessa estrutura e imprima na tela o nome do funcionário 
com mais tempo de serviço na empresa.
*/

#include <stdio.h>
#include <string.h>

#define T_NOME 20
#define T_CPF 11

typedef struct{
  char nome[T_NOME];
  int matricula;
  int tempo_servico; // Anos
  int idade;
  char cpf[T_CPF];
} Funcionario;

void limpar_buffer(){
  while(getchar() != '\n'){}
}

int main(){

  int n = 3;

  Funcionario funcionarios[n];

  for(int i = 0; i < n; i++){
    printf("Nome do %i° F. --> ", i+1);
    fgets(funcionarios[i].nome, T_NOME, stdin);
    funcionarios[i].nome[strlen(funcionarios[i].nome) - 1] = '\0';

    printf("Matricula do %i° F. --> ", i+1);
    scanf("%i", &funcionarios[i].matricula);
    limpar_buffer();

    printf("Tempo de serviço (Anos) do %i° F. --> ", i+1);
    scanf("%i", &funcionarios[i].tempo_servico);
    limpar_buffer();

    printf("Idade do %i° F. --> ", i+1);
    scanf("%i", &funcionarios[i].idade);
    limpar_buffer();

    printf("CPF do %i° F. --> ", i+1);
    fgets(funcionarios[i].cpf, T_CPF, stdin);
    funcionarios[i].cpf[strlen(funcionarios[i].cpf) - 1] = '\0';

    printf("\n\n");
  }

  int maior_tempo = funcionarios[0].tempo_servico;
  int indice_maior_tempo = 0;
  for(int i = 1; i < n; i++){
    if(funcionarios[i].tempo_servico > maior_tempo){
      maior_tempo = funcionarios[i].tempo_servico;
      indice_maior_tempo = i;
    }
  }
  printf("Funcionário com mais tempo de serviço:\n");
  printf("Nome: %s\n", funcionarios[indice_maior_tempo].nome);


  return 0;
}
