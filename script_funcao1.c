/*
Script função
design by Luiz Miguel VAlu BAtista
data: 10/08/2023
rev.000

*/

#include<stdio.h>

int soma(int pri, int seg); // assinatura ou protótipo


int main (void){
	
	int qtd =3, valor =5 , tot;
	tot = soma(qtd, valor);
	printf("Resultado:  %d \n", tot);
	tot = soma(qtd, 4);
	printf("Resultado: %d \n", tot);
	return 0;
	
}

int soma (int pri, int seg){
	int res;
	res = pri + seg;
	return res;
}
