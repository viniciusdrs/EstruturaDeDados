#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

float calculaDistancia(float x1, float x2, float y1, float y2) {
	
	return  sqrt(pow(x2 - x1, 2)+ pow(y2 - y1, 2));
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a1, a2, b1, b2;
	
	printf("Digite o valor de x1: ");
	scanf("%f", &a1);
	
	printf("Digite o valor de x2: ");
	scanf("%f", &a2);
	
	printf("Digite o valor de y1: ");
	scanf("%f", &b1);
	
	printf("Digite o valor de y2: ");
	scanf("%f", &b2);
	
	printf("\nA distância entre os pontos é de: %.2f", calculaDistancia(a1, a2, b1, b2));
	
	getch();
	return 0;
}
