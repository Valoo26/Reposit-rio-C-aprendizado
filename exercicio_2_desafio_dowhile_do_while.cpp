/*
EX: 02 -  escreva um programa em C, para informar se um número número digitado pelo usuário é menor que um intervalo, maior que um intervalo
ou estar dentro do intervalo. O usuário deve pedir os extremos deste intervalo e deve garantir que o segundo extremo do intervalo seja maior do que o primeiro.



EXEMPLO:     X  ----  5   ------- Y ------- 55  ---- Z
                    inicio ------ num. ----- fim
                             intervalo
                             
                             
design by Luiz Miguel Valu Batista
data: 06/09/2023
rev.000

*/


#include <stdio.h>


int main(void){
	
	int inicio, intervalo, numero, fim;
	
	do{		
	printf("Digite o numero inicial do intervalo: \n");
	scanf("%d",&inicio);	
	printf("Digite o numero final do intervalo: \n");
	scanf("%d",&fim);	
	}
	while(inicio >= fim);
	printf("Digite o numero inteiro qualquer: \n");
	scanf("%d", &numero);
	if(numero < inicio){
	printf("o numero %d eh menor que o numero inicial %d. \n ", numero, inicio);
	}	
	else if(numero >  fim){
	printf("o numero %d eh maior que o numero inicial %d. \n ", numero, fim);	
		
	}
	else{
		printf("O numero esta dentro do intervalo !!!! \n");
		printf("%d intervalo %d intervalo %d", inicio, numero, fim);
	}
	
		
	return 0;
}
