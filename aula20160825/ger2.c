#include<stdio.h>
#include<time.h>
main(){
    srand(time(0));
    int num = -1,aleatorio, cont=0;
    aleatorio = rand()%100;
    printf("%d ", aleatorio);
    while(num!=aleatorio){
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        if(num<aleatorio) printf("\nBaixo.\n");
        else if(num>aleatorio) printf("\nAlto.\n");
        cont++;
    }
    printf("\nVoce acertou. Tentativas: %d \n", cont);
}

