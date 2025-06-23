/*
 Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiúscula ou minúscula).
*/

#include <stdio.h>
#include <string.h>

int main(){

  char string[50];

  printf("Insira o nome --> ");
  fgets(string, 50, stdin);
  string[strlen(string) - 1] = '\0';

  if(string[0] == 'a' || string[0] == 'A'){
      printf("-> %s <-", string);
  } else{
      printf("O nome não começa com 'A'.");
  }

  return 0;
}
