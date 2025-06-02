#include <stdio.h>
#include <string.h>

void limpar_buffer(){
  while(getchar() != '\n'){}
}

int main(){

  struct Aluno{
    char nome[40];
    int idade;
    float notas[4];
    float media;
    char aval;
  };

  int nAlunos;

  printf("Quantos alunos você possui? --> ");
  scanf("%i", &nAlunos);

  struct Aluno alunos[nAlunos];
  int tam = sizeof(alunos) / sizeof(alunos[0]); 

  for(int i = 0; i < tam;  i++){
    char tempNome[40];
    int tempIdade;
    float tempMedia = 0;

    printf("Insira o nome do Aluno n°%i --> ", i + 1);
    scanf("%s", tempNome);
    limpar_buffer();
    strcpy(alunos[i].nome, tempNome);

    printf("Insira a Idade do aluno n°%i --> ", i + 1);
    scanf("%i", &tempIdade);
    limpar_buffer();
    alunos[i].idade = tempIdade;

    for(int n = 0; n < 4; n++){
      float tempNota;
      
      printf("Insira a %i° nota do aluno %s --> ", n + 1, alunos[i].nome);
      scanf("%f", &tempNota);
      limpar_buffer();

      alunos[i].notas[n] = tempNota;
    }

    for(int m = 0; m < 4; m++){
      tempMedia += alunos[i].notas[m];
    }
    
    alunos[i].media = tempMedia / 4;

    if(alunos[i].media <= 4){ alunos[i].aval = 'D'; }
    if(alunos[i].media > 4){ alunos[i].aval = 'C'; }
    if(alunos[i].media > 6){ alunos[i].aval = 'B'; }
    if(alunos[i].media >= 9){ alunos[i].aval = 'A'; }

    printf("\n");

  }

  for(int i = 0; i < tam; i++){
    printf("Nome do aluno n°%i -> %s\n", i + 1, alunos[i].nome);
    printf("média -> %.2f\n", alunos[i].media);
    printf("notas: ");
    for(int n = 0; n < 4; n++){
      printf("%.2f ", alunos[i].notas[n]);
    }
    printf("\n");
    printf("Avaliação: %c", alunos[i].aval);
    printf("\n\n");
  }

  return 0;
  
}
