/* programa em Linguagem C utilizando o loop do while que solicite ao usu�rio para que digite um
n�mero inteiro e apresente na tela a tabuada de 1 a 10 para este n�mero.*/
//bibliotecas a serem utilizadas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//fun��o principal
int main()
{
	setlocale (LC_ALL,"");
	int i = 1;
	int num;
	int mult; // v�ri�vel refeente ao c�lculo
	
	printf("insira um n�mero"); //solicita��o do n�mero ao usu�rio
	scanf("%i",&num);
	
	do{  mult = num * i; //o valor informado � multiplicado por i
	printf("%i",num);
    printf("x");  
	printf("%i",i);
	printf("="); 
	printf("%i\n",mult);
	   i++;  
	}
	 while( i <= 10);
	
	system("pause");
	return 0;
}
