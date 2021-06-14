#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

char nome[30];

void elogio() {
	printf("Olá, %s.\n", nome);
	printf("Bonito nome!");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Qual é o seu nome? ");
	gets(nome);
	
	elogio();
	
	getch();
	return 0;
}
