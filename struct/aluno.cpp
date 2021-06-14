#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct{
	char nomes[25];
	int matricula;
	float nota1;
	float nota2;
	float nota3;
}aluno;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	aluno p[MAX], notas[MAX];
	float media[MAX];
	
	for(int i = 0; i < MAX; i++){
		printf("Digite o nome do aluno: ");
		fflush(stdin);
		gets(p[i].nomes);
		
		printf("Digite a matricula: ");
		scanf("%d", &p[i].matricula);
		
		printf("Digite a 1° nota: ");
		scanf("%f", &notas[i].nota1);
		
		printf("Digite a 2° nota: ");
		scanf("%f", &notas[i].nota2);
		
		printf("Digite a 3° nota: ");
		scanf("%f", &notas[i].nota3);
		
		media[i] = (notas[i].nota1 + notas[i].nota2 + notas[i].nota3) / 3;
	}
	
	if(media[0] > media[1] && media[0] > media[2] && media[0] > media[3] && media[0] > media[4]){
		printf("\nNome: %s \nNota1: %.2f \nNota2: %.2f \nNota3: %.2f \nMedia: %.2f", p[0].nomes, notas[0].nota1, notas[0].nota2, notas[0].nota3, media[0]);
		
	} else if(media[1] > media[0] && media[1] > media[2] && media[1] > media[3] && media[1] > media[4]){
		printf("\nNome: %s \nNota1: %.2f \nNota2: %.2f \nNota3: %.2f \nMedia: %.2f", p[1].nomes, notas[1].nota1, notas[1].nota2, notas[1].nota3, media[1]);
		
	}else if(media[2] > media[0] && media[2] > media[1] && media[2] > media[3] && media[2] > media[4]) {
		printf("\nNome: %s \nNota1: %.2f \nNota2: %.2f \nNota3: %.2f \nMedia: %.2f", p[2].nomes, notas[2].nota1, notas[2].nota2, notas[2].nota3, media[2]);
		
	}else if(media[3] > media[0] && media[3] > media[1] && media[3] > media[2] && media[3] > media[4]) {
		printf("\nNome: %s \nNota1: %.2f \nNota2: %.2f \nNota3: %.2f \nMedia: %.2f", p[3].nomes, notas[3].nota1, notas[3].nota2, notas[3].nota3, media[3]);
		
	} else {
		printf("\nNome: %s \nNota1: %.2f \nNota2: %.2f \nNota3: %.2f \nMedia: %.2f", p[4].nomes, notas[4].nota1, notas[4].nota2, notas[4].nota3, media[4]);
	}
	
	getch();
	return 0;
}
