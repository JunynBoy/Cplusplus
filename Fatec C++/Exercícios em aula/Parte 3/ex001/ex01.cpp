#include <stdio.h>
#include <locale.h>
#include <iostream>
//1- Fazer um programa em linguagem C o qual reproduza a seguinte sa�da;
// 10 - 1
// 9 - 2
// ....
void main(){ //com o void n�s nao precisamos de return, mas perdemos um controle, se eu precisar encerrar um processamento no meio do c�digo 
//tem a ver com o uso do comando break, que vai fazer uma verifica��o no seu c�digo
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	int maior=10;
	int menor=1;
	while(menor <11){
		printf("%d - %d \n",maior, menor);
		maior --;
		menor ++;	
	}
	
	
	//c�digo do professor - APENAS UMA VARI�VEL
	int i;  //nem sempre a 2� vari�vel � uma possibilidade
	for(i=1;i<=10;i++){
		printf("%d-%d\n",i,11-i);
	}
	
	
	system("PAUSE");
}
