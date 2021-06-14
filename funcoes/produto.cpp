#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int n1 = 2, n2 = 110;

int produto () {
	return n1*n2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("O produto entre 2 e 110 é: %d.", produto());
	
	getch();
	return 0;
}
