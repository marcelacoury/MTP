#include<stdio.h>
#include<math.h>
 int main(){
    double x1,x2,y1,y2,distancia;
    printf("Informe a coordenada x e y do ponto 1: ");
    scanf("%lf%lf", &x1,&y1);
    printf("Informe a coordenada x e y do ponto 2: ");
    scanf("%lf%lf", &x2,&y2);
    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("\nDistancia entre os dois pontos: %.4lf\n", distancia);
    return 0;
 }
