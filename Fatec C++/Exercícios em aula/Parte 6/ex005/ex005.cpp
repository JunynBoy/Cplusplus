#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
//5-) Fa�a um programa que leia dois vetores de 5 posi��es (A e B). Depois crie um 
//vetor C contendo em cada posi��o a soma das mesmas posi��es dos vetores A e B.
//Ex.: A = {1, 2, 3, 4, 5} B={6, 7, 8, 9, 10} C (A+B)={7, 9, 11, 13, 15}
int main(){
	setlocale (LC_ALL,"Portuguese");
	system("COLOR 02");
	
	int i,v1[5],v2[5],v3[5];
	
	for(i=1;i<=5;i++){
		printf("%i� valor do vetor 1=%i\n", v1[i]);
		printf("%i� valor do vetor 2=%i\n", v2[i]);
		v3[i]=v1[i]+v2[i];
		printf("%i� valor do vetor 3=%i\n", v3[i]);
		
	}
	
	
	return 0;
}
