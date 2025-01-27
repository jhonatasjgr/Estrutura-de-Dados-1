/*
Implemente uma pilha e suas principais funções (cria, push, pop, vazia, libera) 
utilizando uma lista encadeada ao invés de um vetor na estrutura da pilha.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct No{
  int valor;
  struct No* prox;
} No;

No* cria(){
  return NULL;
}

No* push(int valor, No** topoPilha){
  No* newNo = (No* ) malloc(sizeof(No));
  newNo->valor = valor;
  newNo->prox = *topoPilha;
  return newNo;
}

int pop(No** topoPilha){
  No* temp = *topoPilha;
  int valor = temp->valor;
  temp = temp->prox;
  free(*topoPilha);
  *topoPilha = temp;
  return valor;
}
int vazia(No* topoPilha){
  return (topoPilha == NULL);
}
void libera(No* topoPilha){

  while(1){
    if(topoPilha == NULL) return ;
    No* temp = topoPilha->prox;
    free(topoPilha);
    topoPilha = temp;
  }
}
void printar(No** topoPilha){
  No* temp = *topoPilha;
  printf("\n _");
  do{
    printf("\n|%d|",temp->valor);
    temp = temp->prox;
  }while(temp !=NULL);
  printf("\n _");
}
int main(){
  No* topoPilha = cria();
  topoPilha = push(5,&topoPilha);
  topoPilha = push(4,&topoPilha);
  topoPilha = push(6,&topoPilha);
  printf("%d removido",pop(&topoPilha));
  topoPilha = push(3,&topoPilha);
  topoPilha = push(2,&topoPilha);
  topoPilha = push(1,&topoPilha);
  printar(&topoPilha);

  libera(topoPilha);
  (vazia(topoPilha)) ? printf("\nVazia"):printf("\nNao Vazia");
  return 0;
}

