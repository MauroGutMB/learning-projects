#include <stdio.h>

void mostrarVetor(float vetor[], int size);
void organizarCrescente(float vetor[], int size);

int main(){

  int t1, t2, t3;

  printf("Defina o tamanho do primeiro vetor --> ");
  scanf("%i", &t1);

  float vetor1[t1];

  for(int i = 0; i < t1; i++){
    printf("Defina o elemento %i do primeiro vetor --> ", i + 1);
    scanf("%f", &vetor1[i]);
  }

  mostrarVetor(vetor1, t1);

  printf("Defina o tamanho do segundo vetor --> ");
  scanf("%i", &t2);

  float vetor2[t2];

  for(int i = 0; i < t2; i++){
    printf("Defina o elemento %i do segundo vetor --> ", i + 1);
    scanf("%f", &vetor2[i]);
  }

  mostrarVetor(vetor2, t2);


  t3 = t1 + t2;

  float vetor3[t3];

  for(int i = 0; i < t1; i++){
    vetor3[i] = vetor1[i];
  }
  for(int i = t1, aux = 0; i < t3; i++, aux++){
    vetor3[i] = vetor2[aux];
  }

  printf("Junção dos vetores em ordem crescente:\n");
  
  organizarCrescente(vetor3, t3);
  mostrarVetor(vetor3, t3);

  return 0;
}

void mostrarVetor(float vetor[], int size){

  printf("\n[");
  for(int i = 0; i < size; i++){
    printf("%.2f", vetor[i]);
    if(i < size - 1){
      printf(", ");
    }
  }
  printf("]\n\n");

}

void organizarCrescente(float vetor[], int size){

  for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      if(vetor[i] < vetor[j]){
        float temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
      }
    }
  } 

}
