#include <stdio.h>
#include <locale.h>
#include <stdlib.h>	

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 02");
	//var
	char op;
	
	switchCase:
	
	printf("digite a op��o (+ - * / ): ");
	scanf(" %c", &op);
	
	switch( op ){
		case '+':
			printf("SOMA");
			break;
		case '-':
			printf("SUBTRA��O");
			break;
		case '*':
			printf("MULTIPLICA��O");
			break;
		case '/':
			printf("DIVIS�O");
			break;
		default:
			printf("Op��o inv�lida");
		
	}
	
	return 0;
}
