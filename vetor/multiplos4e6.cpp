#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[15], i;
	
	for(i = 0; i < 15; i++){
		
		printf("Digite um número múltiplo de 4 e 6: ");
		scanf("%d", &vet[i]);
		
		if(vet[i] % 4 == 0 && vet[i] % 6 == 0){
			printf("O número %d é múltiplo de 4 e 6. \n\n", vet[i]);
		} else {
			printf("Número inválido. \n\n");
		}
	}
	
	getch();
	return 0;
}
