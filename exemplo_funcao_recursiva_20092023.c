/*

Exerc�cio fun��o:


- Escreva um progrma em C que pe�a 3 n�meros para o usu�rio e mostre a soma de 1 at� cada um desses n�meros digitados.

design by Luiz Miguel Valu Batista
data: 20/09/2023
rev.00
*/
#include<stdio.h>
int somar(int fim);
int main(void){
	int soma;
	soma = somar(10);
	printf("resultado %d", soma);
}
int somar(int fim){
	if(fim <=1){
		return fim;
	}
	return (fim + somar(fim - 1));
}
