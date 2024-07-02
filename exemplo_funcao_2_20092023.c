/*

Exercício função:


- Escreva um progrma em C que peça 3 números para o usuário e mostre a soma de 1 até cada um desses números digitados.

design by Luiz Miguel Valu Batista
data: 20/09/2023
rev.00
*/
#include<stdio.h>
int somar(int fim);
int main(void){	
	int pos, num;
	for(pos =0; pos< 3; pos ++){
		printf("Digite um numero");
		scanf("%d", &num);
		
		printf("Resultado: %d \n", somar(num));
	}
	return 0;
}
int somar(int fim){
	
	int pos, res=0;
for(pos =1; pos<=fim; pos ++){
	res = res+pos;
}
return res;
}
