/*
Peça ao usuário para inserir n números e armazene-os em um array alocado dinamicamente. Ordene os números em ordem crescente e exiba o resultado. Não esqueça de liberar a memória no final.
*/
#include <stdio.h>
#include <stdlib.h>

int *criarArr(int n);
void preencheVetor(int *arr,int n);
void mostrarVetor(int *arr,int n);
void ordenar(int *arr,int n);
void deletaVetor(int *arr);

int main(){
  int *arr;
  int n;

  printf("N: ");
  scanf("%d",&n);

  arr = criarArr(n);
  preencheVetor(arr,n);
  mostrarVetor(arr,n);

  ordenar(arr,n);
  mostrarVetor(arr,n);

  deletaVetor(arr);

  return 0;
}
int *criarArr(int n){
  return (int *) malloc(n * sizeof(0));
}
void preencheVetor(int *arr,int n){
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
}
void mostrarVetor(int *arr,int n){
  printf("\nmostrando vetor: ");
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
  printf("\n");
}
void ordenar(int *arr,int n){
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      if(arr[i]<arr[j]){
        int x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
      }
}
void deletaVetor(int *arr){
  free(arr);
}
