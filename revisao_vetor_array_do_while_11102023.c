/*
Exerc�cio:  

Crie um programa para mostrar ao usu�rio qual das 10 posi��es do vetor ele est� carregando, com numeros entre 10 e 50

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
	do{
	printf("Digite %d numero: \n", parm);
	scanf("%d", &num);
	}while(num <10 || 50<num || (num%2)!=0);
	return num;
}
