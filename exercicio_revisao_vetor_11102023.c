/*

Desafio:

Escreva um programa em C para carregar um vetor de 10 numeros inteiros. Use uma função para ler os numeros.

design by Luiz Miguel Valu Batista
data: 11/10/2023
rev.000
*/

#include<stdio.h>

	
	int ler();
	
int main(void){
	int pos,num, vet[10];
	for(pos=0; pos<10;pos++){
		vet[pos]= ler();
		
	}
	return 0;
}

int ler(){
	int num;
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
}
