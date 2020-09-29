/**/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main () // função principal
{
 setlocale(LC_ALL,"");
int cont; // variáveis
int graos = 1;        

for(cont = 1; cont <= 16 ; cont++) 
graos = graos * 2;

printf(" o monge receberá\n ");
printf("%i grãos ",graos);  

  
system("pause");
return 0;

}
