#include <istream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
//Fa�a dois programas, um com for e um com while utilizando o RAND() que fa�a
//um jogo de MEGA-SENA.
//
//dados: 	-O jogo ter� 6 n�meros
//	-Os n�meros v�o de 01 a 60, mas se sair 00 n�o tem problema
//
//obs:Pode aparecer n�meros repetidos!
 
 int main (){
 	srand (time(NULL));
 	setlocale(LC_ALL,"Portuguese");
 	system("COLOR 02");
 	printf("oi, eu sou um jogo da mega sena de 6 n�meros aleat�rios\n\n");
 	int i;
 	for(i=1;i<=6;i++){
	 	printf("[ %d ]\t",rand()%61);
 	}
 	printf("\n\n BOA SORTE! \n\n");
 	system("PAUSE");
	return 0;
}
