	//Questão 3 de recursividade

	#include <stdio.h>
	void fib(int n1,int n2,int parada){
		if(parada==0) return;
		printf("%d ",n2);
		int x = n1;
		n1=n2;
		n2+=x;
		fib(n1,n2,parada-1);
	}
	int main(){                                                   

		fib(1,1,10);
		return 0;
	}