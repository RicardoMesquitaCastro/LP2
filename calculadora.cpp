#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	
float num1,num2,resp;

char op,rep;
setlocale(LC_ALL,"Portuguese");



 
do{

printf("\t\t======SELECIONE UMA OPÇÃO=========\n1-Multiplicação-\n2-Soma-\n3-Subtrair-\n4-Dividir-\n\t");
scanf("%d",&op);


printf("\n\tDigite um número-");
scanf("%f",&num1);
printf("\n\tDigite outro número-");
scanf("%f",&num2);


if (op ==1){
resp = num1*num2;
printf("\n\tO resultado de %.0f * %.0f é = %.0f\n\n ",num1,num2,resp);
}
else if (op ==2){
	resp = num1+num2;
	printf("\n\tO resultado de %.0f + %.0f é  = %.0f\n\n ",num1,num2,resp);
}
else if (op==3){
	resp = num1-num2;
	printf("\n\tO resultado de %.0f - %.0f é =: %.0f\n\n ",num1,num2,resp);
}
else if (op==4){
	resp = num1/num2;
	printf("\n\tO resultado de %.0f / %.0f é = %.2f\n\n ",num1,num2,resp);
}



printf("Digite 1 para sair ou 2 tecla para realizar outra operação:");
scanf("%d",&rep);
system("cls");
}while(rep ==2);



return 0;
}













