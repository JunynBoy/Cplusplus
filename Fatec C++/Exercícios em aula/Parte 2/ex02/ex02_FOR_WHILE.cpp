#include <iostream>
#include <locale.h>
#include <stdlib.h>
//Escreva um programa que escreva na tela, de 1 at� 100, de 1 em 1,
//2 vezes. A primeira vez deve usar a estrutura de repeti��o FOR e a
//segunda WHILE.


int main (){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	printf("Escrevendo na tela de 1 at� 100 com FOR:");
	int i;
	//incio da estrutura for 
	for(i=1;i<=100;i++){
		printf("[ %d ]\t",i);
	} 
		printf("\n\n\n");
		printf("Escrevendo na tela de 1 at� 100 com WHILE:");
	int i2;
	i2=1;
	//estrutura while ( condi��o ) - incrementar a vari�vel no final do c�digo
	while(i2<=100){
		printf("[ %d ]\t",i2);
		i2++;
	}
	
	
	return 0;
}
