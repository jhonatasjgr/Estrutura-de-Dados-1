// #include "lista.h"
// #include "lista.c"
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
    printf("\nLista vazia");
    return ;
  }

  Lista *temp = l;
  while(temp!=NULL){
    printf("%d -> ",temp->info);
    temp = temp->prox;
  }
  printf("null");
}
int lista_vazia(Lista *l){
  if(l==NULL) return 1;
  return 0;
}
Lista* lista_busca(Lista *l, int v){
  Lista *temp = l;
  while(temp!=NULL){
    if(temp->info == v) return temp;
    temp = temp->prox;
  }
  return NULL;
}
void lista_libera(Lista *l){
  Lista *temp = l;
  while(temp!=NULL){
      Lista *x = temp->prox; //x = proximo elemento
      free(temp);
      temp = x;
  }
  // free(temp);
}
Lista *lista_retira(Lista *l, int v){
    Lista *t = l;
    while(t != NULL){
      if(t->prox->info==v){
        Lista *x = t->prox->prox;
        printf("\n%d retirado",t->prox->info);
        free(t->prox);
        t->prox = x;
      }
      t = t->prox;
    }
    return l;
}
int main(){
  Lista *l = cria_lista();
  l = lista_insere(l, 10);
  l = lista_insere(l, 20);
  l = lista_insere(l, 30);
  l = lista_insere(l, 40);
  lista_imprime(l);
  //printf("\nLista vazia %d\n",lista_vazia(l));
  //printf("\nLista busca %d\n",lista_busca(l,30)->info);
  
  l = lista_retira(l,30);
  lista_imprime(l);

  return 0;
}