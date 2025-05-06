#include <stdio.h>

int main(){

  float lista[5];
  int tamanho1 = sizeof(lista)/sizeof(lista[0]);
  int loop = 0;
  float media, soma = 0;

  do{
    
    float nota = 0;
    loop++;

    printf("%i° nota -> ", loop);
    scanf("%f", &nota);
    while(getchar() != '\n'){}

    while(nota < 1 || nota > 10){
      printf("Nota inválida. Digite novamente.\n");
      printf("%i° nota -> ", loop);
      scanf("%f", &nota);
      while(getchar() != '\n'){}
    }

    soma += nota;

    lista[loop - 1] = nota;

    for(int i = 0; i < tamanho1; i++){
      printf("%.2f ", lista[i]);
    }
    
    printf("\n\n");

  } while(loop < tamanho1);

  media = soma / tamanho1;

  printf("\nSoma das notas: %.2f\n", soma);
  printf("Média das notas: %.2f\n", media);

  return 0; 

}
