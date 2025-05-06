#include <stdio.h>
#include <string.h>

#define BUFFER 100

void mostrar_medir_string(char string[BUFFER]);

int main(){

  char palavra[BUFFER];

  printf("Insira um texto curto:\n");
  fgets(palavra, sizeof(palavra), stdin);

  palavra[strlen(palavra)-1] = '\0';

  mostrar_medir_string(palavra);

  return 0;
}

void mostrar_medir_string(char string[BUFFER]){

  int caracteres = 0;
  int tam_arg = strlen(string);

  for(int i = 0; i < tam_arg; i ++){
    if(string[i] == 0 || string[i] == 32){
      continue;
    }

    caracteres ++;

  }

  printf("\nPalavra: %s", string);
  printf("\nTamanho real da palavra: %i", tam_arg);
  printf("\nQuantidade de Caracteres válidos: %i", caracteres);

}
