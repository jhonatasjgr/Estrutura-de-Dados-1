// Considere a existência de um tipo abstrato Pilha de números de ponto flutuante, cuja interface está
// definida no arquivo pilha.h da seguinte forma:
//  typedef struct pilha Pilha;
//  Pilha* cria(void);
//  void push (Pilha* p, float v);
//  float pop (Pilha* p);
//  int vazia (Pilha* p);
//  void libera (Pilha* p);
// b) Sem conhecer a representação interna desse tipo abstrato Pilha e usando apenas as funções declaradas no
// arquivo pilha.h, implemente uma função que receba duas pilhas, p1 e p2, e passe todos os elementos da
// pilha p2 para o topo da pilha p1. A figura a seguir ilustra essa concatenação de pilhas:
// Note que ao final dessa função, a pilha p2 vai estar vazia e a pilha p1 conterá todos os elementos das duas
// pilhas. Essa função deve obedecer o protótipo:

// Missão: Promover uma educação de excelência direcionada às demandas sociais. 2
// void concatena_pilhas (Pilha* p1, Pilha* p2);
// Dica: Essa função pode ser implementada mais facilmente através de uma solução recursiva ou utilizando
// uma outra variável pilha auxiliar para fazer a transferência dos elementos entre as duas pilhas.

#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
  float valor;
  struct pilha *prox;
}Pilha;

 Pilha* cria();
 void push (Pilha** p, float v);
 float pop (Pilha** p);
 int vazia (Pilha* p);
 void libera (Pilha** p);
 void printar(Pilha* p);
void concatena_pilhas (Pilha** p1, Pilha** p2);

int main(){
  Pilha *p1 = cria();
  Pilha *p2 = cria();
  push(&p1,1.0);
  push(&p1,4.5);
  push(&p1,2.1);
  push(&p2,9.8);
  push(&p2,3.1);
  push(&p2,7.2);
  
  concatena_pilhas(&p1,&p2);
  printar(p1);

  libera(&p1);
  libera(&p2);

  return 0;
}
Pilha *cria(){
  return NULL;
}
void push(Pilha **p, float v){
    Pilha *new = (Pilha*) malloc(sizeof(Pilha));
    new->prox = *p;
    new->valor = v;
    *p = new;
}
float pop(Pilha **p) {
    if (*p == NULL) {
        printf("Erro: Pilha vazia!\n");
        return -1;
    }

    Pilha *temp = *p;
    float v = temp->valor;
    *p = temp->prox;

    free(temp); 

    return v;
}
int vazia(Pilha* p){
  return (p == NULL);
}
void libera(Pilha** p){
  Pilha *temp;
  while(*p != NULL){
    temp = *p; 
    temp = temp->prox; 
    free(p);        
    *p = temp;       
  }
}

void printar(Pilha* p){
  Pilha* temp = p;
  while(temp!=NULL){
    printf("|%.2f|\n",temp->valor);
    temp = temp->prox;
  }
}
void concatena_pilhas(Pilha** p1, Pilha** p2){
   Pilha *temp = *p2;

   while(temp->prox!=NULL) temp = temp->prox;

   temp->prox = *p1;
   *p1 = *p2;
  
}


