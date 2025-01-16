/*
Implemente uma função que tenha como valor de retorno o comprimento de uma lista encadeada, isto é, que calcule o número de nós de uma lista. Essa função deve obedecer o protótipo:
int comprimento (Lista* l);
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
int tamLista(No* l){
  int t = 0;
  No* p = l;
  while(p!=NULL){
    t++;
    p = p->prox;
  }
  return t;
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

  printf("Tam = %d",tamLista(l));
  limpaLista(l);
  return 0;
 }