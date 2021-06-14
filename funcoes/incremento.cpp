#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

void incremento(int num1) {
	num1++;
	printf("O número acrescido em 1 é de: %d", num1);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	incremento(215);
	
	getch();
	return 0;
}
