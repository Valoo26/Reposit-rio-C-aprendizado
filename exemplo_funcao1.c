/*

uma função em C é uma subrotina  ou subprograma .
A  maioria das linguagens permite a criação de funções.
Uma função pode conter um tipo de retorno pode ser int, float ou algum outro tipo da linguagem.
Se você não informar o tipo da função, então ela será do tipo int, porque esse é o valor default(padrão).

Uma função também pode conter parâmetros, cada parâmetro deve ter um nome e um tipo. Todos são separados por virgula.

Exemplo:
*/
#include<stdio.h>

int ler(); // assinatura ou protótipo

void mostrar (int parm);

int main(void){

	int num;
	num = ler(); //  num recebe o retorno da função ler.
	mostrar(num);
	return 0;
	
}

int ler(){

	int valor;
	printf(" Digite um Número");
	scanf("%d", &valor);
	return valor;
	
}

void mostrar(int parm){

	printf("Foi digitado %d \n", parm);
	
}
	
