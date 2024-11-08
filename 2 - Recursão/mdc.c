/*
  Máximo Divisor Comum (MDC): Implemente uma função recursiva int mdc(int a, int b) para encontrar o máximo divisor comum (MDC) de dois números usando o algoritmo de Euclides.
  Exemplo: mdc(48, 18) deve retornar 6.
*/

#include <stdio.h>
#include <math.h>

int mdc(int a, int b){
  if(b==0) return a;

  return mdc(b, a % b);
  //(18, 12) -> (12, 6) -> (6, 0) = return a   a==6
  // 
 
}

int main(){
  printf("%d ",mdc(48,18));
  return 0;
}