/* 

Exerc�cio 5:  escre va um programa em C que contenha uma fun��o recursiva para mostrar a contagem regressiva at� o 0, onde o usu�rio digita o numero inicial.

design by Luiz Miguel Valu Batista
data: 20/09/2023
rev.000
*/
#include<stdio.h>
void contagem(int parm);
int main(void){
	int  num;	
	printf("Digite um numero inteiro positivo");
	scanf("%d", &num);
	printf(" ******  Contagem regressiva ***");
	contagem(num);	
	return 0;
}

void contagem(int parm){
	if(parm <= 0){// condi��o de parada
	printf(" 0 \n");	
	}
	else{
		printf("%d \n", parm);
		contagem(parm-1); // reduz dimens�o
	}
}
