/*
EXEMPLO:

Gerando arquivo de texto


*/

#include<stdio.h>
#include<stdlib.h>
#define TAMANHO 1000 // tamanho da linha em caracteres

int main(void){

	FILE *arqE;
	char linha [TAMANHO];
	if((arqE = fopen("entrada.txt", "r")) == NULL){
		printf("ERROR \n");
		exit(1);
	}
	while(!feof(arqE)){
	   if(fgets(linha, TAMANHO, arqE)){
	      printf("%s", linha);
	   }
	}
	fclose(arqE);
	return 0;
}
	

