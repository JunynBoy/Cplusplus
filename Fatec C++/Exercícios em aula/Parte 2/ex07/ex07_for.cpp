#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>
//Fa�a um programa que leia um n�mero inteiro N e depois imprima
//os N primeiros n�meros naturais �mpares.

int main (){
	int i=1,n;
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	//inicio do programa
	printf("Digite um n�mero: ");
	scanf("%d", &n); //entrada de dados
	printf("Os numeros inteiros naturais �mpares at� o numero %d �:\n",n);
	while(i<=n){ 
		printf("[%d]\t",i);
		i=i+2;
	}
	printf("\n\n\n");
	system("PAUSE");
	return 0;
}
