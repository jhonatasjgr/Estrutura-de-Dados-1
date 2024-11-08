/*
 Soma de Números de 1 a N
  Crie uma função recursiva int soma(int n) que retorne a soma dos números de 1 até 𝑛.
  Exemplo: soma(5) deve retornar 15 (pois 1+2+3+4+5=15).
*/

#include <stdio.h>

int soma(int n){
  if(n==1) return n;
  return n + soma(n-1);
}
int main(){
  printf("Soma = %d",soma(5));
  return 0;
}