//bibliotecas a serem utilizadas 
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
//função principal
int main()
{
	setlocale (LC_ALL,"");
	char d1,d2,d3,d4,d5,d6,d7,d8,d9,d10;
	int i = 1;  // representa o numero de tentativas
	

 do{
    	printf("insira a senha    ");
	
	d1 = getch();
	 printf("*");
	d2 = getch();
	 printf("*");
	d3 = getch();
	printf("*");
	d4= getch();
	 printf("*");
	d5= getch();
	 printf("*");
	d6= getch();
	 printf("*");
	d7= getch();
	 printf("*");
	d8= getch();
	 printf("*");
	d9= getch();
	 printf("*");
	d10= getch();
	 printf("*");
    
      	
  
if ( d1 == 'i' && d2 == 'r'&& d3 == 'o'&& d4 == 'n'&& d5 == 'm'&& d6 == 'a'&& d7 =='i' && d8 == 'd' && d9 == 'e'&& d10 == 'n'){
   printf("\n\nAcesso Vip!\n") ;
   i = i + 3;}  // adicionando o valor limte permitido pelo while , se a senha estiver correta o rpograma ira roda somente uma vez
else{ i++;   // permite 3 tentativas caso o usuário erre a senha 
   printf("\nBARRADO\n");}
}
  while( i <= 3); 	
   
	system("pause");
	return 0;
	
}
