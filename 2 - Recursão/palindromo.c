/*
Verificar Palíndromo: Escreva uma função recursiva int palindromo(char palavra[], int inicio, int fim) que verifique se uma string é um palíndromo (mesma leitura de frente para trás e vice-versa).
  Exemplo: palindromo("ana", 0, 2) deve retornar 1 (verdadeiro).
*/

#include <stdio.h> 

int palindromo(char palavra[], int inicio, int fim){
  if(fim==inicio) return 1;
  if(palavra[inicio]!=palavra[fim]) return 0;
  return palindromo(palavra,inicio+1,fim-1);
}

int main(){

  printf("Palindromo: %d",palindromo("abcxcba",0,6));
  return 0;
}