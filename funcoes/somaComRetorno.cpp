#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

float n1, n2;

float somar() {
	return n1 + n2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o 1° número: ");
	scanf("%f", &n1);
	
	printf("Digite o 2° número: ");
	scanf("%f", &n2);
	
	printf("A soma entre %.2f e %.2f é: %.2f.", n1,n2,somar());
	
	getch();
	return 0;
}
