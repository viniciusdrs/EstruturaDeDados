#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[] = {"UNINOVE"};
	
	printf("O conteúdo da varável é: %s\n", nome);
	printf("O tamanho da variável é: %d\n", strlen(nome));
	printf("O tamanho do vetor é: %d", strlen(nome) + 1);
	
	
	getch();
	return 0;
}
