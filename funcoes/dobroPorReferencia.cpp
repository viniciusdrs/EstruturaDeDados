#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

void dobro(float *n1) {
	*n1 *= 2;
	printf("O dobro �: %.2f.", *n1);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x;
	
	printf("Digite um n�mero real: ");
	scanf("%f", &x);
	
	dobro(&x);
	
	getch();
	return 0;
}
