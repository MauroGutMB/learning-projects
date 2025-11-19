#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct LinkedList {
  int valor;
  struct LinkedList *proximo;
} LinkedList;

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

// remover elemento específico
LinkedList* removeNode(LinkedList* lista, int valor){

  // TODO

  return NULL;
}

// ATIVIDADE A PARTIR DAQUI => 14/11/25

// 1
int comprimento(LinkedList* l){
  int ct = 0;
  LinkedList* l2 = l;
  while(l2 != NULL){
    ct++;
    l2 = l2->proximo;
  }
  return ct;
}

// 2
int maiores(LinkedList* l, int n){
  LinkedList* l2 = l;
  int ct = 0;
  while(l2 != NULL){
    if(l2->valor > n)ct++;
    l2 = l2->proximo;
  }
  return ct;
}

// 3
LinkedList* separa(LinkedList* l, int n){
  LinkedList* lista = l;
  LinkedList* l2 = NULL;

  while(lista->valor != n && lista != NULL){
    lista = lista->proximo;
  }

  l2 = lista->proximo;

  lista->proximo = NULL;

  return l2;
}

// 4
LinkedList* ultimo(LinkedList* l){
  LinkedList* lt = l;
  while(lt->proximo != NULL){
    lt = lt->proximo;
  }
  return lt;
}

// 5
LinkedList* concatena (LinkedList* l1, LinkedList* l2){
  LinkedList* lf = l1;
  while(lf->proximo != NULL){
    lf = lf->proximo;
  }
  lf->proximo = l2;
  return lf;
}
