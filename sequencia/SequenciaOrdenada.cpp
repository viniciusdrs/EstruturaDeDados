#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 8

void ssort(int v[], int qtd) {
	int i, min, j ,k;
	
	for(i = 0; i < (qtd - 1); i++){
		min = i;
		for(j = (i + 1); j < qtd; j++) {
			if(v[j] < v[min]){
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

void bsort(int v[], int qtd) {
	int i, j, aux;
	
	for(i = 1; i < qtd; i++) {
		for(j = 0; j < qtd - 1; j++) {
			if(v[j] > v[j + 1]){
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
}

int pesqseq(int v[], int busca) {
	int i;
	
	for(i = 0; i < MAX; i++) {
		if(v[i] == busca) 
			return i;
			
		else if(v[i] > busca)
			return -1;
	}
	return -1;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[]= {57, 17, 96, 41, 86, 25, 38, 74}, i, pes;
	char opc;
	
//	bsort(vet, MAX);
	ssort(vet, MAX);
	do{
		system("cls");
		printf("Digite o valor a ser pesquisado: ");
		scanf("%d", &pes);
	
		if(pesqseq(vet, pes) != -1) 
			printf("%d está no vetor", pes);
	
		else
			printf("%d não está no vetor", pes);
			
		printf("\n\n Pesquisar outro valor? [S/N]");
		opc=getch();
	}while (opc == 'S'|| opc=='s');
	
	getch();
	return 0;
}
