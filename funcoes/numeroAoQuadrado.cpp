#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

float n, quad;

void quadrado() {
	quad = pow(n, 2);
	//pow potencia -> pow(base, expoente)
	printf("O quadrado do n�mero %.2f �: %.2f.", n, quad);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%f", &n);
	
	quadrado();
	
	getch();
	return 0;
}
