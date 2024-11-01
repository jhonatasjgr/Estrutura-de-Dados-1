	/* Escreva uma função recursiva que determine
	/  quantas vezes um dígito k ocorre em um número natural n.
	/  Por exemplo, o dígito 2 ocorre 3 vezes em 762021192
	*/ 
	
	#include <stdio.h>
	
	void percorre(int n, long int val,int *qtd){
		
		if(val<=0) return;

		if(n==val%10) *qtd+=1;

		percorre(n,val/10,qtd);
	}
	
	int main(){

		int qtd=0;
		percorre(2,762021192,&qtd);
		printf("%d",qtd);
	  return 0;
	}

