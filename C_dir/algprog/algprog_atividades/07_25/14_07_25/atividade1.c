#include <stdio.h>

#define tamanho 100

void contar_linhas(FILE *arquivo);
void ler(FILE *arquivo, char buffer[tamanho]);
void escrever(FILE *arquivo);
void apagar_linha(int linha, FILE *arquivo);

int linhas_arq = 0;

int main(){

  FILE *arq;
  char buffer[tamanho];

  // escrever(arq);
  // ler(arq, buffer);
  apagar_linha(1, arq);

  return 0;
}

void contar_linhas(FILE *arquivo){

  char tempBuff[tamanho];
  arquivo = fopen("arquivo1.txt", "r");
  
  while(fgets(tempBuff, tamanho, arquivo) != NULL){
    linhas_arq++;
  }

  fclose(arquivo);
}

void ler(FILE *arquivo, char buffer[tamanho]){

  arquivo = fopen("arquivo1.txt", "r");
  int l = 0;

  while(fgets(buffer, tamanho, arquivo) != NULL){
    l++;
    printf("%i = %s", l, buffer);
  }

  fclose(arquivo);
}


void escrever(FILE *arquivo){

  char tempBuff[tamanho];
  
  arquivo = fopen("arquivo1.txt", "a");

  printf("--> ");
  fgets(tempBuff, tamanho, stdin);

  fputs(tempBuff, arquivo);

  fclose(arquivo);
}

void apagar_linha(int linha, FILE *arquivo){

  FILE *tmpArq;
  char tempBuff[tamanho];
  arquivo = fopen("arquivo1.txt", "r");
  tmpArq = fopen("temp.txt", "w");
  int l = 0;

  while(fgets(tempBuff, tamanho, arquivo) != NULL){
    l++;
    if(l == linha) continue;
    fputs(tempBuff, tmpArq);
  }

  while(fgets(tempBuff, tamanho, tmpArq) != NULL){
    fputs(tempBuff, arquivo);
  }

  fclose(tmpArq);
  remove("temp.txt");
  fclose(arquivo);
}
