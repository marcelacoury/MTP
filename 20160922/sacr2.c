#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int jogar_dado();

int main(){
    srand(time(0));
    int dado, soma = 0,i, tentativa = 0;
    do{
    for(i=0;i<5;i++){
        printf("Aperte 1 para jogar o dado!\n");
        scanf("%d", &dado);
        dado = jogar_dado();
        soma = soma + dado;
    }
    printf("%d", soma);
    if( soma >= 21){
        printf("\nGanhou! \n");
        return 0;
        }
    else tentativa ++;
    printf("Tentativa %d.\n", tentativa +1);
    }while(tentativa < 3);
    if(tentativa = 3)
        printf("Perdeu!\n");


    return 0;
}

int jogar_dado()
{
    int dado;
    dado = rand()%6 + 1;
    return dado;
}
