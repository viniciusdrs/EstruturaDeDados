#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float vet[10], soma=0 ,media;
	int i,acima=0, abaixo=0, igual=0;
	
	for(i = 0; i < 10; i++){
		printf("Informe a idade do aluno: ");
		scanf("%f", &vet[i]);
		soma += vet[i];
	}
	
	media = soma/10;
	
	printf("\nA idade média dos alunos é de: %.2f\n", media);
	
	for(i = 0; i < 10; i++){
		if(vet[i] > media){
			acima++;
		} else if (vet[i] < media){
			abaixo++;
		} else {
			igual ++;
		}
	}
	
	printf("A quantidade de alunos com a idade acima a média é de: %d\n", acima);
	printf("A quantidade de alunos com a idade igual a média é de: %d\n", igual);
	printf("A quantidade de alunos com a idade abaixo da média é de: %d", abaixo);
	
	getch();
	return 0;
}
