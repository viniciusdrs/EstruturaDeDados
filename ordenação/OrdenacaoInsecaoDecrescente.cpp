#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 8

void isort (int v[], int qtd) {
	int i, k, j;
	for(i = 0; i < qtd; i++) {
		k = v[i];
		j = i - 1;
		while(j >= 0 && v[j]<k) {
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = k;	
	}
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[MAX] = {86, 17, 96, 45, 23, 59, 34, 71}, i;
	
	isort(vet, MAX);
	
	for(i = 0; i < MAX; i++) {
		printf("%d\t", vet[i]);
	}
	
	
	getch();
	return 0;
}
