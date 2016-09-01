#include<stdio.h>
#include<math.h>

int main(){
    float n, b, logaritmo;
    printf("Informe um numero: ");
    scanf("%f", &n);
    printf("\nInforme uma base: ");
    scanf("%f", &b);
    logaritmo = log10(n)/log10(b);
    printf("\nLogaritmo %.1f na base %.1f : %.4f\n", n,b, logaritmo);
    return 0;
}

