#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<locale.h>

int    carneirinhos = 0;
char   opc; /* S = sim   N = n�o */
 
 int main() {
 setlocale(LC_ALL,"");
 	
 while (opc = 'S' ){

printf("\tj� dormi ?   S = sim , N = n�o\n");
 opc = getche (); 
 carneirinhos++;
 
}
 if(opc = 'S')
 printf("%i",carneirinhos);
 
 	system("pause");
 	return 0;
 }
 
