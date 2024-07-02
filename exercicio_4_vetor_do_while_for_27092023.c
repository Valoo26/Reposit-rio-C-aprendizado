/*
\exercicio 4
Escreva um programa em C para carregar um vetor de 5 inteiros com numeros pares.


design by Luiz Miguel Valu Batista
data: 27/09/2023
rev. 000
*/


#include<stdio.h>

int main(void){
	int flag, i, j, n[5];
	//printf("Digite o primeiro numero:\n");
	//scanf("%d", &n[0]);
	for(i=0; i<5; i++){
		do{
		
		printf("Digite %d numero:\n", i+1);
		scanf("%d", &n[i]);	
			}
		while((n[i]%2) !=0);
	}
		
	return 0;
	}	

