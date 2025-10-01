/*
4. Crie uma função recursiva que receba uma string e um caractere, retornando
quantas vezes esse caractere aparece na string. Exemplo: "banana" e 'a' → 3.
*/

#include <stdio.h>

int countChar(char *str, char c) {

  if (*str == '\0') {
    return 0;
  }

  if (*str == c) {
    return 1 + countChar(str + 1, c);
  }

  return countChar(str + 1, c);
}

int main() {

  char string[50];
  char c;

  scanf("%s", string);
  while(getchar() != '\n'){}
  scanf("%c", &c);
  while(getchar() != '\n'){}


  int x = countChar(string, c);
  printf("%i", x);

  return 0;
}
