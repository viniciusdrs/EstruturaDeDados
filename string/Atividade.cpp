# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <string.h>
# include <locale.h>
# define t 5

void ord_nome ( char v_nomes [t] [ 30 ], float v_notas [t], int vet_faltas [t]);
void ord_nota ( char v_nomes [t] [ 30 ], float v_notas [t], int v_faltas[t]);
void ord_faltas ( char v_nomes [t] [ 30 ], float v_notas [t], int v_faltas [t]);


int main ( ) {
	setlocale(LC_ALL, "Portuguese");
    char nomes [t] [ 30 ] = {"Lia", "Ana", "Ivo", "Teo", "Gil" } ;
    float nota [t] = { 7.5, 9.5, 3.5, 4.5, 8.5 };
    int faltas [t] = { 3, 7, 15, 11, 1 }, i, opc ;
    do {
         system ("cls") ;
         printf ( "Escolha uma opção\n\n" ) ;
         printf ( "1. Ordena Nome\n" ) ;
         printf ( "2. Ordena Nota\n" ) ;
         printf ( "3. Ordena Faltas\n" ) ;
         printf ( "4. Sair\n\n" ) ;
         scanf ( "%d", &opc ) ;
          if ( opc == 4) return 0 ;
              switch ( opc ) {
                   case 1 : 
                        ord_nome(nomes, nota, faltas); break ;
                   case 2 : 
                        ord_nota(nomes, nota, faltas); break  ;
                   case 3 : 
                        ord_faltas(nomes, nota, faltas); break ;
              }
              system ( "cls" ) ;
              printf ( "Dados ordenados\n" ) ;
              printf("\n\n            NOMES      NOTAS    FALTAS");
			printf("\n            =================================\n");
              for (i=0;i<t;i++) {
                    printf("            %-10s  %-5.1f  %d\n",nomes[i], nota[i],faltas[i]);
              }
             getch ( ) ;
        } while ( opc != 4 ) ;
        getch () ;
        return 0 ;
} 
void ord_nome ( char v_nomes [t] [ 30 ], float v_notas [t], int v_faltas [t] ){
	int i, j, k_faltas;
	float k_notas;
	char k_nomes[5];

	for(i = 0; i < t-1; i++){
		for (j = 0; j < t - (i+1); j++){
			if ( strcmp (v_nomes[j], v_nomes[j + 1] ) > 0) {
			
				strcpy(k_nomes,v_nomes[j]);
				strcpy(v_nomes[j],v_nomes[j+1]);
				strcpy(v_nomes[j+1],k_nomes);
			
				k_notas      = v_notas[j];
				v_notas[j]   = v_notas[j+1];
				v_notas[j+1] = k_notas;
				
				k_faltas=v_faltas[j];
				v_faltas[j]=v_faltas[j+1];
				v_faltas[j+1]=k_faltas;

				
			}
		}
	}
}

void ord_nota ( char v_nomes [t] [30], float v_notas [t], int v_faltas[t]){
	int i, j, min, k_faltas;
	float k_notas;
	char k_nomes[5];

	for(i = 0; i < t-1; i++){
		min = i;
		for (j = i + 1; j < t; j++){
			if (v_notas[j]<v_notas[min])
				min = j;
		}
			if (i != min){
				k_notas=v_notas[i];
				v_notas[i]=v_notas[min];
				v_notas[min]=k_notas;

				strcpy(k_nomes,v_nomes[i]);
				strcpy(v_nomes[i],v_nomes[min]);
				strcpy(v_nomes[min],k_nomes);
				
				k_faltas=v_faltas[i];
				v_faltas[i]=v_faltas[min];
				v_faltas[min]=k_faltas;
			}
	}
}

void ord_faltas ( char v_nomes [t] [30], float v_notas [t], int v_faltas [t]){
	int i, j, k_faltas;
	float k_notas;
	char k_nomes[5];

	for(i = 1; i < t; i++){
		k_notas = v_notas[i];
		strcpy(k_nomes,v_nomes[i]);
		k_faltas = v_faltas[i];
		j = i - 1;
		while (j >= 0 && v_faltas[j] > k_faltas){
			v_faltas[j+1] = v_faltas[j];
			v_notas[j+1] = v_notas[j];
			strcpy(v_nomes[j+1], v_nomes[j]);
			j--;
		}
		v_faltas[j+1] = k_faltas;
		v_notas[j+1] = k_notas;
		strcpy(v_nomes[j+1], k_nomes);
	}
}

