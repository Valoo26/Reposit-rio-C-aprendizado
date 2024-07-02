/*
Exercicio:

Escreva um arquivo em C que mostre o conte�do de um arquivo texto que o usu�rio vai digitar.

*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 1000 // tamanho da linha em caracteres

int main(void){
	FILE *arqE;
	char linha[TAM], nome[TAM];
	printf("Digite o nome do arquivo: \n");
	scanf("%s", &nome);
	if((arqE = fopen(nome, "r")) == NULL){
		printf("ERROR \n");
		exit(1);
	}
	while(!feof(arqE)){
	   if(fgets(linha, TAM, arqE)){
	      printf("%s", linha);
	   }
	}
	fclose(arqE);
	return 0;
}
