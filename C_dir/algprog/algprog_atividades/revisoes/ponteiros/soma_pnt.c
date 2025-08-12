#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <time.h>

int ponteiro_alterado(int *nPtr);

int main(){

  srand(time(NULL));

  int n;
  int *Pn = &n;

  printf("Insira um valor em n -> ");
  scanf("%i", Pn);

  printf("%i", n);

  int mudanca_concluida = (ponteiro_alterado(Pn));

  printf("\n%i", n);

  printf("\n\nCódigo de mudança -> %i", mudanca_concluida);

}

int ponteiro_alterado(int *nPtr){

  int sucesso = -1;

  int novo_num = (rand() % 10) + 1;
  *nPtr = novo_num;

  sucesso = 1;

  return sucesso;
}
