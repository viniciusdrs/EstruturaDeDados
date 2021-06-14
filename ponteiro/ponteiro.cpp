#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int b = 10, *p;
	
	p = &b;
	
	*p = b;
	
	printf("O endereço do ponteiro p é: %x", p);
	printf("\nO conteúdo do ponteiro *p é: %d", *p);
	
	getch();
	return 0;
}
