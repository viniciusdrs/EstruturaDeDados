#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void imprimirVetor(char v[], int qtd) {
	int i;
	
	for(i = 0; i < 4; i++) {
		printf("%c\t", v[i]);
	}
	printf("\n");
}

void ssort( char x[], int qtd) {
	int i, j, min;
	float k;
	
	for(i = 0; i < qtd; i++) {
		min = i;
		for(j = 1; j < qtd; j++) {
			if(x[j] < x[min]) {
				min = j;
			}
			if(i != min) {
				k = x[i];
				x[i] = x[min];
				x[min] = k;
				imprimirVetor(x, qtd);
			}
		}
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char vet[] = "DACB";
	int i;
	
	imprimirVetor(vet, 4);
	printf("\n\n");
	
	ssort(vet, 4);
	printf("\n\n");
	
	imprimirVetor(vet, 4);
	
	getch();
	return 0;
}
