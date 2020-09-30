/*Exercício 1 */
/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void novafunção(){
   printf("teste")
}


/*Função Principal*/
int main (){
/*acentuação das palavras*/	
setlocale (LC_ALL,"");
/*Declaração de variáveis*/
 float pi = 3.14159 ;
 float volume ;
 float raio ; 
 float altura ;
/* pedindo os valores ao usuário*/
printf(" insira o valor do raio  ");
scanf("%f",&raio);

printf(" insira o valor da altura   ");
scanf("%f",&altura);
/*fórmula*/
volume = pi*(raio*raio)*altura;
/*resulatado*/
printf("\nvolume da lata de óleo = %f\n",volume);

system("pause");

return (0);
}
