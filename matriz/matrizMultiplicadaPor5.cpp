#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float m[3][3];
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Digite um n�mero m[%d][%d]= ", i,j);
			scanf("%f", &m[i][j]);
		}
	}
	
	printf("\n\n::: A matriz � :::\n\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			printf("   %.2f   ", m[i][j]);
			printf("\n");
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			m[i][j]=m[i][j]*5;
		}
	}
	
	printf("\n\n::: O qu�ntuplo dos valores da matriz � :::\n\n");
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			printf("   %.2f   ", m[i][j]);
			printf("\n");
	}
	
	getch();
	return 0;
}
