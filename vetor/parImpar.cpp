#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, soma, qtd;
	float media;
	
	printf("Digite algum n�mero positivo e inteiro: ");
	scanf("%d", &num);
	
	for(int i = 1;i <= num;i++){
		if(i % 2 == 0 ){
			printf("N�meros pares entre 1 e %d: %d\n", num,i);
		} else{
			soma = soma + i;
			qtd = qtd+1;
		}
	}
	
	media = soma / qtd;
	
	printf("\nA m�dia de n�meros �mpares entre 1 e %d �: %.2f.", num, media);
	
	
	getch();
	return 0;
}
