#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void isort (char v_nome[6][10], int tam) {
	int i, j;
	char k[10];
	
	for(i = 1; i < tam; i++) {
		strcpy(k, v_nome[i]);
		j = i - 1;
		while(j >= 0 && strcmp(v_nome[j], k) > 0) {
			strcpy(v_nome[j+1], v_nome[j]);
			j--;
		}
		strcpy(v_nome[j+1], k);	
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[6][10] = {"Maria", "Sergio", "Carlos", "Rita", "Zulema", "Amelia"};
	int i;
	
	isort(nomes, 6);
	
	for(i = 0; i < 6; i++) {
		printf("%s\t", nomes[i]);
	}
	
	getch();
	return 0;
}
