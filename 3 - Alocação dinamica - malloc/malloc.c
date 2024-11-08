#include <stdio.h>
#include <stdlib.h>

int *criaVetor(int n);
void preencheVetor(int n, int *vetor);
void deletaVetor(int *vetor);

int main(){
  int n=10;
  int *vetor = criaVetor(n);
  preencheVetor(n,vetor);

  for(int i=0;i<n;i++)
    printf("%d  ",vetor[i]);

  deletaVetor(vetor);
  return 0;
}

int *criaVetor(int n){
  return (int *) malloc(n* sizeof(0));
}
void preencheVetor(int n, int *vetor){
  for(int i=0;i<n;i++)
    scanf("%d",&vetor[i]);
}
void deletaVetor(int *vetor){
  free (vetor);
}