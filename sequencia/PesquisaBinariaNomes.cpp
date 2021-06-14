#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 6

void bsort(char v[MAX][25], int tam) {
	int i, j;
	char aux[25];
	
	for(i = 1; i < tam; i++) {
		for(j = 0; j < tam - i; j++) {
			if(strcmp(v[j], v[j + 1]) > 0){
				strcpy(aux, v[j]);
				strcpy(v[j], v[j + 1]);
				strcpy(v[j + 1], aux);
			}
		}
	}
}

int pesqbin (char v [MAX][25], char busca[25]) {
     int inicio, fim, meio ;
     inicio = 0 ;
     fim = MAX;
     while (inicio <= fim) {
               meio =  (inicio + fim) / 2  ;
               if (strcmp(v[ meio ], busca) == 0)
                         return meio;
               if (strcmp(busca, v [ meio ]) < 0)
                         fim = meio - 1 ;
               else
                         inicio = meio + 1 ;
     }
     return -1 ;
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char pes[25], nomes[MAX][25] = {"Maria", "Sergio", "Carlos", "Rita", "Zulema", "Amelia"};
	int i = 0;
	
	bsort(nomes, MAX);
	
	printf("Digite o nome a ser pesquisado? ");
	gets(pes);
		
	i = pesqbin(nomes, pes);
	
	if(i == -1) {
		printf("%s está no vetor.\n\n", pes);	
	} else {
		printf("%s não está no vetor.\n\n", pes);	
	}
	
	getch();
	return 0;
}
