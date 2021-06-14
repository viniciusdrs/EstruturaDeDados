#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int placa, n;
	
	printf("Entre com a placa do Carro: ");
	scanf("%d", &placa);
	
	 n = placa%10;
	
	switch(n){
		case 1: case 2:
			printf("Segunda-feira");
			break;
		case 3: case 4:
			printf("Terça-feira");
			break;
		case 5: case 6:
			printf("Quarta-feira");
			break;
		case 7: case 8:
			printf("Quinta-feira");
			break;
		case 9: case 0:
			printf("Sexta-feira");
			break;
	}
	getch();
	return 0;
}
