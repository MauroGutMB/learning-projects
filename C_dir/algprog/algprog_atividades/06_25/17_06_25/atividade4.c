/*
 Faca um programa que receba do usuário uma string. O programa imprime a string sem suas vogais.
*/ 

#include <stdio.h>
#include <string.h>

int main(){

  char string[50];

  printf("Insira a string --> ");
  fgets(string, 50, stdin);

  string[strlen(string) - 1] = '\0';

  for(int i = 0; i < strlen(string); i++){
    int cond = (string[i] == 'a' || string[i] == 'A' || string[i] == 'e' || string[i] == 'E' || string[i] == 'i' || string[i] == 'I' || 
                string[i] == 'o' || string[i] == 'O' || string[i] == 'u' || string[i] == 'U');
    if(!cond){
      printf("%c", string[i]);
    }
  }

  return 0;
}
