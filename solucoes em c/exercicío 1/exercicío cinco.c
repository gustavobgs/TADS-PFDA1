/* Exercício 5 */
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
float liq ;
float IR;
float prev;
float bruto;

printf("informe o valor do salário líquido ");
scanf("%f",&bruto);

IR = bruto*0.275;
prev = bruto *0.085;
liq = bruto-prev-IR;

printf("Salario Bruto = %f\n",bruto);
printf("Previência = %f\n",prev);
printf("Imposto De Renda = %f\n",IR);
printf("salario Líquido = %f\n",liq);

system("pause");
return(0);
}
