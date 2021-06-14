#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a;
	printf("Digite um número decimal: ");
	scanf("%f", &a);
	
	printf("\nO endereço de memória da variável a é %d", &a); // forma Decimal
	printf("\n\nO endereço de memória da variável a é %p", &a); // forma Hexadecimal
	printf("\n\nO endereço de memória da variável a é %x", &a); // forma Hexadecimal
	printf("\n\nO conteúdo  da variável a é %f", a);
	
	getch();
	return 0;
}
