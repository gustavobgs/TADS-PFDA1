/**/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main () // fun��o principal
{
 setlocale(LC_ALL,"");
int cont; // vari�veis
int graos = 1;        

for(cont = 1; cont <= 16 ; cont++) 
graos = graos * 2;

printf(" o monge receber�\n ");
printf("%i gr�os ",graos);  

  
system("pause");
return 0;

}
