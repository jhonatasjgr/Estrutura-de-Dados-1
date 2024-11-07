/*
Crie uma função void reverseArray(int *arr, int size) que 
recebe um ponteiro para o primeiro elemento de um array 
e o tamanho do array. A função deve inverter os elementos do array "in-place" usando ponteiros.
*/
#include <stdio.h>

void reverseArray(int *arr, int size);

int main(){
  int vetor[] = {1,2,3,4,5};
  reverseArray(vetor,5);
  for(int i=0;i<5;i++)
    printf("%d ",vetor[i]);
  return 0;
}

void reverseArray(int *arr, int size){
  for(int i=0;i<size/2;i++){
    int x = arr[i];
    arr[i] = arr[size-1-i];
    arr[size-1-i] = x;
  }
}
//  size - 1 - i
//tamanho - 1 (ultima) - i(valor do decremento a partir do fim/inicio)