#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

float real;

float dolar() {
	return real * 5.48;
}

float libra() {
	return real * 7.32;
}

float euro() {
	return real * 6.54;
}

float franco() {
	return real * 6.06;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opc;
	
	printf("Informe o valor em Real: R$");
	scanf("%f", &real);
	
	printf("\nEscolha a conversão desejada: \n1- Dólar\n2- Libra\n3- Euro\n4- Franco\n");
	scanf("%d", &opc);
	
	switch(opc){
		case 1: 
			printf("\nA conversão de R$%.2f em Dólar é: %.2f.", real, dolar());
			break;
		case 2: 
			printf("\nA conversão de R$%.2f em Libras é: %.2f.", real, libra());
			break;
		case 3: 
			printf("\nA conversão de R$%.2f em Euros é: %.2f.", real, euro());
			break;
		case 4: 
			printf("\nA conversão de R$%.2f em Franco é: %.2f.", real, franco());			
			break; 
		default:
			printf("Opção Inválida!!!");
	}
	
	getch();
	return 0;
}
