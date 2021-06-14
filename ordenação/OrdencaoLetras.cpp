#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 15

void ssort(char v[], int qtd) {
	int i, j, min;
	char k;
	
	for(i = 0; i < qtd-1; i++) {
		min = i;
		for(j = i; j < qtd; j++) {
			if(v[j] < v[min]) {
				min = j;
			}
			
			if(i != min) {
				k = v[i];
				v[i] = v[min];
				v[min] = k;
			}
		}
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
	
	ssort(vet, MAX);
	
	for(i = 0; i < MAX; i++) {
		printf("%c\t", vet[i]);
	}
	
	getch();
	return 0;
}
