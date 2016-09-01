#include<stdio.h>
#include<time.h>
main(){
    srand(time(0));
    int dado1,dado2, dado3, soma;
    dado1 = rand()%7;
    dado2 = rand()%7;
    dado3 = rand()%7;
    soma = dado1+dado2+dado3;
    printf("\nDado 1= %d , dado 2= %d , dado 3= %d", dado1,dado2,dado3);
    printf("\nSoma= %d", soma);
    if(soma==7||soma==11) printf(" \nGanhou\n");
    else printf("\nPerdeu\n");
}
