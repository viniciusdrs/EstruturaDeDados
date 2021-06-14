#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[30], nome2[30];
	
	printf("Digite seu nome: ");
	gets(nome1);
	
	strcpy(nome2, nome1);
	
	printf("\nSeu nome é: ");
	puts(nome2);
	
	getch();
	return 0;
}
