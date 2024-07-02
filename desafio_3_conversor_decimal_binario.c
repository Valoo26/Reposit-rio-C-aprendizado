/* 

Exercício Revisão: 

Escreva um programa em c que mostre a quantidade de vezes um numero digitado pelo usuário pode ser dividido por 2 usando sempre divisão inteira e o número não deve ficar menor que 2.
mostrando sempre o resto 0 e 1

design by Luiz Miguel Valu Batista
data: 11/10/2023
rev.0000

*/
#include<stdio.h>

int main (void){
	
	int i=0, num, resto;
	printf("Digite um numero inteiro: \n");
	scanf("%d", &num);
	
	
	while(num>=2){
		i++;
		resto = num%2;
		printf("\n resto : %d", resto);
		num=num/2;
		
		
	}
	printf("%d \n",1);
	return 0;
}
