#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<locale.h>

int    carneirinhos = 0;
char   opc; /* S = sim   N = não */
 
 int main() {
 setlocale(LC_ALL,"");
 	
 while (opc = 'S' ){

printf("\tjá dormi ?   S = sim , N = não\n");
 opc = getche (); 
 carneirinhos++;
 
}
 if(opc = 'S')
 printf("%i",carneirinhos);
 
 	system("pause");
 	return 0;
 }
 
