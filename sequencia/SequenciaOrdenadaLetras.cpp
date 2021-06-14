#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

void ssort(char v[], int qtd) {
	int i, min, j;
	char k;
	
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

void bsort(char v[], int qtd) {
	int i, j;
	char aux;
	
	for(i = 0; i < qtd; i++) {
		for(j = 0; j < qtd - 1; j++) {
			if(v[j] > v[j + 1]){
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
}

int pesqseq(char v[], int busca) {
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
	
	char vet[]= {'o', 'c', 'x', 's', 'n', 'r', 'p', 'e', 'm', 'j'}, pes, opc;
	
	int i;
	
	bsort(vet, MAX);
//	ssort(vet, MAX);
	
	do{
		system("cls");
		printf("Digite o valor a ser pesquisado: ");
		scanf("%c", &pes);
	
		if(pesqseq(vet, pes) != -1) 
			printf("%c está no vetor", pes);
	
		else
			printf("%c não está no vetor", pes);

	
		printf("\n\nPerquisar outro valor? [S/N]");
		fflush (stdin);
		opc = getch();

	}while(opc == 'S' || opc == 's');
	
	getch();
	return 0;
}
