#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
int main(){
    double inversao2, soma2=0;
    float num, inversao1, soma1=0;
    int i;
    printf("Informe um numero:");
    scanf("%f", &num);
    inversao1 = 1.0/num;
    inversao2 = 1.0/num;
    for( i = 1; i<=729; i++){
        soma1 = soma1 + inversao1;
        soma2 = soma2 + inversao2;
    }
    printf("\n%.15g \n", soma1);
    printf("\n%.15g \n", soma2);
    return 0;
}
