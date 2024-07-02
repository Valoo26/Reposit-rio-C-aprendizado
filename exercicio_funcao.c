/* Escreva um programa em C com uma função para ler um  número menor que 10. Este número deve ser  exibido por uma função diferente da  main*/
/* execício função
design by Luiz Miguel Valu Batista
data: 16/08/2023
rev. 000
*/

#include<stdio.h>

int ler();
void mostrar(int parm);
 // valor é apenas na função princiapl na subrotina fica apenas a referencia
 
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



