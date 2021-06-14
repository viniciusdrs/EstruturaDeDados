#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Entre com o 1° Número: ");
	scanf("%d", &num1);
	
	printf("Entre com o 2° Número: ");
	scanf("%d", &num2);
	
	if(num1%num2 == 0){
		printf("O Número %d é multiplo de %d", num1,num2);
	}else{
		printf("O Número %d não é multiplo de %d", num1,num2);
	}
	getch();
	return 0;
}
