#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m[3][3], i, j;
	
	for(i = 0; i < 3; i ++){
		for(j = 0; j < 3; j++){
			printf("Digite um número inteiro -> mat[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\nA matriz é\n");
	for(i = 0; i < 3; i ++){
		for(j = 0; j < 3; j++)
			printf("  %d  ", m[i][j]);
			printf("\t");
		
		printf("\n");
	}
	
	printf("\n\n Os elementos da sem diagonal principal \n\n");
	
	for(i = 0; i < 3; i ++){
		for(j = 0; j < 3; j++){
			if(i != j)
				printf("  %d  ", m[i][j]);
				printf("\t");
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
