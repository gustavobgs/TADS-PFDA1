/* Gustavo Borges  SP304677X  exercic�o 6 */
/* Bibliotecas */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Fun��o principal*/
int main (){
/*acentua��o das palavras*/	
setlocale (LC_ALL,"");
/*vari�veis*/
double salario;
double reajuste;

printf("informe seu sal�rio ");
scanf("%lf",&salario);

/*sal�rio acrescido do reajuste*/
reajuste = (salario*0.25) + salario;
printf("novo sal�rio com reajuste de 25%% = %.2lf\n",reajuste);

system("pause");
return(0);
}
