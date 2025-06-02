#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[1024];
  int idade;
  char emprego[1024];
} Pessoa;

int main(){

  int qtdd_pessoas;

  printf("Insira uma quantidade de pessoas que você quer cadastrar --> ");
  scanf("%i", &qtdd_pessoas);
  while (getchar() != '\n') {}

  Pessoa pessoas[qtdd_pessoas];

  for (int i = 0; i < qtdd_pessoas; i++ ){

    printf("\n");
    printf("Insira o nome da pessoa %i. --> ", i+1);
    fgets(pessoas[i].nome, 1024, stdin);
    pessoas[i].nome[strlen(pessoas[i].nome)-1] = '\0';

    printf("Digite a idade da pessoa %i. --> ", i+1);
    scanf("%i", &pessoas[i].idade);
    while(getchar() != '\n'){}

    printf("Insira o emprego da pessoa %i. --> ", i+1);
    fgets(pessoas[i].emprego, 1024, stdin);
    pessoas[i].emprego[strlen(pessoas[i].emprego)-1] = '\0';
  }

  for (int i = 0; i < sizeof(pessoas)/sizeof(pessoas[0]); i++){
    printf("\n");
    printf("Pessoa %i;\nNome: %s\nIdade: %i\nEmprego: %s\n", i+1, pessoas[i].nome, pessoas[i].idade, pessoas[i].emprego);
  }
}
