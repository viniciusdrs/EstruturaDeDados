# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>
# include <stdlib.h>
# define MAX 5

int i, opc;
char nomes[MAX][5];

void vetores(){
    float notas[5] = {7.5,9.5,3.5,4.5,8.5};
	
	int faltas[5] = {3,7,15,11,1};
	
	strcpy(nomes[0],"Ana");
	strcpy(nomes[1],"Gil");
	strcpy(nomes[2],"Ivo");
	strcpy(nomes[3],"Lia");
	strcpy(nomes[4],"Teo");
}

void trocas(char v_nomes[MAX][5], int t){
	int i, j;
	char k_nomes[5];
	for (i=0;i<t-1;i++){
		for (j=0;j<t-(i+1);j++){
			if(v_nomes[j]>v_nomes[j+1]){
				strcpy(k_nomes,v_nomes[j]);
				strcpy(v_nomes[j],v_nomes[j+1]);
				strcpy(v_nomes[j+1],k_nomes);
							}
		}
	}
}
void ord_faltas(int v_faltas[MAX], char v_nomes[MAX][8], int t){
	int i, j;
	float k_faltas;
	char k_nomes[8];
	for (i=1;i<t;i++){
		k_faltas=v_faltas[i];
		strcpy(k_nomes,v_nomes[i]);
		j=i-1;
		while(j>=0 && v_faltas[j]<k_faltas){
			v_faltas[j+1]=v_faltas[j];
			strcpy(v_nomes[j+1],v_nomes[j]);
			j--;
		}
		v_faltas[j+1]=k_faltas;
		strcpy(v_nomes[j+1],k_nomes);						
		}
	}
	void selecao (float v_notas[MAX], char v_nomes[MAX][5], int t){
	int i, j, min;
	float k_notas;
	char k_nomes[5];	
	for (i=0;i<t-1;i++){
		min=i;
		for (j=i+1;j<t;j++){
			if(v_notas[j]>v_notas[min]){
				min=j;
			}
		}
		if (v_notas[j] < v_notas[min]){
				k_notas=v_notas[i];
				v_notas[i]=v_notas[min];
				v_notas[min]=k_notas;
				strcpy(k_nomes,v_nomes[i]);
				strcpy(v_nomes[i],v_nomes[min]);
				strcpy(v_nomes[min],k_nomes);
			}
	}
}
	
int main(){
	setlocale(LC_ALL, "Portuguese");
do{
	vetores();
	system("cls");
	printf ("Escolha uma opção para a ordenação: \n");
	printf("1. Trocas\n");
	printf("0.Sair\n");
	printf("Digite a opção: ");
	scanf("%d",&opc);
	switch (opc){
		case 1: trocas(nomes, MAX);
		break;
		case 2: notas(notas, MAX);
		break;
		case 3: faltas(faltas, MAX);
		break;
		case 0: return 0;
	}
	system ("cls");
	printf("\n\n\n NOMES ");
	for (i=0;i<MAX;i++)
		printf("  \n  %s \n",nomes[i]);
	system ("pause");
}
	while (opc<=1);

	getch();
	return 0;
}
