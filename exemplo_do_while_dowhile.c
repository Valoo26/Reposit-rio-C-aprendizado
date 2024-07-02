

/*
Exemplo programa Do-While


design by Luiz Miguel Valu Batista
data: 06/07/2023
rev.000

fflush(stdin); // limpa teclado.
*/



#include <stdio.h>


int main(void){
	fflush(stdin); // limpa teclado.
	int inicio, intervalo, numero, fim;
	
	do{
		printf("Digite a temperatura do forno menor que 10.000\n");
		scanf("%d",&inicio);
	}
	while(inicio>10000);
	do{		
	printf("Digite a temperatura minima de fusão do metal: \n");
	scanf("%d",&fim);
	printf("Digite a temperatura maior que a fusao e menor que 10.000: \n");
	scanf("%d", &numero);	
	}
	while(inicio < numero < fim);
	
	printf("\n **** Forno funcionando ****");
	return 0;
}

/*

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	int x, z, num; 
	
	printf("Digite o primeiro numero do intervalo: ");
	scanf(" %d", &x);
	
	do{
		printf("Digite o segundo numero do intervalo: ");
		scanf(" %d", &z);	
	} while(z <= x);
	
	do{
		printf("Digite um numero para analisar com o intervalo: ");
		scanf("%d", &num);
	}while(num < x || num > z);
	
	if(num > x && num < z){
		printf("O numero inserido esta dentro do intervalo");
	} else if(num < x){
		printf("O numero inserido eh menor que o intervalo");
	} else if(num > z){
		printf("O numero inserido eh maior que o intervalo");
	}
	
	return 0;
}
*/
