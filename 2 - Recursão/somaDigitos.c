/*
Soma dos Dígitos de um Número: Crie uma função recursiva int soma_digitos(int n) que retorne a soma dos dígitos de um número.
  Exemplo: soma_digitos(123) deve retornar 6 .
*/

#include <stdio.h>

int soma_digitos(int n){
  if(n%10==0) return 0;

  return soma_digitos(n/10) + (n%10); 
}

int main(){

  printf("%d",soma_digitos(123));
  return 0;
}