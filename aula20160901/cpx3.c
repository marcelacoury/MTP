#include<stdio.h>
#include<complex.h>
#include<math.h>

int main(){
    double complex Z1,Z2, raiz;
    double preal, pimag;
    printf("Informe a parte real do Z1: ");
    scanf("%lf", &preal);
    printf("\nInforme a parte imaginaria do Z1: ");
    scanf("%lf", &pimag);
    Z1 = preal + pimag*I;
    raiz = csqrt(Z1);
    printf("\nProduto: %lf + %lf i\n", creal(raiz), cimag(raiz));
    printf("\nProduto: %lf /_ %lf rad\n", cabs(raiz), carg(raiz));
    return 0;
}

