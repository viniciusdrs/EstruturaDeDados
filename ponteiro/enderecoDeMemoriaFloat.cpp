#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a;
	printf("Digite um n�mero decimal: ");
	scanf("%f", &a);
	
	printf("\nO endere�o de mem�ria da vari�vel a � %d", &a); // forma Decimal
	printf("\n\nO endere�o de mem�ria da vari�vel a � %p", &a); // forma Hexadecimal
	printf("\n\nO endere�o de mem�ria da vari�vel a � %x", &a); // forma Hexadecimal
	printf("\n\nO conte�do  da vari�vel a � %f", a);
	
	getch();
	return 0;
}
