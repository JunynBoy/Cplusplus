#include <iostream>
#include <locale.h>
#include <stdlib.h>
//Fa�a um programa que leia um n�mero inteiro positivo N e imprima
//todos os n�meros naturais de 0 at� N em ordem crescente.
 
 int main (){
 	setlocale(LC_ALL,"Portuguese");
 	system("COLOR 02");
 	//inicio do programa
	printf("Digite um n�mero; ");
	int i,n;
 	scanf("%d",&n);
 	i=1;
 	printf("\nTodos os n�meros naturais de 0 at� %d s�o:",n);
	while(i<=n){
		printf("[%d]\t",i);
		i++;
	} 	
 	
 	
 }
 
 
 
