/* Escreva um programa em C com uma fun��o para ler um  n�mero menor que 10. Este n�mero deve ser  exibido por uma fun��o diferente da  main*/
/* exec�cio fun��o
design by Luiz Miguel Valu Batista
data: 16/08/2023
rev. 000
*/

#include<stdio.h>

int ler();
void mostrar(int parm);
 // valor � apenas na fun��o princiapl na subrotina fica apenas a referencia
 
 int main(void){
 	
 	int num;
 	num = ler();
 	mostrar(num);
 	
 	
 	return 0;
 }
 void mostrar(int parm){
 
 	printf(" Valor = %d \n", parm);
 
 }
 
 
 
 int ler(){
 	int num =11;
	
	while(num >= 10){
	printf("Digite um numero menor que 10 ");
	scanf("%d", &num);
	
	return num;
	}
	
}



