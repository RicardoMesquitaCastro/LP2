#include <stdio.h>
#include <locale.h>


int main (){

int num2,num1,cont,fimlop;	
setlocale(LC_ALL,"Portuguese");

	printf("\n\tInforme um numero:  ");
	scanf("%d",&num1);
	

do{

fflush(stdin);	
printf("\n\tInforme um n�mero:  ");
scanf("%d",&num1);
printf("\n\tInforme outro n�mero:  ");
scanf("%d",&num2);
cont += num1+num2;

printf("sair = 1\n continuar qualquer tecla\n");
scanf("%d",fimlop);
}while (fimlop ==1);


printf("A soma � %d",cont);

return 0;
}
