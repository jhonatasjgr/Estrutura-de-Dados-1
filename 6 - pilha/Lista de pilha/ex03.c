/*
 Considere a existência de um tipo abstrato Pilha de números inteiros, cuja interface está definida no
arquivo pilha.h da seguinte forma:
 typedef struct pilha Pilha;
 Pilha* cria(void);
 void push (Pilha* p, int v);
 int pop (Pilha* p);
 int vazia (Pilha* p);
 void libera (Pilha* p);
Sem conhecer a representação interna desse tipo abstrato Pilha e usando apenas as funções declaradas no
arquivo pilha.h, implemente uma função que receba uma pilha e retire todos os elementos impares dessa
pilha. A figura a seguir ilustra o resultado dessa função sobre uma pilha:
Essa função deve obedecer o protótipo:
 void retira_impares (Pilha* p);
Dica: Essa função pode ser implementada mais facilmente através de uma solução recursiva ou utilizando
uma outra variável pilha auxiliar.
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
void retira_impares(No** topoPilha){
  No* atual = *topoPilha;
  No* anterior = NULL;
  while(atual!=NULL){
    No* temp = atual;
    if(atual->valor % 2 != 0 ){
      
      if(anterior==NULL){   //topo da pilha impar então o novo topo será o proximo valor
          *topoPilha = atual->prox;
      }else{
        // o atual é impar então o anterior tem que apontar pra pra uma posição após o atual que será removido
        anterior->prox = atual->prox;
      }
      atual = atual->prox;
      free(temp);
    }else{
      anterior = atual;
      atual = atual->prox;
    }
  }
  printf("\nNumeros impares retirados");
}
int main(){
  No* topoPilha = cria();
  topoPilha = push(5,&topoPilha);
  topoPilha = push(4,&topoPilha);
  topoPilha = push(3,&topoPilha);
  topoPilha = push(2,&topoPilha);
  topoPilha = push(1,&topoPilha);
  printar(&topoPilha);
  retira_impares(&topoPilha);
  printar(&topoPilha);

  libera(topoPilha);
  (vazia(topoPilha)) ? printf("\nVazia"):printf("\nNao Vazia");
  return 0;
}
