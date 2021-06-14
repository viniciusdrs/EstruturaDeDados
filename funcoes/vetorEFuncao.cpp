#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

void vet() {
	int vet[3], i;
		
	for(i = 0; i < 3; i++){
		printf("Digite um número: ");
		scanf("%d", &vet[i]);
	}
	
	printf("\n\nOs elementos do vetor\n");
	for(i = 0; i < 3; i++){
		printf("  %d  ", vet[i]);
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	vet();
	
	getch();
	return 0;
}
