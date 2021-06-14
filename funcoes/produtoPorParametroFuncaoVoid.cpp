#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

void produto (int n1, int n2) {
	int prod;
	prod = n1 * n2;
	printf("O produto entre 2 e 110 é: %d.", prod);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	produto(2, 110);
	
	getch();
	return 0;
}
