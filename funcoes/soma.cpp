#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

float n1, n2;

void somar() {
	float soma = n1+n2;
	printf("A soma �: %.2f", soma);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o 1� n�mero: ");
	scanf("%f", &n1);
	
	printf("Digite o 2� n�mero: ");
	scanf("%f", &n2);
	
	somar();
	
	getch();
	return 0;
}
