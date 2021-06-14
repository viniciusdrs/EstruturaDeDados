#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

float media(float nota1, float nota2, float nota3, char opc) {
	if(opc == 'A') {
		return (nota1 + nota2 + nota3) / 3;
	} else if(opc == 'P') {
		return (5 * nota1 + 3 * nota2 + 2 * nota3) / 10;
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	char opcao;
	
	printf("Digite com letra maiúscula a opção desejada:\nA- Média Simples");
	printf("\nP- Média Aritmética Ponderada\n");
	scanf("%c", &opcao);
	
	printf("Digite a 1° nota: ");
	scanf("%f", &n1);
	
	printf("Digite a 2° nota: ");
	scanf("%f", &n2);
	
	printf("Digite a 3° nota: ");
	scanf("%f", &n3);
	
	printf("\nA média é %.2f", media(n1,n2,n3,opcao));
	
	getch();
	return 0;
}
