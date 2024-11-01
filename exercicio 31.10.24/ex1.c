	/* Implemente uma função que calcule a área da superfície 
	/  e o volume de uma esfera de raio R.
	/ Essa Função deve obedecer ao protótipo:
	*/ void calc_esfera(float r, float *area, float *volume);
	
	#include <stdio.h>
	
	#define PI 3.15159

	void calc_esfera(float r, float *area, float *volume);
	
	int main(){
		float area, volume;
		calc_esfera(5,&area,&volume);
		printf("Area: %.1f\nVolume: %.1f",area,volume);
		
	  return 0;
	}

	void calc_esfera(float r, float *area, float *volume){
		*area = (double) 4*PI*(r*r);
		*volume =(double) (4/3)*PI*r*r*r;
	}