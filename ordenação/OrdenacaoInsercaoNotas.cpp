#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 5

void isort (float v[], int qtd) {
	int i, j;
	float k;
	
	for(i = 0; i < qtd; i++) {
		k = v[i];
		j = i - 1;
		while(j >= 0 && v[j]>k) {
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = k;	
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, n4,vet[MAX];
	int i;
	
	for(i = 0; i < MAX; i++) {
		printf("Digite a 1° média:");
		scanf("%f", &n1);
		
		printf("Digite a 2° média:");
		scanf("%f", &n2);
		
		printf("Digite a 3° média:");
		scanf("%f", &n3);
		
		printf("Digite a 4° média:");
		scanf("%f", &n4);
		
		vet[i] = (n1+n2+n3+n4)/4;
		
		printf("%.2f\n", vet[i]);
	}
	
	isort(vet, MAX);
	
	for(i = 0; i < MAX; i++) {
		if(vet[i] >= 6) {
			printf("\n%.2f - Aprovado\n", vet[i]);
		} else {
			printf("\n%.2f - Reprovado\n", vet[i]);
		}
	}
	
	
	getch();
	return 0;
}
