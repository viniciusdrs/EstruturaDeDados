#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float div;
	int n1, *p;
	
	printf("Digite um número real: ");
	scanf("%d", &n1);
	
	p = &n1;
	
	div = (float)n1/5;
	
	printf("\nO resultado da divisão é: %.2f", div);

	getch();
	return 0;
}
