#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main (){

float num,soma = 0, md, maior =0, menor= 10001;
int quant = 0, cont =0; // para entrar a primeira vez no laço pq =! 1;	
setlocale(LC_ALL,"Portuguese");

while (cont != 1){
	printf("\n\tDigite um Número Positivo:  ");
	scanf("%f",&num);
	soma = soma + num;
	quant= quant+1; // quantos numeros foram lidos
	if (num > maior);
	maior = num;
	if (num < menor);
	menor = num;
	printf("\n\tDeseja efetuar nova leitura?  ");
	printf("\n\tDigite 1 para SAIR!");
	printf("\n\tDigite 0 para CONTINUAR!  ");
	scanf("%d",&cont);
}
md= soma/quant;
system("cls");
printf("\n\tSomatória = %.2f \n", soma);
printf("\n\t%d - Números digitados. \n",quant);
printf("\n\tMédia = %.2f \n", md);
printf("\n\tMaior valor lido = %.2f \n", maior);
printf("\n\tMenor valor lido = %.2f \n", menor);

return 0;
}
