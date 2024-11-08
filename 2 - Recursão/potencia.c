/*
Potência de um Número: Implemente uma função recursiva int potencia(int base, int expoente) para calcular o valor de base elevado a expoente.
  Exemplo: potencia(2, 3) deve retornar 8
  */

#include <stdio.h>

int potencia(int b, int e){
  if(e==1) return b;
  if(e==0) return 1;

  return b*potencia(b,e-1);
}
int main(){
  printf("2^3=%d",potencia(2,3));
  return 0;
}