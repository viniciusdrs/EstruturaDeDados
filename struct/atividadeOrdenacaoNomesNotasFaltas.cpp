# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>
# include <stdlib.h>
# define MAX 5

typedef struct{
	char nome[10];
	float nota;
	int faltas;
} reg;

void ord_faltas (reg v[MAX], int qtd);
void ord_nota (reg v[MAX], int qtd);
void ord_nome (reg v[MAX], int qtd);

int main(){
	setlocale(LC_ALL, "Portuguese");
reg vetor[MAX];
int i, opc;
for (i=0; i<MAX;i++){
	printf("Aluno número %d: \n",i+1);
	fflush (stdin);
	printf("Digite o nome: ");
	gets(vetor[i].nome);
	printf("Digite a nota: ");
	scanf("%f",&vetor[i].nota);
	printf("Digite a quantidade de faltas: ");
	scanf("%d",&vetor[i].faltas);
}
do{
	system ("cls");
	printf("Escolha uma opção \n\n");
	printf("1.Ordena Nota\n");
	printf("2.Ordena Faltas\n");
	printf("3.Ordena Nome\n");
	printf("4.Sair\n");
	scanf("%d",&opc);
	if(opc==4)
	return 0;
	switch (opc){
		case 1: ord_nota (vetor,MAX);
		break;
		case 2: ord_faltas (vetor,MAX);
		break;
		case 3: ord_nome (vetor,MAX);
		break;
	}
	system ("cls");
	printf("Dados ordenados \n");
	for (i=0; i<MAX; i++){
		printf("%s -",vetor[i].nome);
		printf("%.2f -",vetor[i].nota);
		printf("%d\n -",vetor[i].faltas);
	}
	getch ();
}while (opc!=4);
	return 0;
}

void ord_nota (reg v[MAX], int qtd){
	int i, j;
	reg k;
	for (i=1;i<qtd;i++){
		for (j=0;j<qtd-i;j++){
			if (v[j].nota>v[j+1].nota){
				k=v[j];
				v[j]=v[j+1];
				v[j+1]=k;
			}
		}
	}
}
void ord_faltas (reg v[MAX], int qtd){
	int i, j;
	reg k;
	for (i=1;i<qtd;i++){
		for (j=0;j<qtd-i;j++){
			if (v[j].faltas>v[j+1].faltas){
				k=v[j];
				v[j]=v[j+1];
				v[j+1]=k;
			}
		}
	}
}
void ord_nome (reg v[MAX], int qtd){
	int i, j;
	reg k;
	for (i=1;i<qtd;i++){
		for (j=0;j<qtd-i;j++){
			if (strcmp(v[j].nome,v[j+1].nome)>0){
				k=v[j];
				v[j]=v[j+1];
				v[j+1]=k;
			}
		}
	}
}
