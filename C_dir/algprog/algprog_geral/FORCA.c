#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void limpar_buffer();
bool letra_presente(char chute, char palavra[]);
bool letra_repetida(char chute, char charSet[]);
void mostrar_charSet(char charSet[]);
void atualizar_charSet(char chute, char word[], char charSet[]);
void escolher_palavra(char rWord[]);
void desenhar_menu(int V, int D);
void desenhar_Vitoria(char rWord[]);
void desenhar_Derrota(char rWord[]);
void desenhar_forca(int tentativas); // implementar depois
void jogo(int V_D[2]);

int main(){

  srand(time(NULL));

  char rWord[20];
  int partidas = 0;
  int V_D[] = {0, 0};
  int opt;
  bool jogando = true;

  while(jogando){
    opt = 0;

    desenhar_menu(V_D[0], V_D[1]); 

    printf("--> ");
    scanf("%i", &opt);
    limpar_buffer();

    switch(opt){
      case 1: jogo(V_D); partidas++; break;
      case 2: jogando = false; break;
      default: system("clear"); printf("Opção inválida.\n");
    }

  }

  return 0;
}

void limpar_buffer(){
  while(getchar() != '\n'){}
}

bool letra_presente(char chute, char palavra[]){

  int size = strlen(palavra);
  int presente = false;

  for(int i = 0; i < size; i++){
    if(palavra[i] == chute){
      presente = true;
      break;
    }
  }

  return presente;
}

bool letra_repetida(char chute, char charSet[]){

  int size = strlen(charSet);
  int presente = false;

  for(int i = 0; i < size; i++){
    if(charSet[i] == chute){
      presente = true;
      break;
    }
  }

  return presente;
}

void mostrar_charSet(char charSet[]){
  
  int size = strlen(charSet);

  for(int i = 0; i < size; i++){
    printf("%c ", charSet[i]);
  }

}

void atualizar_charSet(char chute, char word[], char charSet[]){

  int size = strlen(word);

  for(int i = 0; i < size; i++){
    if(chute == word[i]){
      charSet[i] = chute;
    }
  }
}

void escolher_palavra(char rWord[]){

  char kWords[][20] = {"GATO", "MACACO", "PEIXE", "MORCEGO", "CACHORRO", "MICO", 
                       "AGUIA", "HIPOPOTAMO", "LEOPARDO", "CABRA", "GALINHA", "PORCO",
                       "OVELHA", "LEAO", "VACA", "COELHO", "TARTARUGA", "RAPOSA", "TATU"};
  int words = sizeof(kWords) / sizeof(kWords[0]);

  int randNum = (rand() % words);

  strcpy(rWord, kWords[randNum]);
}

void desenhar_menu(int V, int D){

  printf("+-----------------------------------+\n");
  printf("|                                   |\n");
  printf("|        JOGO DA FORCA EM C         |\n");
  printf("|                                   |\n");
  printf("|         %2i Vitória/s              |\n", V);
  printf("|         %2i Derrota/s              |\n", D);
  printf("|                                   |\n");
  printf("|       1. Jogar   2. Sair          |\n");
  printf("|                                   |\n");
  printf("+-----------------------------------+\n");

}

void jogo(int V_D[2]){

  bool partida = true;
  char chute;
  int tentativas = 5;
  char palavra[20];
  escolher_palavra(palavra);
  int plvSize = strlen(palavra);
  char charSet[plvSize];

  for(int i = 0; i < plvSize; i++){
    charSet[i] = '_';
  }
  charSet[plvSize] = '\0';

  system("clear");

  while(partida){


    if(tentativas == 0){
      partida = false;
      V_D[1]++;
      desenhar_Derrota(palavra);
      break;
    }

    printf("[ ");
    for(int i = 1; i <= 5; i++){
      if(i <= tentativas){
        printf("@ ");
      } else{
        printf("_ ");
      }
    }
    printf("]\n\n");

    mostrar_charSet(charSet);

    printf("\n\n--> ");
    scanf("%c", &chute);
    chute = toupper(chute);
    limpar_buffer();

    bool ltrPresente = letra_presente(chute, palavra);
    bool ltrRepetida = letra_repetida(chute, charSet);

    if(ltrRepetida){
      system("clear");
      printf("Letra já inserida.\n\n");
      continue;
    }

    atualizar_charSet(chute, palavra, charSet);

    system("clear");


    if(!ltrPresente){
      tentativas--;
    }

    bool csComp = true;
    for(int i = 0; i < plvSize; i++){
      if(charSet[i] == '_'){
        csComp = false;
        break;
      }
    }

    if(csComp){
      V_D[0]++;
      partida = false;
      desenhar_Vitoria(palavra);
      break;
    }
  }

}
                  
void desenhar_Vitoria(char rWord[]){

  printf("+------------------------+\n");
  printf("|       Vitória!!        |\n");
  printf("|                        |\n");
  printf("| A palavra secreta era: |\n");
  printf("        %s\n", rWord);
  printf("|                        |\n");
  printf("+------------------------+\n");
  printf("==========================\n");

}

void desenhar_Derrota(char rWord[]){

  printf("+------------------------+\n");
  printf("|       Derrota!!        |\n");
  printf("|                        |\n");
  printf("| A palavra secreta era: |\n");
  printf("        %s\n", rWord);
  printf("|                        |\n");
  printf("+------------------------+\n");
  printf("==========================\n");

}
