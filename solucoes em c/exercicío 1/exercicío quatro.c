/* Exerc�cio 4 */
/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Fun��o principal*/
int main (){
/*acentua��o das palavras*/	
setlocale (LC_ALL,"");
/*vari�veis*/
int cel;
int far;

printf("insira a temperatura em � celsius ");
scanf("%i",&cel);

/*c�lculo*/
far = (cel*1.8)+32;
printf("temperatura equivalente em � fahrenheit = %i\n",far);


system ("pause");
return(0);
}
