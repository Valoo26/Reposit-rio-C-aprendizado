/*
Exerc�cio:


Gerando Arquivo texto digitando t�tulo e linha do arquivo.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 1000 // tamanho da linha em caracteres
int main(void){
	FILE *arqSaida;
	char linha[TAM], nome[TAM];
	printf("Digite o nome do arquivo: \n");
	scanf(" %[^\n]", &nome); // apaga  buffer do techado como espa�o deixado no in�cio da vari�vel criada e atribui o digitado na vari�vel nome.
	if((arqSaida = fopen(nome, "a")) == NULL){
		printf("ERROR \n");
		exit(2);
}
	memset(linha, '\0', TAM); // limpa a mem�ria
	printf("digite conteudo do arquivo: \n");
	scanf(" %[^\n]", &linha);
	linha[strlen(linha)] = '\n', // linha {vetor]
	fputs(linha,arqSaida);
	return 0;
}
