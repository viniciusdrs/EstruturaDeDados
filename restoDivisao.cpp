#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, resto;
	
	printf("Insira o 1° Número: ");
	scanf("%d", &num1);
	
	printf("Insira o 2° Número: ");
	scanf("%d", &num2);
	
	resto = num1%num2;
	
	printf("O resto da divisão é: %d.", resto);
	
	getch();
	return 0;
	
}
