#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float div;
	int n1, *p;
	
	printf("Digite um n�mero real: ");
	scanf("%d", &n1);
	
	p = &n1;
	
	div = (float)n1/5;
	
	printf("\nO resultado da divis�o �: %.2f", div);

	getch();
	return 0;
}
