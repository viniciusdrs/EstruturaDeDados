#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

float n1,n2;

float somar( ) {
	return n1+n2;
}

float subtrair( ) {
	return n1-n2;
}

float multiplicar( ) {
	return n1*n2;
}

float dividir( ) {
	return n1/n2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opc;
	
	printf("Digite o 1° número: ");
	scanf("%f", &n1);
	
	printf("Digite o 2° número: ");
	scanf("%f", &n2);
	
	printf("\nEscolha a operação desejada: \n1- Somar\n2- Subtrair\n3- Multiplicar\n4- Dividir\n");
	scanf("%d", &opc);
	
	switch(opc){
		case 1: 
			printf("\nA soma entre %.2f e %.2f é: %.2f", n1, n2, somar());
			break;
		case 2: 
			printf("\nA subtração entre %.2f e %.2f é: %.2f", n1, n2, subtrair());
			break;
		case 3: 
			printf("\nA multiplicação entre %.2f e %.2f é: %.2f", n1, n2, multiplicar());
			break;
		case 4: 
			printf("\nA divisão entre %.2f e %.2f é: %.2f", n1, n2, dividir());
			break; 
		default:
			printf("Opção Inválida!!!");
	}

	getch();
	return 0;
}
