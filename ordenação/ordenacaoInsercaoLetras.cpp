#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 20

void isort (char v[], int qtd) {
	int i, j;
	char k;
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
	
	char vet[MAX];
	int i;	
	
	
	for(i = 0; i < MAX; i++) {
		printf("Digite uma letra: ");
		scanf("%s", &vet[i]);
	}
	
	isort(vet, MAX);
	
	for(i = 0; i < MAX; i++) {
		printf("%c\t", vet[i]);
	}
	
	getch();
	return 0;
}
