#include<stdio.h>
#include<complex.h>

int main(){
    double complex Z1,Z2, soma, prod;
    double preal, pimag;
    printf("Informe a parte real do Z1: ");
    scanf("%lf", &preal);
    printf("\nInforme a parte imaginaria do Z1: ");
    scanf("%lf", &pimag);
    Z1 = preal + pimag*I;
    printf("\nInforme a parte real do Z2: ");
    scanf("%lf", &preal);
    printf("\nInforme a parte imaginaria do Z2: ");
    scanf("%lf", &pimag);
    Z2 = preal + pimag*I;
    soma = Z1 + Z2;
    prod = Z1 * Z2;
    printf("\nSoma: %lf + %lf i\n", creal(soma), cimag(soma));
    printf("\nSoma: %lf /_ %lf rad\n", cabs(soma), carg(soma));
    printf("\nProduto: %lf + %lf i\n", creal(prod), cimag(prod));
    printf("\nProduto: %lf /_ %lf rad\n", cabs(prod), carg(prod));
    return 0;
}
