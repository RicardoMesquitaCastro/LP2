#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	
float num1,num2,resp;

char op,rep;
setlocale(LC_ALL,"Portuguese");



 
do{

printf("\t\t======SELECIONE UMA OP��O=========\n1-Multiplica��o-\n2-Soma-\n3-Subtrair-\n4-Dividir-\n\t");
scanf("%d",&op);


printf("\n\tDigite um n�mero-");
scanf("%f",&num1);
printf("\n\tDigite outro n�mero-");
scanf("%f",&num2);


if (op ==1){
resp = num1*num2;
printf("\n\tO resultado de %.0f * %.0f � = %.0f\n\n ",num1,num2,resp);
}
else if (op ==2){
	resp = num1+num2;
	printf("\n\tO resultado de %.0f + %.0f �  = %.0f\n\n ",num1,num2,resp);
}
else if (op==3){
	resp = num1-num2;
	printf("\n\tO resultado de %.0f - %.0f � =: %.0f\n\n ",num1,num2,resp);
}
else if (op==4){
	resp = num1/num2;
	printf("\n\tO resultado de %.0f / %.0f � = %.2f\n\n ",num1,num2,resp);
}



printf("Digite 1 para sair ou 2 tecla para realizar outra opera��o:");
scanf("%d",&rep);
system("cls");
}while(rep ==2);



return 0;
}













