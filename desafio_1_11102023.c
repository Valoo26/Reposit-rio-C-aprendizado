/* 

Exercício Revisão: 

Escreva um programa em c que mostre a quantidade de vezes um numero digitado pelo usuário pode ser dividido por 2 usando sempre divisão inteira e o número não deve ficar menor que 2.

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

