#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float vet[5];
	int i;
	
	for(i = 0; i < 5 ; i++) {
		printf("Digite um número: ");
		scanf("%f", &vet[i]);
	}
	
	printf("\n\nA ordem inversa dos número digitados é: \n");
	
	for(i = 4; i >= 0; i-- ){
		printf("O número é %.2f \n", vet[i]);
	}
	
	getch();
	return 0;
}
