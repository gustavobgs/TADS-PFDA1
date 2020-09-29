/*algoritmo que imprima o quadrado de todos os números inteiros entre 15 e 200.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main () // função principal
{
 setlocale(LC_ALL,"");
 int numero;  // váriaveis
 int quadrado; //
 
 for( numero = 15; numero <= 200; numero = numero + 1){
   printf("%i²",numero);
   quadrado = pow(numero,2),// conta que irá elevar o numero ao quadrado
   printf(" = %i\t",quadrado); // resultado
 }
 
 system("pause");
 	return 0;
 
}
