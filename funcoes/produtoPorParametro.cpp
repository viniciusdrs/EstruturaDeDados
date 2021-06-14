#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int produto (int n1, int n2) {
	return n1*n2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("O produto entre 2 e 110 é: %d.", produto(2, 110));
	
	getch();
	return 0;
}
