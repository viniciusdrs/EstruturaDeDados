#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int x;
	int y;
}ponto;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	ponto pA, pB, p;
	
	printf("Digite o valor de x do ponto superior esquerdo: ");
	scanf("%d", &pA.x);
	
	printf("Digite o valor de y do ponto superior esquerdo: ");
	scanf("%d", &pA.y);
	
	printf("Digite o valor de x do ponto inferior esquerdo: ");
	scanf("%d", &pB.x);
	
	printf("Digite o valor de y do ponto inferior esquerdo: ");
	scanf("%d", &pB.y);
	
	
	printf("\nDigite o valor de x do ponto a ser estudado: ");
	scanf("%d", &p.x);
	
	printf("Digite o valor de y do ponto a ser estudado: ");
	scanf("%d", &p.y);
	
	if(p.x >= pA.x && p.x <= pB.x && p.y >= pB.y && p.y <= pA.y) {
		printf("\nO ponto está dentro do retângulo");
	} else {
		printf("\nO ponto não está dentro do retângulo");
	}
	
	
	getch();
	return 0;
}
