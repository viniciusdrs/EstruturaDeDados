#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media, cont=1;
	
	while(cont <= 3){
		
		printf("Informe a 1° nota: ");
		scanf("%f", &nota1);
		
		printf("Informe a 2° nota: ");
		scanf("%f", &nota2);
		
		printf("Informe a 3° nota: ");
		scanf("%f", &nota3);
		
		media = (nota1 + nota2 + nota3)/3;
		
		cont++;
		
		
		if(media >= 7){
			printf("A média do aluno foi %.2f.\n", media);
			printf("Aluno Aprovado!!!\n\n");
		} else if(media >=5){
			printf("A média do aluno foi %.2f.\n", media);
			printf("Aluno de  Recuperação!!!\n\n");
		} else{
			printf("A média do aluno foi %.2f.\n", media);
			printf("Aluno Reprovado!!!\n\n");
		}
	}
	
	getch();
	return 0;
}
