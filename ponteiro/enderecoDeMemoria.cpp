#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a = 10;
	
	printf("O endere�o de mem�ria da vari�vel a � %d", &a); // forma Decimal
	printf("\n\nO endere�o de mem�ria da vari�vel a � %p", &a); // forma Hexadecimal
	printf("\n\nO conte�do  da vari�vel a � %d", a);
	
	getch();
	return 0;
}
