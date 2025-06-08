/* 
  Fazer um algoritmo que: Leia um vetor contendo 10 números, que correspondem a matrículas de alunos. 
  Ler 3 matrículas e imprima uma mensagem informando se eles estão ou não presentes no vetor.
*/

#include <stdio.h>

void mostrarVetor(int arr[], int size);

int main(){

  int matriculas[10];
  int verif_matrs[3];
  int presentes[] = {0, 0, 0};

  for(int i = 0; i < 10; i++){
    printf("Digite a matrícula do aluno %i --> ", i + 1);
    scanf("%i", &matriculas[i]);
  }

  for(int i = 0; i < 3; i++){
    printf("Verifique uma matrícula --> ");
    scanf("%i", &verif_matrs[i]);
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 10; j++){
      if(verif_matrs[i] == matriculas[j]){
        presentes[i] = 1;
      }
    }
  }

  int todos_presentes = (presentes[0] == 1 && presentes[1] == 1 && presentes[2] == 1);
  int nenhum_presente = (presentes[0] == 0 && presentes[1] == 0 && presentes[2] == 0);
  int alguns_presentes = (nenhum_presente == 0 && todos_presentes == 0);

  mostrarVetor(presentes, 3);

  if(todos_presentes){
    printf("Todas as matrículas verificadas estão presentes.");
  } else if(nenhum_presente){
    printf("Nenhuma das matrículas verificadas estão presentes.");
  } else if(alguns_presentes){
    printf("Algumas das matrículas verificadas estão presentes.");
  }

  return 0;

}

void mostrarVetor(int arr[], int size){
  printf("[");
  for(int i = 0; i < size; i++){
    printf("%i", arr[i]);
    if(i < size - 1){
      printf(", ");
    }
  }
  printf("]\n");
}
