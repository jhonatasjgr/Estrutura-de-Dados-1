/*
Implemente uma fila e suas principais funções 
(cria, insere, retira, vazia, libera) 
utilizando uma lista encadeada ao invés de um vetor na estrutura da fila.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct fila{
  int valor;
  struct fila* prox;
}Fila;

Fila* cria(){
  return NULL;
}
void insere(int valor, Fila** fila){
   Fila* newNo =  (Fila*) malloc(sizeof(Fila));
   newNo->valor = valor;
   newNo->prox = *fila;
   *fila = newNo;
}
void retira(Fila** fila){
   Fila* pri = *fila;
   Fila* sec = NULL;
   while(1){
      if(pri->prox == NULL){
         sec->prox = pri->prox;
         free(pri);
         return;
      }else{
        sec = pri;
        pri = pri->prox;
      }
   }
}
int vazia(Fila* fila){
  return (fila == NULL);
}
void libera(Fila* fila){
  while(fila!=NULL){
    Fila* temp = fila->prox;
    free(fila);
    fila = temp;
  } 
}
void printar(Fila**fila){
  Fila* temp = *fila;
  while(temp!=NULL){
    printf("%d->",temp->valor);
    temp = temp->prox;
  }
  printf("NULL\n");
}
int main(){
  Fila* fila = cria();
  insere(1,&fila);
  insere(2,&fila);
  retira(&fila); // retira o inicio da fila
  insere(3,&fila);
  printar(&fila);
  
  libera(fila);
  (vazia(fila)) ? printf("\nFila Vazia"):printf("Fila nao vazia");

  return 0;
}
