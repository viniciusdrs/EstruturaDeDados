#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

void produto(int *n1, int *n2) {
	printf("O resultado do produto entre 2 e 110 é de: %d",*n1 * *n2);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1 = 2, num2 = 110, z;
	 
	produto(&num1, &num2);
	
	getch();
	return 0;
}
