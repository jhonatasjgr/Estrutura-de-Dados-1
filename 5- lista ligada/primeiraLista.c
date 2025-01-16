#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node* next; //aponta para o próximo nó da lista
} Node;

Node *inicio=NULL; //inicio da lista
Node *ultimoNo=NULL; //ultimo elemento da lista

Node *criaLista(int valor){

  Node *primeiroNo = (Node*) malloc(sizeof(Node));
  if(primeiroNo == NULL) return NULL;

  primeiroNo->data = valor;
  primeiroNo->next = NULL;

  inicio = primeiroNo;//inicializa lista
  ultimoNo = primeiroNo;//atualiza ultima posicao

  return primeiroNo;
}

Node *adiciona_no(int valor){
  if(inicio == NULL) return criaLista(valor);//lista vazia
  
  Node *newNo = (Node*) malloc(sizeof(Node));
  if(newNo==NULL) return NULL;

  newNo->data = valor;
  newNo->next = NULL;
  
  ultimoNo->next = newNo;//ultimo elemento aponta para o novo nó
  ultimoNo = newNo;//atualiza a ultima posicao
  return newNo;
}

void printarNo(){
  if(inicio==NULL) return;

  Node *no =  inicio;
  
  while(no != NULL){
    printf("%d -> ", no->data);
    no = no->next;
  }
  printf("NULL");
}

int main(){
  criaLista(1);
  adiciona_no(2);
  adiciona_no(3);
  adiciona_no(4);
  adiciona_no(5);
  printarNo();
  return 0;
}