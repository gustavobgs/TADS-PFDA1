/* Exerc�cio 5 */
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
float liq ;
float IR;
float prev;
float bruto;

printf("informe o valor do sal�rio l�quido ");
scanf("%f",&bruto);

IR = bruto*0.275;
prev = bruto *0.085;
liq = bruto-prev-IR;

printf("Salario Bruto = %f\n",bruto);
printf("Previ�ncia = %f\n",prev);
printf("Imposto De Renda = %f\n",IR);
printf("salario L�quido = %f\n",liq);

system("pause");
return(0);
}
