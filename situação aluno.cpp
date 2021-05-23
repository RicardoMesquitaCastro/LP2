/* Neste exercício foi utilizado a estrutura de seleção composta onde condições são testadas verdadeiro ou falso, se
falso a proxima condição é testada, se verdadeiro a condição é executada! */
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


