#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

int i,opc;
float notas[MAX];
char nomes[MAX][15], procura[15];

void vetores() {
	notas[0]=7.5;
	notas[1]=9.5;
	notas[2]=6.5;
	notas[3]=6.5;
	notas[4]=9.5;
	notas[5]=5.5;
	notas[6]=7.0;
	notas[7]=5.0;
	notas[8]=6.0;
	notas[9]=8.0;
	notas[10]=9.5;
	notas[11]=8.5;
	notas[12]=8.5;
	notas[13]=6.0;
	notas[14]=5.0;
	notas[15]=8.0;
	notas[16]=9.5;
	notas[17]=7.5;
	notas[18]=7.5;
	notas[19]=9.5;
	notas[20]=6.0;
	notas[21]=8.0;
	notas[22]=9.5;
	notas[23]=6.0;
	notas[24]=6.5;
	notas[25]=9.5;
	notas[26]=5.5;
	notas[27]=6.0;
	notas[28]=8.5;
	notas[29]=7.0;
	
	strcpy(nomes[0],"Nair");
	strcpy(nomes[1],"Rafael");
	strcpy(nomes[2],"Nilton");
	strcpy(nomes[3],"Neide");
	strcpy(nomes[4],"Elisangela");
	strcpy(nomes[5],"Mariana");
	strcpy(nomes[6],"Carlos");
	strcpy(nomes[7],"Marcos");
	strcpy(nomes[8],"Pamela");
	strcpy(nomes[9],"Flavio");
	strcpy(nomes[10],"Fabricio");
	strcpy(nomes[11],"Julio");
	strcpy(nomes[12],"Jose");
	strcpy(nomes[13],"Everton");
	strcpy(nomes[14],"Emerson");
	strcpy(nomes[15],"Laura");
	strcpy(nomes[16],"Valeria");
	strcpy(nomes[17],"Diego");
	strcpy(nomes[18],"Paula");
	strcpy(nomes[19],"Elisa");
	strcpy(nomes[20],"Jonas");
	strcpy(nomes[21],"Fernando");
	strcpy(nomes[22],"Claudio");
	strcpy(nomes[23],"Lucas");
	strcpy(nomes[24],"Mateus");
	strcpy(nomes[25],"Teodoro");
	strcpy(nomes[26],"Felipe");
	strcpy(nomes[27],"Jean");
	strcpy(nomes[28],"Denise");
	strcpy(nomes[29],"Rosana");

}

void trocas(float v_notas[MAX], char v_nomes[MAX][15], int t){
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

void insercao (float v_notas[MAX], char v_nomes[MAX][15], int t){
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
	
void selecao (float v_notas[MAX], char v_nomes[MAX][15], int t){
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

int pesqseq(char v_nomes[MAX][15], char busca[15]) {
	int i;
	
	for(i = 0; i < MAX; i++) {
		if(strcmp(v_nomes[i], busca) == 0) 
			return i;
			
		else if(strcmp(v_nomes[i], busca) > 0)
			return -1;
	}
	return -1;
}

int pesqbin ( float v [], int busca ) {
     int inicio, fim, meio ;
     inicio = 0 ;
     fim = MAX - 1 ;
     while ( inicio <= fim ) {
               meio =  ( inicio + fim ) / 2  ;
               if ( v [ meio ] == busca )
                         return meio;
               if ( busca < v [ meio ] )
                         fim = meio - 1 ;
               else
                         inicio = meio + 1 ;
     }
     return -1 ;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	do{
	vetores();
	system("cls");
	printf ("Escolha uma opção para a ordenação: \n");
	printf("1. Bolha\n");
	printf("2. Inserção\n");
	printf("3. Seleção\n");
	printf("0.Sair\n");
	printf("Digite a opção: ");
	scanf("%d",&opc);
	switch (opc){
		case 1:	trocas(notas,nomes, MAX);
			break;
		case 2: insercao(notas,nomes, MAX);
			break;
		case 3: selecao(notas,nomes, MAX);
			break;
		case 0: return 0;
	}
	system ("cls");
	printf("\n\n\n NOMES\t\tNOTAS\n");
		for (i=0;i<MAX;i++)
		printf("%s\t\t%.1f\n", nomes[i], notas[i]);
	system ("pause");

}
	while (opc<=3);
	
	
	getch();
	return 0;
}

