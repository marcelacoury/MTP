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
    Z2 = conj(Z1);
    prod = Z1 * Z2;
    printf("\nProduto: %lf + %lf i\n", creal(prod), cimag(prod));
    printf("\nProduto: %lf /_ %lf rad\n", cabs(prod), carg(prod));
    return 0;
}
