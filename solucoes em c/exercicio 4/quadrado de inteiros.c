/*algoritmo que imprima o quadrado de todos os n�meros inteiros entre 15 e 200.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main () // fun��o principal
{
 setlocale(LC_ALL,"");
 int numero;  // v�riaveis
 int quadrado; //
 
 for( numero = 15; numero <= 200; numero = numero + 1){
   printf("%i�",numero);
   quadrado = pow(numero,2),// conta que ir� elevar o numero ao quadrado
   printf(" = %i\t",quadrado); // resultado
 }
 
 system("pause");
 	return 0;
 
}
