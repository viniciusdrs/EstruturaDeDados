# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>
# include <stdlib.h>

typedef struct{
	int hora;
	int minutos;
	int segundos;
}hora;

int main(){
	setlocale(LC_ALL, "Portuguese");
hora horarios[5], horamaior;
int i;
horamaior.hora=0;
horamaior.minutos=0;
horamaior.segundos=0;
for (i=0;i<5;i++){
	printf("Informe a hora: ");
	scanf("%d",&horarios[i].hora);
	printf("Informe os minutos: ");
	scanf("%d",&horarios[i].minutos);
	printf("Informe os segundos: ");
	scanf("%d",&horarios[i].segundos);
	if((horarios[i].hora>horamaior.hora) || (horarios[i].hora==horamaior.hora && horarios[i].minutos > horamaior.minutos) || (horarios[i].hora==horamaior.hora && horarios[i].minutos == horamaior.minutos && horarios[i].segundos > horamaior.segundos)){
horamaior.hora=horarios[i].hora;
horamaior.minutos=horarios[i].minutos;
horamaior.segundos=horarios[i].segundos;
	}
	}
	printf("\n\nMaior hora lida é: \n\n ");
	printf("A hora maior digitada foi %d \n", horamaior.hora);
	printf("O minuto maior digitado foi %d \n", horamaior.minutos);
	printf("O segundo maior digitado foi %d \n", horamaior.segundos);
	getch();
	return 0;
}
