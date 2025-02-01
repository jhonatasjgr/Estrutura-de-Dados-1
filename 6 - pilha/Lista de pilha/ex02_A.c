// Considere a existência de um tipo abstrato Pilha de números de ponto flutuante, cuja interface está
// definida no arquivo pilha.h da seguinte forma:
//  typedef struct pilha Pilha;
//  Pilha* cria(void);
//  void push (Pilha* p, float v);
//  float pop (Pilha* p);
//  int vazia (Pilha* p);
//  void libera (Pilha* p);
// a) Sem conhecer a representação interna desse tipo abstrato Pilha e usando apenas as funções declaradas no
// arquivo pilha.h, implemente uma função que receba uma pilha como parâmetro e retorne o valor
// armazenado em seu topo, restaurando o conteúdo da pilha.

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
 float topo(Pilha* p);
 void printar(Pilha* p);

int main(){
  Pilha *p = cria();
  push(&p,1.0);
  push(&p,2.0);
  push(&p,8.0);
  printf("Pop = %.2f\n",pop(&p));
  
  (vazia(p)) ? printf("Vazia\n"):printf("Nao vazia\n");

  printar(p);
  printf("Topo = %.2f\n",topo(p));
  
  libera(&p);

 (vazia(p)) ? printf("Vazia\n"):printf("Nao vazia\n");


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
float topo(Pilha *p){
  return p->valor;
}
void printar(Pilha* p){
  Pilha* temp = p;
  while(temp!=NULL){
    printf("|%.2f|\n",temp->valor);
    temp = temp->prox;
  }
}


