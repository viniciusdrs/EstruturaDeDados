#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtd,i;
	float vet[i], soma, media;
	
	printf("Digite a quantidade de notas: ");
	scanf("%d", &qtd);
	
	for(i = 0; i < qtd; i++){
		printf("Digite a nota: ");
		scanf("%f", &vet[i]);
		soma = soma + vet[i];
	}
	
	media = soma/qtd;
	
	printf("A média é: %.2f.", media);
	
	getch();
	return 0;
}
