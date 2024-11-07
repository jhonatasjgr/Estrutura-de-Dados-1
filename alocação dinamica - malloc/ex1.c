/* Implemente uma função que receba como parâmetro
/  um vetor de número reais(vet) de tamanho N 
/  e retorne quantos números negativos estão armazenados
/  int negativos(int n, float *vet);
*/ 
#include <stdio.h>

int negativos(int n, float *vet);

int main(){
  int n=10;
  float vetor[]={1,-2,3,4,5,6,-7,8,9,0};
  printf("O vetor possui %d valor(es) negativo(s)",negativos(n,vetor));
  return 0;
}
int negativos(int n, float *vet){
  int qtd=0;
  for(int i=0;i<n;i++)
    if(vet[i]<0) qtd++;
  return qtd;
}