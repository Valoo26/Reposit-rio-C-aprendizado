/*
Crie um triangulo como  no exemplo abaixo
*
**
***
****
*****
******

Script desafio triangulo
design by Luiz Miguel Valu Batista
data: 09/08/2023
rev.000
*/

#include<stdio.h>

int linha, coluna , numero, i = 0;

int main(void){
	
	printf("Digite um numero inteiro.");
	printf("\n");
	scanf("%d", numero);
	
	
		for(i=0; i<numero; i++){
			printf("*");
		}

	return 0;
}
