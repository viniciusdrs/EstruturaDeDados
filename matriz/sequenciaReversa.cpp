#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float vet[5];
	int i;
	
	for(i = 0; i < 5 ; i++) {
		printf("Digite um n�mero: ");
		scanf("%f", &vet[i]);
	}
	
	printf("\n\nA ordem inversa dos n�mero digitados �: \n");
	
	for(i = 4; i >= 0; i-- ){
		printf("O n�mero � %.2f \n", vet[i]);
	}
	
	getch();
	return 0;
}
