/*

Exercício3
Escreva um programa em C que carregue um vetor de 5 inteiros todos diferentes.

design by Luiz Miguel Valu Batista
data:27/09/2023
rev.000
*/

#include<stdio.h>

int main(void){
	int flag, i, j, n[5];
	printf("Digite o primeiro numero:\n");
	scanf("%d", &n[0]);
	for(i=1; i<5; i++){
		do{
		flag =0;
		printf("Digite %d numero:\n", i+1);
		scanf("%d", &n[i]);
		for(j=i-1; j>=0; j--){
			if(n[i] == n[j]){
				flag =1;
			}
		}
	}
		while(flag ==1);
		}
	return 0;
	}	


