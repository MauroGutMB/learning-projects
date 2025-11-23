#include <stdlib.h>
#include <stdio.h>
#include "dlk.h"

// ----------------------------------- //
// --------- Estrutura --------------- //
typedef struct dlk {
  int valor;
  struct dlk *anterior;
  struct dlk *proximo;
} dlk;

// ----------------------------------- //
// ------------- Funções ------------- //


dlk* criar_dlk(int v){
  dlk *l = (dlk*)malloc(sizeof(dlk));
  if(l == NULL) return  NULL;

  l->valor = v;
  l->anterior = NULL;
  l->proximo = NULL;

  return l;
}

dlk* inserir_no(dlk* l, int v){
  dlk* nl = criar_dlk(v);

  nl->valor = v;
  nl->proximo = l;
  nl->anterior = NULL;

  l->anterior = nl;
  
  return nl;
}

void dlk_liberar(dlk* l){
  if(l->proximo == NULL){
    free(l);
    return;
  }
  dlk_liberar(l->proximo);
  free(l);
}

void imprimir_dlk(dlk* l){
  if(l->proximo == NULL){
    printf("%i", l->valor);
    return;
  }
  printf("%i -> ", l->valor);
  imprimir_dlk(l->proximo);
}

void imprimir_reverso_dlk(dlk* l){
  dlk* tdlk = l;
  while(tdlk->proximo != NULL){
    tdlk = tdlk->proximo;
  }

  while(tdlk->anterior != NULL){
    printf("%i -> ", tdlk->valor);
    tdlk = tdlk->anterior;
  }
  printf("%i", tdlk->valor);
}

dlk* dlk_remover(dlk* l, int v){
  dlk* tl = l;
  while(tl->valor != v){
    if(tl->proximo == NULL && tl->valor != v){
      printf("Valor não encontrado.\n");
      return l;
    }
    tl = tl->proximo;
  }


  if(tl->anterior == NULL){
    tl->proximo->anterior = NULL;
    dlk* tdlk = tl->proximo;
    free(tl);
    return tdlk;
  }
  if(tl->proximo == NULL){
    tl->anterior->proximo = NULL;
    free(tl);
    return l;
  }

  tl->anterior->proximo = tl->proximo;
  tl->proximo->anterior = tl->anterior;
  free(tl);

  return l;
}
