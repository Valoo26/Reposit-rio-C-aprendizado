/*


Exemplo função aula 20/09/2023

Prof. Oclair

Algoritimos II

*/

#include<stdio.h>

int somar(int fim);

int main(void){
	int soma;
	soma = somar(10);
	printf("Resultado: %d \n", soma);
	return 0;
}

int somar(int fim){
	
	int pos, res=0;
for(pos =1; pos<=fim; pos ++){
	res = res+pos;
	
}
return res;
}
