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

void bsort(char x[], int qtd) {
	int i, j;
	char aux;
	
	for(i = 1; i < qtd; i++) {
		for(j = 0; j < qtd - i; j++) {
			if(x[j] > x[j+1]) {
				aux = x[j];
				x[j] = x[j+1];
				x[j+1] = aux;
				imprimirVetor(x, qtd);
			}
		}
	}
}

void isort(char x[], int qtd) {
	int i, j;
	char k;
	
	for(i = 0; i < qtd; i++) {
		k = x[i];
		j = i - 1;
		while(j >= 0 && x[j] > k) {
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = k;
		imprimirVetor(x, qtd);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char vet[] = "DACB";
	int opc;
	
	printf("Escolha um método de ordenação: \n");
	printf("1.Trocas\n");
	printf("2.Seleção\n");
	printf("3.Inserção\n");
	printf("0.Sair\n");
	printf("Digite a opção: ");
	scanf("%d", &opc);
	
	switch(opc) {
		case 1 : bsort(vet, 4);
			break;
		case 2 : ssort(vet, 4);
			break;
		case 3 : isort(vet, 4);
			break;
		case 0: return 0;
	}
	
	getch();
	return 0;
}
