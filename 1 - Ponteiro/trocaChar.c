/*
screva uma função void replaceChar(char *str, char oldChar, char newChar) 
que recebe uma string e dois caracteres (oldChar e newChar). 
A função deve substituir todas as ocorrências de oldChar por newChar na string.
*/


#include <stdio.h>

void replaceChar(char *str, char oldChar, char newChar);

int main(){
  char string[]="Jhonatas";
  char old = 'a';
  char new = 'A';

  printf("%s\n",string);
  replaceChar(string,old,new);
  printf("%s",string);

  return 0;
}

void replaceChar(char *str, char oldChar, char newChar){
  for(int i=0;1;i++)
    if(str[i]=='\0'||str[i]=='\n') break;
    else if(str[i]==oldChar) str[i] = newChar;
}