#include <stdio.h>
#include <stdlib.h>

struct Lista{
  int size;
  int numItem;
  int *data;
};

int *criarLista(int size);
void excluirLista(struct Lista *lista);
void addItem(struct Lista *lista, int item);
void removeItem(struct Lista *lista);
void printarItens(struct Lista *lista);

int main(){
  struct Lista lista;
  lista.numItem=0;
  lista.size=0;
  lista.data = criarLista(lista.size);

  addItem(&lista,1);
  removeItem(&lista);
  addItem(&lista,2);
  addItem(&lista,3);
  removeItem(&lista);
  addItem(&lista,4);
  addItem(&lista,5);
  printarItens(&lista);

  excluirLista(&lista);
  return 0;
}
//funções
int *criarLista(int size){
  return (int *) malloc(size * sizeof(int));
}
void excluirLista(struct Lista *lista){
  free(lista->data);
}
void addItem(struct Lista *lista, int item){
  if(lista->size == lista->numItem){
    lista->size += 1;
    lista->data = realloc(lista->data, lista->size * sizeof(int));
  }
  lista->data[lista->numItem] = item;
  lista->numItem++;
  printf("\n%d adicionado com sucesso",item);
  printarItens(lista);
}
void removeItem(struct Lista *lista){
  if(lista->numItem == 0){
    printf("\nLista já está vazia, impossivel remover itens");
    return ;
  }
  lista->numItem -=1;
  lista->size -= 1;
  lista->data = realloc(lista->data, lista->size * sizeof(int));
  printf("\nUltimo elemento removido com sucesso!");
}
void printarItens(struct Lista *lista){
  if(lista->size==0) printf("\nLista Vazia");
  else {
    printf("\nItens da lista: ");
    for(int i=0;i<lista->numItem;i++)
      printf("%d ",lista->data[i]);
  }
}