/*
Exerc�cio: Escreva um programa que pe�a dois numeros para o usu�rio at� que sua soma seja par. Teste do while deve udar uma fun��o.

design by Luiz Miguel Valu Batista
data: 25/10/2023
rev.000

*/

#include<stdio.h>

int soma(int p1, int p2);

int main(void){
	int pri, seg;
	while(soma(pri,seg)%2!=0){
		printf("Tente Novamente !!! \n");
	}
	printf("A soma %d eh par \n", soma(pri,seg));
	
	return 0;
		
}

int soma(int p1, int p2){
	printf("Digite o primeiro numero: \n");
	scanf("%d", &p1);
	printf("Digite o segundo: \n");
	scanf("%d", &p2);
	return p1+p2;
}

