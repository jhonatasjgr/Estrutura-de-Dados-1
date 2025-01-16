/*
Implemente uma função que tenha como valor de retorno o ponteiro para o último nó de uma lista
encadeada. Essa função deve obedecer ao protótipo:
Lista* ultimo (Lista* l);
 */
 #include <stdio.h>
 #include <stdlib.h>

 typedef struct No{
  int v;
  struct No* prox;
 }No;

No* criaLista(){
  return NULL;
}
No* criaNo(No *l, int v){
 No* newNo = (No *) malloc(sizeof(No));
  newNo->v = v;
  newNo->prox = l;
  return newNo;
  
}
No* ultimo(No* l){
  No* t = l;
  while(1){
    if(t->prox == NULL) return t;
    t = t->prox;
  }
}
void limpaLista(No* l){
  while(l!=NULL){
    No* t = l->prox;
    free(l);
    l = t;
  }
  free(l);
}
 int main(){
  No* l = criaLista();
  l = criaNo(l,25);
  l = criaNo(l,35);
  No* ul = criaLista();
  ul = ultimo(l);
  printf("Ultimo = %d",ul->v);
  limpaLista(l);
  return 0;
 }