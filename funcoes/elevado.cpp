#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int potencia(int n1, int n2) {
	return pow(n1, n2);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int base, expoente;
	
	printf("Digite o 1� n�mero: ");
	scanf("%d", &base);
	
	printf("Digite o 1� n�mero: ");
	scanf("%d", &expoente);
	
	printf("O n�mero %d elevado ao n�mero %d �: %d.", base, expoente, potencia(x, y));
	
	getch();
	return 0;
}
