#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

typedef struct{
	char nome[MAX];
	char endereco[MAX];
	int idade;
} pessoa;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	pessoa p;
	
	printf("Digite seu nome: ");
	gets(p.nome);
	
	printf("Digite seu endere�o: ");
	gets(p.endereco);
	
	printf("Digite sua idade: ");
	scanf("%d", &p.idade);
	
	printf("\nNome: %s", p.nome);
	printf("\nEndere�o: %s", p.endereco);
	printf("\nIdade: %d", p.idade);
	
	getch();
	return 0;
}
