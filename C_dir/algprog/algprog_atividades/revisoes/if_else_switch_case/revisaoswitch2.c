#include <stdio.h>

// Mensagem de acordo com as notas A, B, C, D, E ou F

int main(){

  char nota;

  printf("Insira a classificação da nota do aluno: ");
  scanf("%c", &nota);

  switch (nota){
    case 'A':
      printf("O aluno fez uma prova perfeita.");
      break;
    case 'B':
      printf("O aluno foi Excelente.");
      break;
    case 'C':
      printf("O aluno foi Bem.");
      break;
    case 'D':
      printf("O aluno foi Razoável.");
      break;
    case 'E':
      printf("O aluno fez uma prova ruim.");
      break;
    case 'F':
      printf("O aluno fez uma péssima prova.");
      break;
    default:
      printf("Nota inválida. Insira apenas notas de A à F com letra maiúscula.");
  }
}
