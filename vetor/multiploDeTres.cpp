#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[10], soma=0;
	
	for(i = 0; i < 10; i++){
		printf("Digite um número inteiro: ");
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(vet[i] % 3 == 0){
			soma = soma + vet[i];
		}
	}
	
	printf("A soma dos múltiplos de 3 é: %d", soma);
	
	getch();
	return 0;
}
