/*
Escreva uma função void troca(int *p1, int *p2) que 
recebe dois ponteiros para inteiros e troca os valores de a e b. 
Teste a função no programa principal.
*/
#include <stdio.h>

void troca(int *p1, int *p2){
	int x = *p1;
	*p1 = *p2;
	*p2 = x;
}
int main(){
	int p1=1,p2=5;
	troca(&p1,&p2);
	printf("%d %d",p1,p2);

	return 0;
}