/* Escreva um programa em C que leia um numero inteiro do telado e desenhe um retangulo como no exemplo abaixo:

numero 3:

***
***
***

--------------------------------------------------------------------------------------------------------------------

iniciar o  programa com void main() , � ruim - pois as boas pr�ticas de programa��o determina uma saida final com numero inteiro real, void main() retorna numero aleat�rio
j� o Int main(void) pertence as boas pr�ticas de programa��o retorna valor inteiro real

--------------------------------------------------------------------------------------------------------------------

Script Matriz desafio Oclair
Design by Luiz Miguel VAlu BAtista 
data: 09/08/2023
rev. 000
*/

#include<stdio.h>
#include<stdlib.h>

int numero, i,j, posicao = 0;

void retangulo(){
	for(j=0; j<numero; j++){
	
		printf("\n");
		for(i=0; i<numero; i++){
			printf(" * ");
	
}
}
}



int main(void){
	
	printf("Digite um Numero para gerar o Retangulo." );
	scanf("%d", &numero);
	retangulo();
	
	
	return 0; 	
	 }
	

