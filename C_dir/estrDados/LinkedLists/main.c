#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){

  LinkedList* p1 = NULL;
  LinkedList* p2 = NULL;
  LinkedList* p3 = NULL;

  p1 = pushNode(5, p1);
  p1 = pushNode(10, p1);
  p1 = pushNode(15, p1);
  p1 = pushNode(20, p1);
  p1 = pushNode(25, p1);


  showLinkedList(p1);

  limparLista(p1);

  return 0;
}
