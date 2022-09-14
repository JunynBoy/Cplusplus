#include "conv.c"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float valor, resultado;
	int op, online=1;
	
	while(online)
	{
		system("cls");
	
		printf("Convers�o de unidades\n\n");
		printf("0 - SAIR DO PROGRAMA\n");
		printf("1 - mm  -> pol\n");
		printf("2 - pol -> mm\n");
		printf("3 - �C  -> �F\n");
		printf("4 - �F  -> �C\n\n");
		printf("Escolha a op��o: ");
		scanf("%d", &op);
		
		switch(op)
		{
			case 0:
				online=0;
				break;
			case 1:
				printf("\nDigite o valor em mil�metros: ");
				scanf("%f", &valor);
				resultado=mmPol(valor);
				printf("O valor em polegadas � %.2f\n\n", resultado);
				system("pause");
				break;
			case 2:
				printf("\nDigite o valor em polegadas: ");
				scanf("%f", &valor);
				resultado=polMM(valor);
				printf("O valor em mil�metros � %.2f\n\n", resultado);
				system("pause");
				break;
			case 3:
				printf("\nDigite o valor em Celius (�C): ");
				scanf("%f", &valor);
				resultado=celsiusFarenheit(valor);
				printf("O valor em Farenheit � %.2f\n\n", resultado);
				system("pause");
				break;
			case 4:
				printf("\nDigite o valor em Farenheit (�F): ");
				scanf("%f", &valor);
				resultado=farenheitCelsius(valor);
				printf("O valor em Celsius � %.2f\n\n", resultado);
				system("pause");
				break;
			default:
				printf("\nOp��o inv�lida!\n");
				system("pause");
				break;
		}//fim switch(op)
	}//fim while(online)
	return 0;
}
