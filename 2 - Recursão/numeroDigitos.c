/*
Número de Dígitos de um Número: Escreva uma função recursiva int contar_digitos(int n) que retorne o número de dígitos de um número inteiro 𝑛.
  Exemplo: contar_digitos(1234) deve retornar 4.
*/
#include <stdio.h>

int contar_digitos(int n,int q){
  if(n%10>0) q++;
  else return q;
  return contar_digitos(n/10,q);
}
int main(){
  printf("qtd digitos: %d",contar_digitos(124534,0));
  return 0;
}