#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float vet[15];
	int i;
	
	for(i = 0; i< 15; i++){
		printf("Digite um número: ");
		scanf("%f", &vet[i]);
	}
	
	for(i = 0; i < 15; i++){
		// vet[i] = vet[i]/2;
		printf("Metade: %.2f.\n", vet[i]/2);
	}
	
	getch();
	return 0;
}
