#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  srand(time(NULL));

  int numero = rand() % 100 + 1;
  int palpites = 0;
  int chute;
  int maior = 100, menor = 0;

  printf("+------------------------+\n");
  printf("| Advinhador de números  |\n");
  printf("|                        |\n");
  printf("| Um número aleatório de |\n"); 
  printf("|  1 a 100 foi definido  |\n");
  printf("|                        |\n");
  printf("|     Dê um palpite!     |\n");
  printf("+------------------------+\n");

  while(chute != numero){

    palpites++;

    printf("\nNúmero --> ");
    scanf("%i", &chute);
    while(getchar() != '\n'){}

    if(chute < 1 || chute > 100){
      system("clear");

      printf("+------------------------+\n");
      printf("|   Número inválido!!!   |\n");
      printf("|                        |\n"); 
      printf("|    Tente novamente     |\n");
      printf("|                        |\n");
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
