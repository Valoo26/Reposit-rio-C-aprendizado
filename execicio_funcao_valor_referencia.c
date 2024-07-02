
/* Existem dois tipos de parâmetros: valor e referenca 

* Parâmetro passado por valor é copiado para dentro da função e quando a função altera o valor do parâmetro o valor original tambem é alterado da função principal
* Parâmetro passado por referencia é apenas indicado para a função. Exite uma ligação, um tipo de refrencia entre o parâmetro e a varialvel original. Assim
quando a função altera o valor do parâmetro ele tambem é alterado na função principal.


*/

/* Função valor x Referencia

design by Luiz Miguel Valu Batista
data: 16/08/2023
rev. 0000

*/

void limpar(int * parm){
	
	*parm = 0;
}

int main(void){
	int num = 3;
	limpar(&num);
	return 0;
}
