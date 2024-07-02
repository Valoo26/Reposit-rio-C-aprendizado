/*
Exercício:
- Apresente um programa com a função comum para calcular o fatorial de um numero passado como parâmetro para esta função. ex. 5! = 5*4*3*2*1
Design by Luiz Miguel Valu Batista
data: 20/09/2023
rev.000
*/
#include<stdio.h>
int fator(int parm);
int main(void){
	int  num;	
	printf("Digite um numero");
	scanf("%d", &num);
	printf("O fatorial de %d eh:  %d \n",num, fator(num));
	
	return 0;
}
int fator(int parm){
	int pos, resp =1;
	for(pos = parm; pos>1;pos--){
		resp = resp*pos;
	}
	return resp;
}
