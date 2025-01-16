/*
Considerando listas de valores inteiros, implemente uma função que receba como parâmetro uma
lista encadeada e um valor inteiro n e divida a lista em duas, de tal forma que a segunda lista
comece no primeiro nó logo após a primeira ocorrência de n na lista original. A figura a seguir
ilustra essa separação:
Essa função deve obedecer ao protótipo:
Lista* separa (Lista* l, int n);
A função deve retornar um ponteiro para a segunda sub-divisão da lista original, enquanto l deve continuar apontando para o primeiro elemento da primeira sub-divisão da lista.
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
void limpaLista(No* l){
  while(l!=NULL){
    No* t = l->prox;
    free(l);
    l = t;
  }
  free(l);
}
No* separa(No* l, int n){
  No* t = l;
  No* nl = NULL;
  while(t!=NULL){
    if(t->v==n){
      nl = t->prox;
      t->prox = NULL;
      return nl;
    }
    t = t->prox;
  }
  return nl;
}
void printarLista(No* l ){
  No* p = l;
  while(p!=NULL){
    printf("%d -> ",p->v);
    p = p->prox;
  }
  printf("NULL\n");
}
int main(){
  No* l = criaLista();
  l = criaNo(l,1);
  l = criaNo(l,12);
  l = criaNo(l,5);
  l = criaNo(l,17);
  l = criaNo(l,3);
  
  No* ln = separa(l,5);

  printarLista(l);
  printarLista(ln);

  limpaLista(l);
  limpaLista(ln);

  return 0;
}