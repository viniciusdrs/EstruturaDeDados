#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1, num2, acrec, desc;
	
	printf("Inisira o 1° Número que sofrerá Acréscimo: ");
	scanf("%f", &num1);
	
	printf("Inisira o 2° Número que terá desconto: ");
	scanf("%f", &num2);
	
	acrec = num1 * 1.30;
	desc = num2 * 0.75;
	
	printf("\nO 1° Número com Acréscimo é de: %.2f\n", acrec);
	printf("O 2° Número com Desconto é de: %.2f", desc);
	
	getch();
	return 0;
	
}
