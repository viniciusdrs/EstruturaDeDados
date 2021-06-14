#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float vet[7], soma = 0, media;
	int i;
	
	for(i = 0; i < 7; i++){
		printf("Informe quantos graus está fazendo: ");
		scanf("%f", &vet[i]);
		soma += vet[i];
	}
		media = soma/7;
		
		printf("\nMédia das Temperaturas: %.2f\n\n", media);
	
	for(i = 0; i < 7; i++){
		if(vet[i] > media){
			printf("Essa Temperatura ficou acima da média: %.2f\n", vet[i]);
		}
	}
	
	getch();
	return 0;
}
