/*
 * 1) Considere uma estrutura para representar um ponto no espaço 2D e implemente uma função que indique se um dado
 * ponto 'p' está localizado dentro ou fora de um retângulo. O retângulo é definido por seus vértices inferior
 * esquerdo 'v1' e superior direto 'v2'.
 * A função deve retornar 1 caso o ponto esteja localizado dentro do retângulo, e 0 caso contrário.
 * Esta função deve ter como protótipo:
 *    int dentroRet(Ponto *v1, Ponto *v2, Ponto *p);
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int v1;
  int v2;
} Ponto;

void iniciarPonto(Ponto *ponto, int v1, int v2){
  ponto->v1 = v1;
  ponto->v2 = v2;
}

void liberarPonto(Ponto *ponto){
  if(ponto == NULL){
    return;
  }
  free(ponto);
}

int dentroRet(Ponto *v1, Ponto *v2, Ponto *p);

int main(){

  Ponto *p1;
  p1 = (Ponto*) malloc(sizeof(Ponto));

  iniciarPonto(p1, 1, 10);

  printf("%i\n", p1->v1);
  printf("%i\n", p1->v2);

  liberarPonto(p1);

  return 0;
}

