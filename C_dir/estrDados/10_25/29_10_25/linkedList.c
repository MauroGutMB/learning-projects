#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList {
  int valor;
  struct LinkedList *proximo;
} LinkedList;

// ----------------------------------------------------------------- //
LinkedList *criarNode(int valor);
LinkedList* pushNode(int valor, LinkedList* node);
LinkedList* popNode(LinkedList* lista);
void limparLista(LinkedList *lista);
void showLinkedList(LinkedList *lista);
// ----------------------------------------------------------------- //

int main() {

  LinkedList *p1;
  
  // p1 = criarNode(5); // primeiro elemento
  p1 = NULL;

  p1 = pushNode(10, p1);
  p1 = pushNode(15, p1);
  p1 = pushNode(20, p1);
  p1 = pushNode(25, p1);
  // p1 = popNode(p1);
  // p1 = popNode(p1);
  // p1 = popNode(p1);


  showLinkedList(p1);
  limparLista(p1);

  return 0;
}

// ----------------------------------------------------------------- //

// Criar node
LinkedList *criarNode(int valor){
  LinkedList *node;
  node = (LinkedList *)malloc(sizeof(LinkedList));

  if (node == NULL) {
    printf("Falha ao criar nó");
    exit(1);
  }

  node->valor = valor;
  node->proximo = NULL;

  return node;
}

// adicionar nós à LinkedList
LinkedList* pushNode(int valor, LinkedList* node){

  LinkedList* newNode;
  newNode = criarNode(valor);

  newNode->proximo = node;

  return newNode;
}

// Free nos ítems da lista e seus sucessores
void limparLista(LinkedList *lista) {
  if (lista->proximo != NULL) {
    limparLista(lista->proximo);
  }
  // printf("\nÍtem limpo: %i", lista->valor);
  free(lista);
}

// imprimir todos os elementos da lista
void showLinkedList(LinkedList *lista) {
  if (lista->proximo == NULL){
    printf("%i ", lista->valor);
    return;
  }
  printf("%i -> ", lista->valor);
  showLinkedList(lista->proximo);
}

// pop no primeiro elemento da lk
LinkedList* popNode(LinkedList* lista){
  LinkedList* nextNode;
  nextNode = (LinkedList*) malloc(sizeof(LinkedList));

  nextNode->valor = lista->proximo->valor;
  nextNode->proximo = lista->proximo->proximo;

  free(lista);

  return nextNode;
}

// remover elemento específico, caso esteja
LinkedList* removeNode(LinkedList* lista, int valor){

  // TODO

  return NULL;
}
