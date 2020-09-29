/*. Escreva um programa que receba um número inteiro positivo n e retorne a soma dos n primeiros números inteiros.
Por exemplo, se for digitado 5, o programa deve mostrar o resultado da soma = 15, pois, 15=1+2+3+4+5.
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main () // função principal
{
 setlocale(LC_ALL,"");
int num ;   //váriáveis
int mult = 0;

  printf("digite um numero ");
  scanf("%i",&num);
  
  for( ; num >= 1 ; --num) {
  mult = mult + num; // irá somar os antecessores
  printf("%i + ",num);  	
  }
 
  printf(" = %i\n",mult);
  system("pause");
 return 0;
}
