#include <iostream>
#include <locale.h>
#include <stdlib.h>
//Fa�a um programa que leia 10 inteiros e imprima sua m�dia.

int main (){
	system("COLOR 02");
	setlocale(LC_ALL,"portuguese");
	//vari�veis
	int i,ni;
	float n,s,m;
	
	//exiba parte 1 
	printf("Quantos numeros voce quer digitar ? ");
	scanf("%d",&ni);
	s=0;
	//estrutura l�gica
	for  (i=1;i<=ni;i++){
		printf("Digite seu %d� n�mero: ",i);
		scanf("%f",&n);
		s=s+n;
	}
	
	//exibi��o de vari�veis	
	m=s/ni;
	printf("sua m�dia de numeros � de [ %.2f ];",m);
	//o C tem costume de arredondar os valores entao m se for 5.7 vira 6
	
	
return 0;	
}
