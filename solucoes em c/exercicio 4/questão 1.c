/*algoritmo que imprima na tela todos os múltiplos de 3 entre 0 e 100.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main ()
{
 setlocale(LC_ALL,"");
 
 int cont ; // variável contadora 
  printf(" múltiplos de 3\n");

 for(cont = 0; cont <= 100; cont = cont + 3)
{
printf("\n = %i ",cont);
 } 
 

 system("pause");
 return 0;
}
