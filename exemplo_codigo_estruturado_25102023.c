// c�digo Estruturado - com fun��o ( c�digpo ideal)
#include<stdio.h>

int soma(int p1, int p2);

int main(void){
	
	int pri, seg;
	printf("soma = %d \n", soma(pri,seg)); // os parametros podem ser diferente das declara��es da fun��o principal, o que necessita estar atento � na ordem de chamada q permanece a mesma
	printf("Soma = %d \n ", soma(pri,seg));
	
	return 0;
		
}

int soma(int p1, int p2){
	printf("Digite o primeiro numero: \n");
	scanf("%d", &p1);
	printf("Digite o segundo: \n");
	scanf("%d", &p2);
	return p1+p2;
}
