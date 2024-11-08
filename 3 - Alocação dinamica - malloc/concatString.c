/*
Escreva uma função que receba duas strings e retorne uma nova string que seja a concatenação das duas. Use malloc para alocar a quantidade exata de memória necessária para a string concatenada e, ao final, libere a memória.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *criaString(int tam);
void concatStr(char *strConcat,char *str1,char *str2);

int main(){
  char str1[] = "Jhonatas ";
  char str2[] = "Gomes";

  int tam =  (sizeof(str1)/sizeof(char))+(sizeof(str2)/sizeof(char));
  char *strConcat = criaString(tam-2);

  concatStr(strConcat,str1,str2);

  printf("%s",strConcat);
  
  free(strConcat);
  return 0 ;
}
char *criaString(int tam){
  return (char *) malloc(tam+1 * sizeof(char));
}
void concatStr(char *strConcat,char *str1,char *str2){
   strcpy(strConcat, str1);
   strcat(strConcat, str2);
}
