#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float vet[3], soma, media;
	
	for(i = 0; i < 3; i++){
		printf("Digite um n�mero: ");
		scanf("%f", &vet[i]);
		soma = soma + vet[i];
	}
	
	media = soma/3;
	printf("A m�dia �: %.2f.", media);
	
	getch();
	return 0;
}
