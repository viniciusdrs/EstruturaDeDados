#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int menor(int n1, int n2) {
	if(n1 < n2){
		return printf("\n%d é o menor número.", n1);
	} else if(n2 < n1) {
		return printf("\n%d é o menor número.", n2);
	} else {
		 return printf("\nOs números são iguais!!!");
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o 1° número: ");
	scanf("%d", &num1);
	
	printf("Digite o 2° número: ");
	scanf("%d", &num2);
	
	menor(num1, num2);
	
	getch();
	return 0;
}
