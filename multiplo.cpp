#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Entre com o 1� N�mero: ");
	scanf("%d", &num1);
	
	printf("Entre com o 2� N�mero: ");
	scanf("%d", &num2);
	
	if(num1%num2 == 0){
		printf("O N�mero %d � multiplo de %d", num1,num2);
	}else{
		printf("O N�mero %d n�o � multiplo de %d", num1,num2);
	}
	getch();
	return 0;
}
