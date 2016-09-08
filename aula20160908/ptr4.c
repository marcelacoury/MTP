#include<stdio.h>
#include<stdlib.h>
int main(){
    float num1, num2, soma= 0 ;
    unsigned char *p , *q;
    int i;
    printf("Informe dois numeros: ");
    scanf("%f",&num1);
    scanf("%f",&num2);
    soma = num1 + num2;
    p = (unsigned char *)&num1;
    q = (unsigned char *)&num2;
    printf("%p : %.1f \n", p , num1);
    printf("%p : %.1f \n", q , num2);
    printf("Soma: %.1f\n", soma);
    return 0;
}
