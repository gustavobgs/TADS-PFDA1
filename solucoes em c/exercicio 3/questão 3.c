/* programa em Linguagem C utilizando o loop do while que solicite ao usuário para que digite um
número inteiro e apresente na tela a tabuada de 1 a 10 para este número.*/
//bibliotecas a serem utilizadas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//função principal
int main()
{
	setlocale (LC_ALL,"");
	int i = 1;
	int num;
	int mult; // váriável refeente ao cálculo
	
	printf("insira um número"); //solicitação do número ao usuário
	scanf("%i",&num);
	
	do{  mult = num * i; //o valor informado é multiplicado por i
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
