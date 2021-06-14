#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20], sobrenome[20], nomeCompleto[40];
	
	printf("Digite o seu nome: ");
	gets(nome);
	
	printf("Digite o seu sobrenome: ");
	gets(sobrenome);
	
	strcat(nome, sobrenome);
	
	strcpy(nomeCompleto, nome);
	
	printf("Seu nome completo é: ");
	puts(nomeCompleto);
	
	getch();
	return 0;
}
