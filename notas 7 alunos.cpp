/* Neste exerc�cio foi utilizado o a vari�vel soma=0 para acumula��o do valor do loop
das somas das notas dos 7 alunos para realizar a m�dia geral. Foi utilizado o comando
FOR para repeti��o com pr� condi��o que no caso foram 7 vezes. A cada repeti��o do loop
foi usado a condicional encadeada para impress�o da condi��o do aluno (Aprovado, Quinta prova, Reprovado).
A variavel mdg foi utilizada para impress�o da media geral de todas as notas.*/
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
int main (){
char nome[7][40];	
float nota1[7],nota2[7],nota3[7],nota4[4],md[7],mdg,soma[7],somaf=0,mediasala;
	int cont, falta[7], aprovado=0, reprovado=0, quintapv=0, reprofalta=0;

setlocale(LC_ALL,"Portuguese");

printf("\n\tM�DIAS DOS ALUNOS DO CURSO DE GTI SEGUNDO PER�ODO: \n\n");


for (cont= 0; cont < 2; cont++){

printf("\nDigite o nome do %d� aluno: ",cont+1);
 gets (nome[cont]);

 fflush(stdin);
 			 
printf("\nDigite a primeira nota: ");
scanf("%f",&nota1[cont]);

printf("\nDigite a segunda nota : ");
scanf("%f",&nota2[cont]);

printf("\nDigite a terceira nota : ");
scanf("%f",&nota3[cont]);

printf("\nDigite a quarta nota : ");
scanf("%f",&nota4[cont]);

printf("\n Digite a quantidade de faltas: ");
scanf("%d",&falta[cont]);
fflush(stdin);
 soma[cont] = nota1[cont] + nota2[cont] + nota3[cont] + nota4[cont];
 
 md[cont] = soma[cont] / 4;
 
// system("cls");
 
 mediasala = mediasala + md[cont]/2;
  


}
 
for(cont=0; cont < 2; cont++){


	if (falta[cont]<=37)	

		{

			printf("\n\tO Aluno: %s", nome[cont]);

			printf("\n\tQuatidade de faltas: %d", falta[cont]);

			printf("\n\tM�dia do Aluno %d = %.2f", cont+1, md[cont]);

			if (md[cont] >= 6)

			{

			printf("\n\tResultado final: APROVADO\n");

			aprovado++;

			}

			else if (md[cont] <= 3)

			{

			printf("\n\tResultado final: REPROVADO\n");

			reprovado++;

			}

			else

			{

			printf("\n\tResultado final: QUINTA PROVA\n");

			quintapv++;

			}

		}

		else

		{

			printf("\n\tO Aluno: %s", nome[cont]);

			printf("\n\tQuatidade de faltas: %d", falta[cont]);

			printf("\n\tM�dia do Aluno %d = %.2f", cont+1, md[cont]);

			printf("\n\tResultado final: REPROVADO por FALTA\n");

			reprofalta++;

		}

	}

	printf("\n\tQuantidade de alunos APROVADO: %d", aprovado);

	printf("\n\tQuantidade de alunos QUINTA PROVA: %d", quintapv);

	printf("\n\tQuantidade de alunos REPROVADO: %d", reprovado);

	printf("\n\tQuantidade de alunos REPROVADO POR FALTA: %d\n", reprofalta);

	printf("\n\n\t ---SALA OBTEVE A NOTA %.2f NA MEDIA---\n\t", mediasala);

	system ("pause");

	return (0);

}
