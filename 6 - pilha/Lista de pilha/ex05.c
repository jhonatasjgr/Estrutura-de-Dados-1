/*
Crie uma função que receba um vetor v de inteiros e retorne esse vetor com os valores ordenados. Crie este algoritmo da ordenação usando apenas a sua criatividade, sem pesquisar em livros, internet ou IAs.
*/
/*
*/

#include <stdio.h>

void ordenar(int *vetor){
  for(int i=0;i<10;i++)
    for(int j=i;j<10;j++)
      if(vetor[i]>vetor[j]){
        int x = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = x;
      }
}

int main(){
  int vetor[] = {10,9,8,7,6,5,4,3,2,1};

  ordenar(vetor);

  for(int i=0;i<10;i++)
    printf("%d  ",vetor[i]);

  return 0;
}