/*
Elabore um programa em C com uma fun��o para informar a fun��o principal sobre a quantidade de refrigerante consumido por uma mesa e o valor gasto nesta mesa.

design by Luiz Miguel Valu Batista
data: 16/08/2023
rev.0000


*/

#include<stdio.h>

void ler(int *parm1, float *parm2); // void pois a fun��o n�o devolve nada


int main(void){
	
	int quantidade;
	float valor;
	ler(&quantidade, &valor);
	printf("Quantidade: %d \n Conta: %.2f \n", quantidade, valor);
	return 0;
}

void ler(int *parm1, float *parm2){

	*parm1 = 3;
	*parm2 = 10.50;
	
	
}
