#include <stdio.h>
#include <stdlib.h>

// implementando árvores binárias em C

typedef struct Node {
  int dado;
  struct Node* left;
  struct Node* right;
} Node;

// criar nós
Node* criarNo(int dado){
  Node* novoNo = (Node*)malloc(sizeof(Node));

  if(novoNo == NULL){
    printf("Erro ao criar nó.");
    exit(1);
  }

  novoNo->dado = dado;
  novoNo->left = NULL;
  novoNo->right = NULL;

  return novoNo;
}


// liberar uma raiz e seus sub nós
void freeTree(Node* arvore){
  if(arvore == NULL){
    return;
  }

  freeTree(arvore->left);
  freeTree(arvore->right);

  free(arvore);
}
