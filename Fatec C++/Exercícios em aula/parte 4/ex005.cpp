#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//ex005
int main(){
	system ("COLOR 02");
	setlocale(LC_ALL,"Portuguese");
	int n = 0;
	printf("Digite um numero\n");
	scanf("%d", &n);
	if((n%2) == 0){
		printf("O numero %d digitado � Par", n);
	}
	else{
		printf("O numero %d digitado � Impar", n);
	}
	return 0;
}
