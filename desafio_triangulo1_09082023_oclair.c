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


int main(void){
	int linha, coluna , numero, i = 0;

	printf("Digite um numero inteiro.");
	printf("\n");
	scanf("%d", &numero);
	
	for(linha =0; linha< numero; linha ++){
	
	
	for(coluna = 0; coluna< linha; coluna++){
			printf("*");
		}
	printf("\n");
}
	return 0;
}
