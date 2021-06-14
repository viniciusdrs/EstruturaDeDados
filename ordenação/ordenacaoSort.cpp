#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 8

void ssort (int v[], int qtd) {
	int i, min, j, k;
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
	
	int i, vet[MAX] = {95, 27, 69, 54, 12, 89, 43, 77};
	
	ssort(vet, MAX);
	
	for(i = 0; i < MAX; i++){
		printf("%d\t", vet[i]);
	}
	
	getch();
	return 0;
}
