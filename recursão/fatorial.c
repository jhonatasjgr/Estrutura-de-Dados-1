#include <stdio.h>

int fat(int n){
	if(n==1||n==0) return 1;
	return n*fat(n-1);
}
int main(){

	printf("%d",fat(5));
return 0;
}