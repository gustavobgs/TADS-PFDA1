/* Exerc�cio 3 */
/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Fun��o principal*/
int main (){
/*vari�veis*/
/*acentua��o das palavras*/	
setlocale (LC_ALL,"");
int base;	
int exp;
int calculo;	
/*pedidos ao usu�rio*/
printf("informe o valor da base ");
scanf("%i",&base);	

printf("informe o valor do expoente ");
scanf("%i",&exp);	

calculo = pow(base,exp);

printf("resultado = %i\n",calculo);	
system("pause");	
	return(0);
}

