#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opc = 0;
	
	do{
		
		printf("1.Incluir\n");
		printf("2.Consultar\n");
		printf("3.Alterar\n");
		printf("4.Imprimir\n");
		printf("5.Sair\n");
		printf("Digite a opção desejada: ");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				printf("1.Incluir\n\n");
				break;
			case 2:
				printf("2.Consultar\n\n");
				break;
			case 3:
				printf("3.Alterar\n\n");
				break;
			case 4:
				printf("4.Imprimir\n\n");
				break;
			case 5:
				printf("5.Sair\n\n");
				break;
				default:
					printf("Opção Inválida\n\n");
		}
		
	}while(opc != 5);	
	
	getch();
	return 0;
}
