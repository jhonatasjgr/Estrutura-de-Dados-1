#include "lista.h"
#include "listaAula.c"
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
  int info;
  struct lista *prox;
} Lista;

Lista *cria_lista(){
  return NULL;
}

Lista* lista_insere(Lista *l, int i){
  Lista *novo = (Lista*) malloc(sizeof(Lista));
  novo->info = i;
  novo->prox = l;
  return novo;
}
void lista_imprime(Lista *l){
  if(l==NULL){
    printf("Lista vazia");
    return ;
  }

  Lista *temp = l;
  while(temp!=NULL){
    printf("%d -> ",temp->info);
    temp = temp->prox;
  }
  printf("null");
}

