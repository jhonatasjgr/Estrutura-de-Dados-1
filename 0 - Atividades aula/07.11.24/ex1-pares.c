/*
*/

#include <stdio.h>

int pares(int n, int *vet);

int main(){
  int vet[]={1,2,3,4,5,6,7,8,9,0};
  printf("%d pares",pares(10,vet));
  return 0;
}

int pares(int n, int *vet){
  int q=0;
  for(int i=0;i<n;i++)
    if(vet[i]%2==0) q++;
  return q;
}