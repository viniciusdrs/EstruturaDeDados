#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[20], nome2[20];
	
	printf("Digite o 1° nome: ");
	gets(nome1);
	
	printf("Digite o 2° nome: ");
	gets(nome2);
	
	if(strcmp(nome1, nome2) == 0){
		printf("\nOs nomes são iguais: %s = %s", nome1, nome2);
	} else {
			printf("\nOs nomes são diferentes: %s ! %s", nome1, nome2);
	}
	
	getch();
	return 0;
}
