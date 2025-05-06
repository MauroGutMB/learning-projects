#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  srand(time(NULL));

  int chao, teto;

  printf("Selecione o menor número possível --> ");
  scanf("%i", &chao);
  while(getchar() != '\n'){}

  printf("Selecione o maior número possível --> ");
  scanf("%i", &teto);
  while(getchar() != '\n'){}
  if(teto < chao){
    int troca = chao;
    chao = teto;
    teto = troca;
  }

  int numero = (rand() % (teto - chao + 1)) + chao;
  int maior = teto, menor = chao;
  int palpites = 0;
  int chute;

  printf("+------------------------+\n");
  printf("| Advinhador de números  |\n");
  printf("|                        |\n");
  printf("| Um número aleatório de |\n"); 
  printf("| %3i a %3i foi definido |\n", chao, teto);
  printf("|                        |\n");
  printf("|     Dê um palpite!     |\n");
  printf("+------------------------+\n");

  while(chute != numero){

    palpites++;

    printf("\nNúmero --> ");
    scanf("%i", &chute);
    while(getchar() != '\n'){}

    if(chute < chao || chute > teto){
      system("clear");

      printf("+------------------------+\n");
      printf("|   Número inválido!!!   |\n");
      printf("|                        |\n"); 
      printf("|    Tente novamente     |\n");
      printf("|                        |\n");
      printf("| Menor tentativa:  %3i  |\n", menor); 
      printf("| Maior tentativa:  %3i  |\n", maior); 
      printf("+------------------------+\n");

      palpites--;

    } else if(chute < numero){
      system("clear");

      menor = (chute > menor && chute < numero) ? chute : menor;

      printf("+--------------------------+\n");
      printf("| O número é maior que %3i!|\n", chute);
      printf("|                          |\n"); 
      printf("|   Menor tentativa:  %3i  |\n", menor); 
      printf("|                          |\n");
      printf("|   Maior tentativa:  %3i  |\n", maior); 
      printf("|                          |\n");
      printf("+--------------------------+\n");
    } else if(chute > numero){
      system("clear");

      maior = (chute < maior && chute > numero) ? chute : maior;

      printf("+--------------------------+\n");
      printf("| O número é menor que %3i!|\n", chute);
      printf("|                          |\n"); 
      printf("|   Menor tentativa:  %3i  |\n", menor); 
      printf("|                          |\n");
      printf("|   Maior tentativa:  %3i  |\n", maior); 
      printf("|                          |\n");
      printf("+--------------------------+\n");
    } else {
      system("clear");

      printf("+------------------------+\n");
      printf("|     Você acertou!!!    |\n");
      printf("|                        |\n"); 
      printf("|   Número:   %3i        |\n", numero); 
      printf("|                        |\n"); 
      printf("| Total de Palpites: %3i |\n", palpites);
      printf("|                        |\n");
      printf("+------------------------+\n");
    }
  }
}
