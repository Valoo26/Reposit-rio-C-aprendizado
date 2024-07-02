/* Exercício 02

Escreva as funções pedePar() e pedeImpar().

design by Luiz Miguel Valu Batista
data: 25/10/2023
rev.000

*/

#include<stdio.h>
int pedePar(int x);
int pedeImpar(int x);

int main (void){
	
	int pos, num,vet[10];
	for(pos=0;pos<10;pos++){
		if((pos%2)==0){
			vet[pos]=pedePar(pos);
		}
		else{
			vet[pos]=pedeImpar(pos);
		}
	}
	for(pos=0;pos<10;pos++){
		printf("%d \n", vet[pos]);
	}
	return 0;
	
}

int pedePar( int x){
	int num;
	do{
		printf("Digite %d numero PAR: \n",x);
		scanf("%d",&num);
		
	}while(num%2!=0);
	return num;
	
}
int pedeImpar(int x){
	int num;
	do{
		printf("Digite %d numero IMPAR: \n",x);
		scanf("%d",&num);
		
	}while(num%2==0);
	return num;
}
