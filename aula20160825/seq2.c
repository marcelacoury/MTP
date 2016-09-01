#include<stdio.h>
main(){
 float base, altura, area_triang;
 printf("Informe a base e a altura do triangulo:");
 scanf("%f%f", &base, &altura);
 area_triang = (base*altura)/2;
 printf("\nArea do triangulo: %f \n", area_triang);
}

