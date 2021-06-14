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
	float result;
	
	printf("Digite o valor da posição x do ponto A: ");
	scanf("%d", &pA.x);
	
	printf("Digite o valor da posição y do ponto A: ");
	scanf("%d", &pA.y);
	
	printf("Digite o valor da posição x do ponto B: ");
	scanf("%d", &pB.x);
	
	printf("Digite o valor da posição y do ponto B: ");
	scanf("%d", &pB.y);
	
	result = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.y, 2));
	
	printf("\nA distância entre dois pontos é %.2f", result);
	
	getch();
	return 0;
}
