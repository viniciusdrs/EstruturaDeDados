#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[3], m[3][3], i, j;
	
	printf("Informe os elementos do vetor \n\n");
	
	for(i = 0; i < 3; i++){
		printf("Digite um número inteiro: ");
		scanf("%d", &vet[i]);
	}
	
	printf("\n\nInforme os elementos da matriz\n\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite um número inteiro: ");
			scanf("%d", &m[i][j]);
		}
	}
	
	printf("\n\n Vetor\n\n");
	
	for(i = 0; i < 3; i++){
		printf("  %d  ", vet[i]);
	}
	
	printf("\n\n Matriz\n\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			printf("  %d  ", m[i][j]);
			printf("\n");
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			m[i][j]=vet[i]*m[i][j];
		}
	}
	
	printf("\n\n A matriz multiplicada pelo vetor\n\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			printf("  %d  ", m[i][j]);
			printf("\n");
	}
	
	getch();
	return 0;
}
