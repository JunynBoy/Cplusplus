#include <iostream>
// diretiva de pre processamento
using namespace std;
//espa�o de nomes -> nao muito usual
//deixa o uso do name std::cout em somente cout

int main()
{
	system("color 02");
	//cout - sa�da de dados
	std::cout << "Marcos Gasparini Junior" << std::endl; //endl indica para inserir um caractere de quebra de linha
	std::cout << "Tenho 21 anos" << std::endl;
	std::cout << "quero aprender a programar" << std::endl;
	system("PAUSE");
	//chama o shell do windows
	// e coloca o comando pause
	
	return 0;
	//Retorna para o sistema operacional zero
	// zero � o padr�o para informar que tudo deu certo!
	//assim se a fun��o main der certo ela retornar� 0

}

