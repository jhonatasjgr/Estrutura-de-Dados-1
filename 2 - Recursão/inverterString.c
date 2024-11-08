/*Inverter uma String: Escreva uma função recursiva void inverter(char str[], int inicio, int fim) que inverta uma string em si.
  Exemplo: inverter("abcd", 0, 3) deve transformar str em "dcba".
*/
#include <stdio.h>

void inverter(char *str, int inicio, int fim){
  if(inicio==fim) return;
  char c = str[inicio];
  str[inicio]=str[fim];
  str[fim] = c;
  inverter(str,inicio+1,fim-1);
}
int main(){
  char str[]="chico";
  printf("%s",str);
  inverter(str,0,4);
  printf("\n%s",str);
  return 0;
}