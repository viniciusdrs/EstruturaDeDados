#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4;
	float media;
	
	printf("Digite a 1° nota: ");
	scanf("%d", &n1);
	printf("Digite a 2° nota: ");
	scanf("%d", &n2);
	printf("Digite a 3° nota: ");
	scanf("%d", &n3);
	printf("Digite a 4° nota: ");
	scanf("%d", &n4);
	
	media = (float)(n1+n2+n3+n4)/4;
	
	printf("A média é: %.2f", media);
	
	getch();
	return 0;
}
