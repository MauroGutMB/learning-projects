#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogo(int robo, int jogador);
void pontuar(int result, int vde[3]);
void placar(int vde[3]);

int main(){

  char* escolhas[] = {"PEDRA", "PAPEL", "TESOURA"};
  int jogando = 1;
  int vde[3] = {0, 0, 0};

  while(jogando){

    srand(time(NULL));

    int jogador = 0;
    int robo = (rand() % 3) + 1;

    printf("+--------------------------+\n");
    printf("|  Pedra, Papel e Tesoura  |\n");
    printf("|   (1)    (2)      (3)    |\n");
    printf("|       4 para sair        |\n");
    printf("|    5 para ver o placar   |\n");
    printf("+--------------------------+\n");
    printf("\n\n");
    printf("Pedra, Papel ou Tesoura? --> ");
    scanf("%i", &jogador);

    while(getchar() != '\n'){}

    if(jogador == 4){
      jogando = 0;
      break;
    }

    if(jogador == 5){
      system("clear");
      placar(vde);
      continue;
    }

    if(jogador < 1 || jogador > 5){
      system("clear");
      printf("+--------------------------+\n");
      printf("|     Jogada Inválida!     |\n");
      printf("+--------------------------+\n\n\n");
      continue;
    }

    int result = jogo(robo, jogador);

    system("clear");

    pontuar(result, vde);

    printf("\nJOGADOR --- ROBÔ");
    printf("\n%3s <-> %3s\n", escolhas[jogador - 1], escolhas[robo - 1]);

  }

  system("clear");

  printf("+--------------------------+\n");
  printf("|                          |\n");
  printf("|   Obrigado por Jogar!    |\n");
  printf("|                          |\n");
  printf("|       PLACAR FINAL       |\n");
  printf("|Vitórias Derrotas Empates |\n");
  printf("|   %3i     %3i      %3i   |\n", vde[0], vde[1], vde[2]);
  printf("+--------------------------+\n");

  return 0;
}

int jogo(int robo, int jogador){

  // retorna 2 para empate, 1 para vitoria, 0 pra derrota

  if(robo == jogador)return 2;
  if(robo == 1 && jogador == 2)return 1;
  if(robo == 2 && jogador == 3)return 1;
  if(robo == 3 && jogador == 1)return 1;

  return 0;
}

void pontuar(int result, int vde[3]){

  switch(result){
    case 0:
      printf("Você PERDEU!\n\n");
      vde[1]++;
      break;
    case 1:
      printf("Você GANHOU!\n\n");
      vde[0]++;
      break;
    case 2:
      printf("Houve um EMPATE!\n\n");
      vde[2]++;
      break;
  }

}

void placar(int vde[3]){
  printf("+--------------------------+\n");
  printf("|          PLACAR          |\n");
  printf("|Vitórias Derrotas Empates |\n");
  printf("|   %3i     %3i      %3i   |\n", vde[0], vde[1], vde[2]);
  printf("+--------------------------+\n");
}
