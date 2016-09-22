#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int sorteio( int n);

int main(){
    srand(time(0));
    int numero;
    printf("Digite um numero entre 1 e 10: ");
    scanf("%d",&numero);
    sorteio( numero );
    return 0;
}

int sorteio( int n)
{
    int numero,i;
    for(i =0; i< 10; i++){
         numero = rand()%10 +1;
        if(numero == n) printf("Parabens!\n");
    }
}
