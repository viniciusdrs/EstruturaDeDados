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
	
	printf("Digite o 1° número: ");
	scanf("%d", &base);
	
	printf("Digite o 1° número: ");
	scanf("%d", &expoente);
	
	printf("O número %d elevado ao número %d é: %d.", base, expoente, potencia(x, y));
	
	getch();
	return 0;
}
