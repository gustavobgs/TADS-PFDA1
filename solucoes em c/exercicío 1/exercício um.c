/*Exerc�cio 1 */
/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void novafun��o(){
   printf("teste")
}


/*Fun��o Principal*/
int main (){
/*acentua��o das palavras*/	
setlocale (LC_ALL,"");
/*Declara��o de vari�veis*/
 float pi = 3.14159 ;
 float volume ;
 float raio ; 
 float altura ;
/* pedindo os valores ao usu�rio*/
printf(" insira o valor do raio  ");
scanf("%f",&raio);

printf(" insira o valor da altura   ");
scanf("%f",&altura);
/*f�rmula*/
volume = pi*(raio*raio)*altura;
/*resulatado*/
printf("\nvolume da lata de �leo = %f\n",volume);

system("pause");

return (0);
}
