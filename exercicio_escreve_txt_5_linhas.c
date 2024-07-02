/*
Exercício:


Escreva um programa pra gravar 5 linhas em um arquivo texto e depois mostre o conteúdo desse arquivo

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
	scanf(" %[^\n]", &nome); // apaga  buffer do techado como espaço deixado no início da variável criada e atribui o digitado na variável nome.
	if((arqSaida = fopen(nome, "a")) == NULL){
		printf("ERROR \n");
		exit(2);
}
	for(i=0; i<5; i++){
	
	memset(linha, '\0', TAM); // limpa a memória
	printf("digite na linha %d: \n", i+1);
	scanf(" %[^\n]", &linha);
	linha[strlen(linha)] = '\n', // linha {vetor]
	
	fputs(linha,arqSaida);
	
}
	return 0;
}
