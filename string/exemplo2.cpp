#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[10];
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	printf("\nA palavra �: ");
	puts(palavra);
	
	getch();
	return 0;
}
