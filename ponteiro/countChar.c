/*
Escreva uma função int countChar(char *str, char c) que recebe uma string e um caractere. A função deve retornar o número de vezes que o caractere c aparece na string, usando ponteiros para percorrer a string.
*/

#include <stdio.h>

int countChar(char *str, char c);

int main(){
  char string[]="Jhonatas";
  char c = 'a';
  printf("'%c' recorre %d vezes na string '%s'",c,countChar(string,c),string);
  return 0;
}

int countChar(char *str, char c){
  int qtd=0;
  for(int i=0;1;i++)
    if(str[i]=='\0' || str[i]=='\n') return qtd;
    else if(str[i]==c) qtd++;
  return qtd;
}