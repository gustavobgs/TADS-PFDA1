/* Exerc�cio 7 */
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
int anonasci; 
int anoatual;
int idade,meses,dias,semanas;  /*idade da pessoa em meses,semanas,dias.*/

printf("iforme seu ano de nascimento :  ");
scanf("%i",&anonasci);

printf("iforme o ano atual :  ");
scanf("%i",&anoatual);
/*calculos*/
   idade = anoatual - anonasci; 
   meses = idade*12;
   semanas = meses*4;
   dias = semanas *7;
/*resultado*/
printf("idade em anos %i\n",idade);
printf("idade em meses %i\n",meses);
printf("idade em semanas %i\n",semanas);
printf("idade em dias %i\n",dias);


system("pause");
return (0);
}
