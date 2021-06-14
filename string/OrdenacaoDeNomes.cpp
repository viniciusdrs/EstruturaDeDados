#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define qtd 5
#define letras 20

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[qtd][letras];
	int i;
	
	for(i = 0; i < qtd; i++) {
		printf("Digite um Nome: ");
		gets(nome[i]);
	}
	
	printf("\n\nNome na ordem inversa.\n\n");
	
	for(i = qtd; i >= 0; i--) {
		printf("%s\n", nome[i]);
	}
	
	getch();
	return 0;
}
