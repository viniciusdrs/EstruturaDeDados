#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, *pn1, *pn2, soma;
	
	printf("Digite um número real: ");
	scanf("%f", &n1);
	
	printf("Digite um número real: ");
	scanf("%f", &n2);
	
	pn1 = &n1;
	pn2 = &n2;
	
	soma = *pn1 + *pn2;
	
	printf("\nA soma é: %.2f", soma);
	
	getch();
	return 0;
}
