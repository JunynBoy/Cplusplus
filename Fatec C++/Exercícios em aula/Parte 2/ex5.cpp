#include <iostream>
#include <stdio.h>
#include <locale.h>

int main (){
	system("color 02");
	setlocale (LC_ALL,"portuguese");
	float n,m,soma;
	int i;
	soma=0;
	for(i=1; i<=10 ; i++){
		printf("digite um n�mero: ");
		scanf("%f", &n);
		soma=n+soma;
		
	}
	m=soma/10;
	printf("o total de soma �: %f.2\n", soma);
	printf("a m�dia �: %f",m);
	
	system("pause");
	return 0;
}

