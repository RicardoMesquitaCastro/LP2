/* Neste exerc�cio foi utilizado a estrutura de sele��o composta onde condi��es s�o testadas verdadeiro ou falso, se
falso a proxima condi��o � testada, se verdadeiro a condi��o � executada! */
#include <stdio.h>
#include <locale.h>

int main (){
	
float nota1,nota2,md;

setlocale(LC_ALL,"Portuguese");
printf("Digite a primeira nota: ");
scanf("%f",&nota1);
printf("Digite a segunda nota : ");
scanf("%f",&nota2);
md = (nota1 + nota2)/2;

if (md < 3)
printf("\nAluno Reprovado.");

else if (md >= 3 && md < 6)
printf("\nAluno de Quinta Prova.");

else 
printf("\nAluno Aprovado.");


return 0;
}


