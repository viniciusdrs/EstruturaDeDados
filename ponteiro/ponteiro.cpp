#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int b = 10, *p;
	
	p = &b;
	
	*p = b;
	
	printf("O endere�o do ponteiro p �: %x", p);
	printf("\nO conte�do do ponteiro *p �: %d", *p);
	
	getch();
	return 0;
}
