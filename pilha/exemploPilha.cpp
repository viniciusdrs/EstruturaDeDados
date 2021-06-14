# include <stdio.h>
# include <conio.h>
# include <locale.h>
# define MAXp 50

void init ( int *topo);
void push ( int *topo, int pilha[], int x );
int pop ( int *topo, int pilha[] );
int top ( int *topo, int pilha[] );

int main(){
	setlocale(LC_ALL, "Portuguese");
int n=13, r, topo, pilha[MAXp];
init (&topo);
do{
	r=n%2;
	push (&topo, pilha, r);
	n=n/2;
}
while (n!=0);
printf("O número 13 em binário é: ");
while (topo!= -1){
	printf("%d",pop(&topo,pilha));
}
	getch();
	return 0;
}

void init ( int *topo ) {
    *topo = -1;
 }
 
 void push ( int *topo, int pilha[], int x ) {
    if (  *topo != MAXp-1 ) {
		( *topo ) ++ ;
        pilha [ *topo ] = x ;
	}
    else
        printf ( "Pilha cheia! \n\n " ) ;
 }

int pop ( int *topo, int pilha[] ) {
	int x;
    if ( *topo != -1 ) {
    	x = pilha [ *topo ] ;
    	( *topo ) --;
        return x ;
	}
    else {
        printf ( "Pilha vazia! \n\n " ) ;
      	}
 }

int top ( int *topo, int pilha[] ) {
    if ( *topo != -1 ) 
        return ( pilha [ *topo ] ) ;
    else {
        printf ( "Pilha vazia! \n\n " ) ;
       	}
 }

