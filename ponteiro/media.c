/*
Crie uma função float calculateAverage(int *arr, int size) que 
recebe um ponteiro para o primeiro elemento de um array de inteiros 
e calcula a média dos elementos do array.
*/

#include <stdio.h>

float calculateAverage(int *arr, int size);

int main(){
  int vet[]={1,2,3,4,5};
  printf("Media = %.1f",calculateAverage(vet,5));
  return 0;
}

float calculateAverage(int *arr, int size){
  int m=0;
  for(int i=0;i<size;i++)
    m+= *arr+i;
  return (float) m/size;
}