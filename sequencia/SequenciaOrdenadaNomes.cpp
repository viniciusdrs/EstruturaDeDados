#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 6

void bsort(char v[6][25], int tam) {
	int i, j;
	char k[25];
	
	for(i = 1; i < tam; i++) {
		for(j = 0; j < tam - i; j++) {
			if(strcmp(v[j], v[j + 1]) > 0){
				strcpy(k, v[j]);
				strcpy(v[j], v[j + 1]);
				strcpy(v[j + 1], k);
			}
		}
	}
}

int pesqseq(char v_nomes[MAX][25], char busca[25]) {
	int i;
	
	for(i = 0; i < MAX; i++) {
		if(strcmp(v_nomes[i], busca) == 0) 
			return i;
			
		else if(strcmp(v_nomes[i], busca) > 0)
			return -1;
	}
	return -1;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char procura[25], nomes[MAX][25] = {"Maria", "Sergio", "Carlos", "Rita", "Zulema", "Amelia"};
	int i;
	
	bsort(nomes, MAX);
	
	printf("Qual é o nome a ser pesquisado? ");
	fflush(stdin);
	gets(procura);
	
	i = pesqseq(nomes, procura);
	
	if(i == -1) {
		printf("%s não existe.\n\n", procura);	
	} else {
		printf("%s está cadastrada.\n\n", procura);	
	}
	
	getch();
	return 0;
}
