/*

uma fun��o em C � uma subrotina  ou subprograma .
A  maioria das linguagens permite a cria��o de fun��es.
Uma fun��o pode conter um tipo de retorno pode ser int, float ou algum outro tipo da linguagem.
Se voc� n�o informar o tipo da fun��o, ent�o ela ser� do tipo int, porque esse � o valor default(padr�o).

Uma fun��o tamb�m pode conter par�metros, cada par�metro deve ter um nome e um tipo. Todos s�o separados por virgula.

Exemplo:
*/
#include<stdio.h>

int ler(); // assinatura ou prot�tipo

void mostrar (int parm);

int main(void){

	int num;
	num = ler(); //  num recebe o retorno da fun��o ler.
	mostrar(num);
	return 0;
	
}

int ler(){

	int valor;
	printf(" Digite um N�mero");
	scanf("%d", &valor);
	return valor;
	
}

void mostrar(int parm){

	printf("Foi digitado %d \n", parm);
	
}
	
