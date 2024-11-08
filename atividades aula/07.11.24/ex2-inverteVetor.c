/*
*/
#include <stdio.h>

void inverte(int n, int *vet);

int main(){
  int vetor[] = {1,2,3,4,5};
  inverte(5,vetor);
  for(int i=0;i<5;i++)
    printf("%d ",vetor[i]);
  return 0;
}

void inverte(int n, int *vet){
  for(int i=0;i<n/2;i++){
    int x = vet[i];
    vet[i] = vet[n-1-i];
    vet[n-1-i] = x;
  }
}
