#include <iostream>
#include <locale.h>
#include <stdlib.h>

int main (){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	//inicio do programa
	printf("Quanto n�meros m�ltiplos de 3 voc� quer ? ");
	//vari�veis
	int i,n,m;
	m=0;
	scanf("%d",&n); //%d inteiro decimal com sinal e %u para int dec sem sinal 
	//estrutura de repeti��o
	for (i=1;i<=n;i++){
		m=m+3;
		printf("O %d� m�ltiplo de 3 �; %d\",i,m);
	}
	
	
	return 0;
}
