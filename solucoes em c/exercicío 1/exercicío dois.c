
/*bibliotecas*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*func�ao princcipal*/
int main(){
/*acentua��o das palavras*/	
setlocale (LC_ALL,"");
/*vari�veis*/
int num;o
int dobro; 
int quadrado;
/*pedindo um numero ao usu�rio*/

printf("insira um n�mero ");
scanf ("\n%i",&num);

/* opera��es */
dobro = num * 2;
quadrado = num * num;

printf("dobro = %i",dobro);
printf("\nquadrado = %i\n",quadrado);

system("pause");
return(0);
}
