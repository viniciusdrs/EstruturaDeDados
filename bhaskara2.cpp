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
			printf("\nA equa��o possui duas raizes reais e diferentes que s�o: \nx1= %.2f. \nx2= %.2f.", x1,x2);
	} else if(delta == 0){
		x1 = ((-b) - sqrt(delta))/2*a;
		x2 = ((-b) + sqrt(delta))/2*a;
		printf("\nA equa��o possui duas raizes reais e iguais que s�o: \nx1= %.2f. \nx2= %.2f.", x1,x2);
	} else {
		printf("\nO valor delta � %.2f. E n�o possui raizes reais!!!", delta);
	}
	
	getch();
	return 0;
}
