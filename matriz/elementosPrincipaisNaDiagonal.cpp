#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m[4][4], i, j;
	
	for(i = 0; i < 4; i ++){
		for(j = 0; j < 4; j++){
			printf("Digite um número inteiro: ");
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n\n Os elementos da diagonal principal \n\n");
	
	for(i = 0; i < 4; i ++){
		for(j = 0; j < 4; j++){
			if(i == j)
				printf("  %d  ", m[i][j]);
				printf("\t");
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
