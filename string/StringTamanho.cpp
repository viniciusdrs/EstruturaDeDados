#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[] = {"UNINOVE"};
	
	printf("O conte�do da var�vel �: %s\n", nome);
	printf("O tamanho da vari�vel �: %d\n", strlen(nome));
	printf("O tamanho do vetor �: %d", strlen(nome) + 1);
	
	
	getch();
	return 0;
}
