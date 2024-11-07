/*
Escreva uma função int sumArray(int *arr, int size) que 
recebe um ponteiro para o primeiro elemento de um array e o tamanho do array. 
A função deve retornar a soma de todos os elementos do array.
*/
#include <stdio.h>

int sumArray(int *arr, int size);

int main(){
  int array[] = {1,2,3,4,5};
  printf("Soma = %d",sumArray(array,5));
  return 0;
}
int sumArray(int *arr,int size){
  int soma = 0;
  for(int i=0;i<size;i++)
    soma+= *(arr+i);
  return soma;
}