#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 7

int i, opc;
float notas[MAX];
char nomes[MAX][8];

void vetores(){
	notas[0]=5.0;
	notas[1]=7.5;
	notas[2]=8.0;
	notas[3]=5.5;
	notas[4]=9.0;
	notas[5]=6.5;
	notas[6]=8.5;
	strcpy(nomes[0],"Julio");
	strcpy(nomes[1],"Marcos");
	strcpy(nomes[2],"Flávio");
	strcpy(nomes[3],"Laura");
	strcpy(nomes[4],"Rosana");
	strcpy(nomes[5],"Carlos");
	strcpy(nomes[6],"Jonas");
}

void trocas(float v_notas[MAX], char v_nomes[MAX][8], int t){
	int i, j;
	float k_notas;
	char k_nomes[8];
	
	for (i=0;i<t-1;i++){
		for (j=0;j<t-(i+1);j++){
			
			if(v_notas[j]<v_notas[j+1]){
				
				k_notas=v_notas[j];
				v_notas[j]=v_notas[j+1];
				v_notas[j+1]=k_notas;
				
				strcpy(k_nomes,v_nomes[j]);
				strcpy(v_nomes[j],v_nomes[j+1]);
				strcpy(v_nomes[j+1],k_nomes);
			}
		}
	}
}

void selecao (float v_notas[MAX], char v_nomes[MAX][8], int t){
	int i, j, min;
	float k_notas;
	char k_nomes[8];	
	for (i=0;i<t-1;i++){
		min=i;
		for (j=i+1;j<t;j++){
			if(v_notas[j]>v_notas[min]){
				min=j;
			}
		}
		if (i!= min){
				k_notas=v_notas[i];
				v_notas[i]=v_notas[min];
				v_notas[min]=k_notas;
				strcpy(k_nomes,v_nomes[i]);
				strcpy(v_nomes[i],v_nomes[min]);
				strcpy(v_nomes[min],k_nomes);
			}
	}
}

void insercao (float v_notas[MAX], char v_nomes[MAX][8], int t){
	int i, j;
	float k_notas;
	char k_nomes[8];
	for (i=1;i<t;i++){
		k_notas=v_notas[i];
		strcpy(k_nomes,v_nomes[i]);
		j=i-1;
		while(j>=0 && v_notas[j]<k_notas){
			v_notas[j+1]=v_notas[j];
			strcpy(v_nomes[j+1],v_nomes[j]);
			j--;
		}
		v_notas[j+1]=k_notas;
		strcpy(v_nomes[j+1],k_nomes);						
		}
	}
int main(){
	setlocale(LC_ALL, "Portuguese");
do{
	vetores();
	system("cls");
	printf ("Escolha uma opção para a ordenação: \n");
	printf("1. Trocas\n");
	printf("2. Selecao\n");
	printf("3. Inserção\n");
	printf("0. Sair\n");
	printf("Digite a opção: ");
	scanf("%d",&opc);
	switch (opc){
		case 1: trocas(notas, nomes, MAX);
		break;
			case 2: selecao(notas, nomes, MAX);
		break;
			case 3: insercao(notas, nomes, MAX);
		break;
		case 0: return 0;
	}
	system ("cls");
	printf("\n\n\n NOMES    NOTAS\n");
	for (i=0;i<MAX;i++)
		printf("    %s   %.1f\n",nomes[i],notas[i]);
	system ("pause");
}
	while (opc<=3);

	getch();
	return 0;
}

