#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 20

void ssort (float v[], int qtd) {
	int i, min, j;
	float k;
	for(i = 0; i <(qtd - 1); i++) {
		min = i;
		for(j = (i + 1); j<qtd; j++) {
			if(v[j] < v[min])
			min = j;
		}
		if(i != min) {
			k = v[i];
			v[i] = v[min];
			v[min] = k;
		}
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float vet[MAX];
	
	for(i = 0; i < MAX; i++) {
		printf("Digite um n�mero: ");
		scanf("%f", &vet[i]);
	}
	
	ssort(vet, MAX);
	
	for(i = 0; i < MAX; i++){
		printf("%.2f\t", vet[i]);
	}
	
	getch();
	return 0;
}
