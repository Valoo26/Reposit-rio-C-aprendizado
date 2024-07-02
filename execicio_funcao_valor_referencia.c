
/* Existem dois tipos de par�metros: valor e referenca 

* Par�metro passado por valor � copiado para dentro da fun��o e quando a fun��o altera o valor do par�metro o valor original tambem � alterado da fun��o principal
* Par�metro passado por referencia � apenas indicado para a fun��o. Exite uma liga��o, um tipo de refrencia entre o par�metro e a varialvel original. Assim
quando a fun��o altera o valor do par�metro ele tambem � alterado na fun��o principal.


*/

/* Fun��o valor x Referencia

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
