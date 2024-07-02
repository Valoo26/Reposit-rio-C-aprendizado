/*
Revisão:

Crie um programa em C para mostrar o resultado da seguinte série numérica.

S= 1 + 1/2 + 1/3 + 1/4 + 1/5 + ......... + 1/899 + 1/900

DESIGN BY LUIZ MIGUEL VALU BATISTA
DATA: 28/09/2023
REV.000

*/
#include<stdio.h>
int main(void){
	float n1 = 1,n2,i,resp, final = 0;
	for(i=0; i<900; i++){
		n2++;
		resp = (n1/n2);
		final = final+ resp;
	}
	printf("resultado : %f", final);
	return 0;
}
/* resolução do Oclair
#include<stdio.h>
int main(void){
	float res =0;
	int pos;
	for(pos =1; pos<= 900; pos++){
		res = res + (1.0/pos);
	}
	printf("resultado : %f", final);
	return 0;
}

