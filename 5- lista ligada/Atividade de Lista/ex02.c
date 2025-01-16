/*
Considere listas encadeadas de valores inteiros e implemente uma função para retornar o número
de nós da lista que possuem o campo INFO com valores maiores do que N. Essa função deve
obedecer o protótipo:
int maiores (Lista* l, int n);

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
int maiores(No* l, int n){
  int q = 0;
  No* p = l;
  while(p!=NULL){
   if(p->v > n) q++;
    p = p->prox;
  }
  return q;
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

  printf("Maiores = %d",maiores(l,25));
  limpaLista(l);
  return 0;
 }