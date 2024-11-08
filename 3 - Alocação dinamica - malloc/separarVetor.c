/*
  Crie um programa que aloque dinamicamente um array de inteiros de tamanho n e o preencha com valores fornecidos pelo usuário. Em seguida, divida o array em dois novos arrays: um contendo os valores pares e outro os ímpares. Exiba os valores e libere a memória alocada.
  */
  
#include <stdio.h>
#include <stdlib.h>

int *criaVetor(int tam);
int qtdPar(int *vetor, int tam);
int qtdImpar(int *vetor, int tam);
void separarPar(int *vetor, int *pares, int tam);
void separarImpar(int *vetor, int *impares, int tam);
void mostrarVetor(int *v, int tam);

int main() {
  int n;
  printf("Digite o tamanho do array: ");
  scanf("%d", &n);

  int *vetor = criaVetor(n);

  printf("Digite os valores do array:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }


  int qtd_pares = qtdPar(vetor, n);
  int qtd_impares = qtdImpar(vetor, n);
  int *pares = criaVetor(qtd_pares);
  int *impares = criaVetor(qtd_impares);

  separarPar(vetor, pares, n);
  separarImpar(vetor, impares, n);

  printf("Vetor: ");
  mostrarVetor(vetor, n);
  printf("pares: ");
  mostrarVetor(pares, qtd_pares);
  printf("impares: ");
  mostrarVetor(impares, qtd_impares);

  free(vetor);
  free(pares);
  free(impares);

  return 0;
}

int *criaVetor(int tam) {
  return (int *) malloc(tam * sizeof(int));
}

int qtdPar(int *vetor, int tam) {
  int q = 0;
  for (int i = 0; i < tam; i++)
    if (vetor[i] % 2 == 0) q++;
  return q;
}

int qtdImpar(int *vetor, int tam) {
  int q = 0;
  for (int i = 0; i < tam; i++)
    if (vetor[i] % 2 != 0) q++;
  return q;
}

void separarPar(int *vetor, int *pares, int tam) {
  int x = 0;
  for (int i = 0; i < tam; i++)
    if (vetor[i] % 2 == 0) {
      pares[x] = vetor[i];
      x++;
    }
}

void separarImpar(int *vetor, int *impares, int tam) {
  int x = 0;
  for (int i=0;i<tam; i++)
    if (vetor[i]%2!=0) {
      impares[x] = vetor[i];
      x++;
    }
}
void mostrarVetor(int *v, int tam) {
  for (int i = 0; i < tam; i++)
    printf("%d ", v[i]);
  printf("\n");
}
