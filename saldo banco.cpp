#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){

char nome[50];
int op,rep;	
float saldoi =1000.00,saque,deposito,saldof=0,saldofim;

setlocale(LC_ALL,"Portuguese");
printf("\nQual o seu nome?\n");
gets (nome);


do{

printf("\nQual operação deseja realizar?\n1-Deposito\n2-Retirada\n3-Consultar Saldo   \n");
scanf("%d",&op);

 if (op == 1){
	printf("\nDigite o valor do deposito:  ");
	scanf("%f",&deposito);
	saldof = saldoi + deposito;
	//saldoi = saldoi+deposito; errado
	
}
 else if (op == 2){
	printf("\nDigite o valor da retirada:   ");
	scanf("%f",&saque);
	saldof = saldoi - saque;
	
} else if (op ==3)
	printf("\n%s seu saldo é de R$%.f,00\n\n",nome,saldoi);
 
  printf("\nDejesa realizar outra operação?\n1 SIM\n2NÃO.\n");
  scanf("%d",&rep);
  saldoi = saldof; // saldo loop
  system("cls");
 }while (rep==1);
 
 
	if (saldof < 0){
		printf("\n\t%s seu saldo esta negativo R$%.0f,00 :(",nome,saldof);	
	}
	else if(saldof == 0){
		printf("\n\t%s seu saldo está zerado R$%.0f,00 :(",nome,saldof);
	}
	else if  (saldof >0){
		printf("\n\t%s seu saldo está positivo R$%.0f,00 :)",nome,saldof);
    }
    else
    printf("\n");
    

 


return 0;	
}
