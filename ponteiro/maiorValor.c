/*
Escreva uma função int* findMax(int *arr, int size) que 
recebe um ponteiro para o primeiro elemento de um array e 
retorna um ponteiro para o maior valor do array.
*/

#include <stdio.h>

int *findMax(int *arr, int size);

int main(){
  int vetor[]={1,2,3,4,5};
  printf("Maior = %d",*findMax(vetor,5));
  return 0;
}
int *findMax(int *arr, int size){
  int *m = arr;
  for(int i=0;i<size;i++)
    if( (int)*arr+i > (int) *m) m = arr+i;
    
  return m;
}
