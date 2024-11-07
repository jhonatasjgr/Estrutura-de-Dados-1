/*
Escreva um programa que peça ao usuário uma string, aloque dinamicamente a quantidade exata de memória necessária para armazená-la, e imprima a string. Ao final, libere a memória.
*/

#include <stdio.h>
#include <stdlib.h>

void capturarString(char *string);
void substituir(char *string, char *str);
void liberarEspaco(char *str);
char *criarEspaco(char *string, char *str);

int main(){
 char string[100];
 char *str;

  capturarString(string);
  str = criarEspaco(string,str);
  substituir(string,str);

  printf("%s\n",string);
  printf("%s\n",str);

  liberarEspaco(str);
  
}

void capturarString(char *string){
  printf("Digite o nome: ");
  scanf("%s",string);
}

char *criarEspaco(char *string, char *str){
  int t = 0;
  //printf("%d",t);
  for(int i=0;1;i++)
    if(string[i]=='\0') break;
    else t++;
  //printf("-%d",t);
  return (char*) malloc(t+1 * sizeof(char));
}
void substituir(char *string, char *str){
  for(int i=0;1;i++)
    if(string[i]=='\0') break;
    else str[i]=string[i];
}
void liberarEspaco(char *str){
  free(str);
}