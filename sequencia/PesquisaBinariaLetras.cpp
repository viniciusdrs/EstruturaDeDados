#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

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

int pesqbin (char v [], char busca) {
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
	
	char pes, vet[] = {'o', 'c', 'x', 's', 'n', 'r', 'p', 'e', 'm', 'j'};
		
	bsort(vet, MAX);
	
		printf("Digite a letra a ser pesquisada? ");
		scanf("%c", &pes);
	
		if(pesqbin(vet, pes) != -1) {
			printf("%c está no vetor.\n\n", pes);	
		} else {
			printf("%c não está no vetor.\n\n", pes);	
		}
		
	getch();
	return 0;
}
