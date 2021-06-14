#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int x;
	int y;
}ponto;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	ponto pA, pB;
	float diag, altura, base, perimetro, area;
	
	printf("Digite o valor x do ponto superior esquerdo: ");
	scanf("%d", &pA.x);
	
	printf("Digite o valor y do ponto superior esquerdo: ");
	scanf("%d", &pA.y);
	
	printf("Digite o valor x do ponto inferior esquerdo: ");
	scanf("%d", &pB.x);
	
	printf("Digite o valor y do ponto inferior esquerdo: ");
	scanf("%d", &pB.y);
	
	diag = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.y, 2));
	
	altura = sqrt(pow(pA.x - pA.x, 2) + pow(pB.y - pA.y, 2));
	base = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pB.y, 2));
	
	perimetro = 2*base + 2*altura;
	area = base * altura;
	
	printf("\nO perimetro do retângulo é %.2f\n", perimetro);
	printf("A área do retângulo é %.2f\n", area);
	printf("O comprimento da diagonal do retângulo é %.2f", diag);

	getch();
	return 0;
}
