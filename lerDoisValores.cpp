#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, acrec, desc;
	
	printf("Inisira o 1� N�mero que sofrer� Acr�scimo: ");
	scanf("%f", &num1);
	
	printf("Inisira o 2� N�mero que ter� desconto: ");
	scanf("%f", &num2);
	
	acrec = num1 * 1.30;
	desc = num2 * 0.75;
	
	printf("\nO 1� N�mero com Acr�scimo � de: %.2f\n", acrec);
	printf("O 2� N�mero com Desconto � de: %.2f", desc);
	
	getch();
	return 0;
	
}
