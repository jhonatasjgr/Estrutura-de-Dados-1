/*
Implemente uma função que receba duas listas encadeadas de valores reais e retorne a lista
resultante da concatenação das duas listas recebidas como parâmetros, isto é, após a concatenação,
o último elemento da primeira lista deve apontar para o primeiro elemento da segunda lista,
conforme ilustrado a seguir:
Essa função deve obedecer ao protótipo:
Lista* concatena (Lista* l1, Lista* l2);
*/

 #include <stdio.h>
 #include <stdlib.h>

 typedef struct No{
  float v;
  struct No* prox;
 }No;
No* criaLista(){
  return NULL;
}
No* criaNo(No *l, float v){
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
}
No* concatena(No* l1, No* l2){
  No* t = l1;
  while(1){
    if(t->prox == NULL){
      t->prox = l2;
      return l1;
    }
    t = t->prox;
  }
}
void printarLista(No* l ){
  No* p = l;
  while(p!=NULL){
    printf("%.1f -> ",p->v);
    p = p->prox;
  }
  printf("NULL\n");
}
int main(){
  No* l1 = criaLista();
  No* l2 = criaLista();
  l1 = criaNo(l1,1.0);
  l1 = criaNo(l1,4.5);
  l1 = criaNo(l1,2.1);
  l2 = criaNo(l2,9.8);
  l2 = criaNo(l2,7.2);
  
  No* l3 = concatena(l1,l2);
  
  printarLista(l3);

  limpaLista(l1);

  return 0;
}