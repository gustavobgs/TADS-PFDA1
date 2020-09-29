
/*bibliotecas*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*funcçao princcipal*/
int main(){
/*acentuação das palavras*/	
setlocale (LC_ALL,"");
/*variáveis*/
int num;o
int dobro; 
int quadrado;
/*pedindo um numero ao usuário*/

printf("insira um número ");
scanf ("\n%i",&num);

/* operações */
dobro = num * 2;
quadrado = num * num;

printf("dobro = %i",dobro);
printf("\nquadrado = %i\n",quadrado);

system("pause");
return(0);
}
