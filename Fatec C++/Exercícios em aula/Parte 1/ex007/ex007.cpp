#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
/*
	Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
A f�rmula de convers�o �: C = 5*(F - 32) /9, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.
*/
int main (int nNumberofArgs, char* pszArgs[])
{
	//insere a temperatura em Celsius
	int celsius;
	cout << "Enter the temperature in Celsius: ";
	cin>> celsius;
	
	//Calcula o fator de conversão em Celsius
	//Para farenheit
	int factor;
	factor = 212 - 32;
	
	//usa o fator de conversão para converter celsius
	//para valores em fahrenheit 
	int fahrenheit;
	fahrenheit = factor * celsius/100 + 32;
	
	//exibe os resultados (seguidos por Newline)
	cout << "Fahrenheit value is: ";
	cout << fahrenheit << endl;
	
	//espera até o usuário estar pronto para fechar o programa
	//para permitir que ele veja os resultados
	cout << "Press enter to continue..." << endl;
	cin.ignore(10, '\n');
	cin.get ();
	return 0;
		
}


//exerc�cio feito com base no livro "C++ para leigos"
