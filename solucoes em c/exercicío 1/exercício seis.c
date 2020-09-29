/* Gustavo Borges  SP304677X  exercicío 6 */
/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Função principal*/
int main (){
/*acentuação das palavras*/	
setlocale (LC_ALL,"");
/*variáveis*/
double salario;
double reajuste;

printf("informe seu salário ");
scanf("%lf",&salario);

/*salário acrescido do reajuste*/
reajuste = (salario*0.25) + salario;
printf("novo salário com reajuste de 25%% = %.2lf\n",reajuste);

system("pause");
return(0);
}
