#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float a,b,c,delta,x1,x2;

	printf("Digite o valor de A: ");
	scanf("%f", &a);

	printf("Digite o valor de B: ");
	scanf("%f", &b);

	printf("Digite o valor de C: ");
	scanf("%f", &c);

	delta = pow(b,2) - 4*a*c;
	
		if(delta > 0){
			x1 = ((-b) - sqrt(delta))/2*a;
			x2 = ((-b) + sqrt(delta))/2*a;
			printf("\nA equação possui duas raizes reais e diferentes que são: \nx1= %.2f. \nx2= %.2f.", x1,x2);
	} else if(delta == 0){
		x1 = ((-b) - sqrt(delta))/2*a;
		x2 = ((-b) + sqrt(delta))/2*a;
		printf("\nA equação possui duas raizes reais e iguais que são: \nx1= %.2f. \nx2= %.2f.", x1,x2);
	} else {
		printf("\nO valor delta é %.2f. E não possui raizes reais!!!", delta);
	}
	
	getch();
	return 0;
}
