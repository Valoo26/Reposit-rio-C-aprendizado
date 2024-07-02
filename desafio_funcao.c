/* 
Script desfio de função
Design by Luiz Miguel Valu Batista 
data: 10/08/2023
rev.00

-------------------------------------------------------------------------------------------------------------------------------
Elaborar um programa com duas funções uma para pedir para o usuário digitar um numero entre 5 e 10, e outra para mostrar o numero digitado.
*/

#include<stdio.h>


void mostrar(int valor);
int leitura();

int main(void){

	int numero;
	numero = leitura();
	mostrar(numero);
	
	return 0;
	

}

void mostrar(int valor){
	printf("Resultado: %d \n", valor);
	
}

int leitura(){
	int tentativa = 3;
	while((tentativa < 5) || (tentativa > 10)){
		printf("Digite um numero entre 5 e 10");
		scanf("%d",  &tentativa);
		
	}
	return tentativa;
}
