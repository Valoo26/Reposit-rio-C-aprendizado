/* 

Exerc�cio Revis�o: 

Escreva um programa em c que mostre a quantidade de vezes um numero digitado pelo usu�rio pode ser dividido por 2 usando sempre divis�o inteira e o n�mero n�o deve ficar menor que 2.

design by Luiz Miguel Valu Batista
data: 11/10/2023
rev.0000

*/
#include<stdio.h>

int main (void){
	
	int i=0, num;
	printf("Digite um numero inteiro: \n");
	scanf("%d", &num);
	
	
	while(num>=2){
		i++;
		num=num/2;
		
		
	}
	printf("\n\n%d", i);
	return 0;
}

