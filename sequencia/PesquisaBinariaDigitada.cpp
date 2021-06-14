#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 15


void bsort (int v[], int qtd) {
	int i, j;
	int aux;
	
	for(i = 1; i <qtd; i++) {
		for(j = 0; j<qtd - i; j++) {
			if(v[j] > v[j + 1]){
			aux = v[j];
			v[j] = v[j + 1];
			v[j + 1] = aux;
			}
		}
	}
}

int pesqbin (int v [], int busca) {
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

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int pes, vet[MAX], i;
	char opc;
	
	for(i = 0; i < MAX; i++){
		system("cls");
		printf("Digite um número: ");
		scanf("%d", &vet[i]);
	}
	
	bsort(vet, MAX);
	
	system("cls");
	do{
		printf("Qual é o valor a ser pesquisado? ");
		scanf("%d", &pes);
	
		if(pesqbin(vet, pes) != -1) {
			printf("%d está no vetor.\n\n", pes);	
		} else {
			printf("%d não está no vetor.\n\n", pes);	
		}
		
		printf("Deseja fazer uma nova pesquisa? (S/N): ");
		scanf("%s", &opc);
		printf("\n\n");
	}while(opc == 'S' || opc == 's');
	
	getch();
	return 0;
}
