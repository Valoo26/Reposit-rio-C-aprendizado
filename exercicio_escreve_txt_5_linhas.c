/*
Exerc�cio:


Escreva um programa pra gravar 5 linhas em um arquivo texto e depois mostre o conte�do desse arquivo

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 1000 // tamanho da linha em caracteres
int main(void){
	int i;
	FILE *arqSaida;
	char linha[TAM], nome[TAM];
	printf("Digite o nome do arquivo: \n");
	scanf(" %[^\n]", &nome); // apaga  buffer do techado como espa�o deixado no in�cio da vari�vel criada e atribui o digitado na vari�vel nome.
	if((arqSaida = fopen(nome, "a")) == NULL){
		printf("ERROR \n");
		exit(2);
}
	for(i=0; i<5; i++){
	
	memset(linha, '\0', TAM); // limpa a mem�ria
	printf("digite na linha %d: \n", i+1);
	scanf(" %[^\n]", &linha);
	linha[strlen(linha)] = '\n', // linha {vetor]
	
	fputs(linha,arqSaida);
	
}
	return 0;
}
