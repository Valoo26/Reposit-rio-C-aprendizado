/*

exercicio 2 
elabore um programa em C que leia dois 2 e mostre sua soma;

design by Luiz Miguel Valu Batista
data: 27/09/2023
rev.000
*/

#include<stdio.h>

int main(void){
	int n1, n2;
	
	printf("\n **** Digite dois numers diferentes ****\n ");
	printf("Digite o primeiro numero");
	scanf("%d", &n1);	
	do{
		printf("Digite o segundo numero");
		scanf("%d",&n2);		
	}
	while(n1==n2);
	printf("A soma eh : \n %d", (n1+n2));
	
}
