/* Exercício 4 */
/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Função principal*/
int main (){
/*acentuação das palavras*/	
setlocale (LC_ALL,"");
/*variáveis*/
int cel;
int far;

printf("insira a temperatura em ° celsius ");
scanf("%i",&cel);

/*cálculo*/
far = (cel*1.8)+32;
printf("temperatura equivalente em ° fahrenheit = %i\n",far);


system ("pause");
return(0);
}
