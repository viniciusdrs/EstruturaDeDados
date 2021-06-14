#include <stdio.h>
#include <conio.h>
#define MAX 7

void bsort(float vet[], int qtd){
	int i, j;
	float aux;
	
	for(i = 1; i <qtd; i++) {
		for(j = 0; j<qtd - i; j++) {
			if(vet[j] > vet[j + 1]){
			aux = vet[j];
			vet[j] = vet[j + 1];
			vet[j + 1] = aux;
			}
		}
	}
}

int pesqbin(float v[], float busca){
	int inicio, fim, meio ;
    inicio = 0 ;
    fim = MAX - 1;
    while (inicio <= fim) {
        meio =  (inicio + fim) / 2  ;
        if (v [ meio ] == busca)
            return meio;
        if (busca < v [ meio ])
            fim = meio - 1 ;
        else
            inicio = meio + 1 ;
     }
     return -1 ;
}

int main() {
	int i, v1[MAX] = {13, 5, 7, 21, 77, 43, 11};
	float v2[MAX] = {21.7, 13.1, 5.9, 33.7, 7.5, 3.13, 1.21};
	float pes = 33.7, v3[MAX];
	
	for(i = 0; i < MAX; i++) {
		v3[i] = v1[i] + v2[i];
	}
	
	bsort(v3, MAX);
	
	printf(" Valores ordenados no 3°. vetor:\n");
	for(i = 0; i < MAX; i++){
		printf("   %.2f\n", v3[i]);
	}
	
	if(pesqbin(v3, pes) != -1) {
		printf("\n\nAchou.");
	} else {
		printf("\n\nNao Achou.");
	}
	
}
