#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
//4-Fa�a um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a m�dia geral.
int main(){
	setlocale(LC_ALL, "Portuguese");
	system ("COLOR 02");
	float v[15],m,n,cont;
	int i;
	
	for(i=1;i<=15;i++){
		printf("Digite a nota do %i� aluno;\n", i);
		scanf("%f",&n);
		while (n>10){	
			if(n<10){
				v[i]=n;
			} else{
				printf("Digite um valor v�lido;");
				scanf("%f", &n);
				v[i]=n;
			}
		}
		m=m+n;
	}
	
	m=m/15;
	printf("Media geral �: %.2f",m);
	return 0;
}

//coloquei um bonus na programa��o do exerc�cio, para o sistema nao aceitar nenhum valor acima de 10
