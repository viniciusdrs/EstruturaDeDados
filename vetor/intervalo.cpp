#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[15],i;
	
	for(i = 0; i < 15; i++){
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &vet[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < 15; i++){
		if(vet[i] > 0 && vet[i] < 10){
			printf("O n�mero %d � maior que 0 e menor que 10\n", vet[i]);
		}
	}
	
	getch();
	return 0;
}
