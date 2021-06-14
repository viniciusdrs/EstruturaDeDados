#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a = 10;
	
	printf("O endereço de memória da variável a é %d", &a); // forma Decimal
	printf("\n\nO endereço de memória da variável a é %p", &a); // forma Hexadecimal
	printf("\n\nO conteúdo  da variável a é %d", a);
	
	getch();
	return 0;
}
