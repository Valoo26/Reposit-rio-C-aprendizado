/*
Exercício:  

Crie um programa para mostrar ao usuário qual das 10 posições do vetor ele está carregando

DESIGN BY LUIZ MIGUEL VALU BATISTA
DATA:11/10/2023
REV.000

*/
#include<stdio.h>
	
int ler(int parm);
	
int main(void){
	int pos,num, vet[10];
	for(pos=0; pos<10;pos++){
		vet[pos]= ler(pos + 1);
		
	}
	return 0;
}
int ler(int parm){
	int num;
	printf("Digite %d numero: \n", parm);
	scanf("%d", &num);
}
