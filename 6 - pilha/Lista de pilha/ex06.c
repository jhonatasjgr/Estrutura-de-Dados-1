/*
Crie uma segunda função que receba um vetor v de inteiros e retorne esse vetor com os valores
ordenados. Desta vez você deve implementar uma estratégia de ordenação diferente da que foi utilizada na
questão anterior (ex: quicksort, heapsort, mergesort...) e pode pesquisar em livros, internet ou IAs.
*/

#include <stdio.h>

void ordenar(int *vetor){
  for(int i=0;i<10;i++){
   int menor = i;
    for(int j=i+1;i<10;i++){
      if(vetor[j]<vetor[menor]){
        menor = j;
      }
    }
    int temp = vetor[menor];
    vetor[menor] = vetor[i];
    vetor[i] = temp;
  }

}

int main(){
  int vetor[] = {10,9,8,7,6,5,4,3,2,1};

  ordenar(vetor);

  for(int i=0;i<10;i++)
    printf("%d  ",vetor[i]);

  return 0;
}