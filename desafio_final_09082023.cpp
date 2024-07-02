/* Script Mostre o resultado de :

S = 1/2 + 2/3 + 3/4 + ......... + 200/201 + 201/202

*/

#include<stdio.h>

int main(void){
	
	float soma = 0;
	int posicao;
	for(posicao =1; posicao <201; posicao ++){
		soma = soma+(posicao/(posicao+1.0));
	}
	printf("Soma: %.2f", soma);
	
	return 0;
	
}
