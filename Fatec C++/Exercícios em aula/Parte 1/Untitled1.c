#include <stdio.h>
#include <locale.h>


int main(){

	setlocale(LC_ALL, "portuguese" );
	 //declara��o de vari�veis
	 int n1,n2, soma;
	 
	 //inicializa��o de vari�veis
	 n1 = 0; 
	 n2 = 0; //n1 = n2 = soma = 0;
	 soma = 0;
	 
	 //Ler n1
	 printf("Digite o primeiro n�mero: ");
	 scanf("%d", &n1);
	 
	 //Ler n2
	 printf("Digite o primeiro n�mero: ");
	 scanf("%d", &n2);
	 
	 //Soma <- n1 + n2
	 soma = n1 + n2;
	 
	 //Exiba soma 
	 //printf("A soma foi %d",soma);
	 printf("a soma de %d e %i foi %d", n1,n2,soma) ; 


	return 0;
}


