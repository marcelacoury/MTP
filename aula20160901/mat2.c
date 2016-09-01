#include<stdio.h>
#include<math.h>

int main(){
    float a ,b ,c , A;
    printf("Informe dois lados do triangulo: ");
    scanf("%f%f", &b, &c);
    printf("\nInforme o angulo(em radianos) entre eles: ");
    scanf("%f", &A);
    a = sqrt(b*b+c*c-2*b*c*cos(A));
    printf("O valor do outro lado do triangulo eh %.4f \n", a);

    return 0;
}
