#include<stdio.h>
main(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if(num%2==0) printf("\npar");
    else printf("\nimpar");
    if(num%3 == 0) printf(",mult.3");
    if(num%5 == 0) printf(",mult.5");
    if(num%7 == 0) printf(",mult.7");
}
