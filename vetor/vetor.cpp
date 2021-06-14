#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float vet[5];
	
	for(int i = 0;i < 5;i++){
		printf("Digite um número: ");
		scanf("%f", &vet[i]);
	}
	
	for(int i = 0;i < 5;i++){
		printf("O número é %.1f.\n", vet[i]);
	}
	
//	printf("O primeiro é %.1f. \n", vet[0]);
//	printf("O segundo é %.1f. \n", vet[1]);
//	printf("O terceiro é %.1f. \n", vet[2]);
//	printf("O quarto é %.1f. \n", vet[3]);
//	printf("O quinto é %.1f. \n", vet[4]);
//	
	getch();
	return 0;
}
