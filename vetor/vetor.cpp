#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float vet[5];
	
	for(int i = 0;i < 5;i++){
		printf("Digite um n�mero: ");
		scanf("%f", &vet[i]);
	}
	
	for(int i = 0;i < 5;i++){
		printf("O n�mero � %.1f.\n", vet[i]);
	}
	
//	printf("O primeiro � %.1f. \n", vet[0]);
//	printf("O segundo � %.1f. \n", vet[1]);
//	printf("O terceiro � %.1f. \n", vet[2]);
//	printf("O quarto � %.1f. \n", vet[3]);
//	printf("O quinto � %.1f. \n", vet[4]);
//	
	getch();
	return 0;
}
