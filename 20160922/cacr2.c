#include<stdio.h>
#include<math.h>

float calcular_delta( float A, float B, float C);
void calcular_raizes( float A, float B, float C, float D );

int main(){
    float a,b,c,d;
    printf("Digite a da funcao: \n");
    scanf("%f",&a);
    printf("Digite b da funcao: \n");
    scanf("%f",&b);
    printf("Digite c da funcao: \n");
    scanf("%f",&c);
    d = calcular_delta(a,b,c);
    printf("Delta = %f\n", d);
    calcular_raizes(a,b,c,d);
    return 0;
}

float calcular_delta( float A, float B, float C)
{
    float delta;
    delta = B*B - 4*A*C;
    return delta;
}

void calcular_raizes( float A, float B, float C, float D )
{
    float x1,x2;
    if(D>0){
        x1 = (-B + sqrt(D))/(2*A);
        x2 = (-B - sqrt(D))/(2*A);
        printf("x1 = %f \nx2 = %f\n",x1,x2);
    }
    if(D = 0){
         x1 = -B/(2*A);
         x2 = -B/(2*A);
         printf("x1 = %f \nx2 = %f\n",x1,x2);
    }
    if(D<0){
        printf(" x1 = %f + %f*I \nx2 = %f - %f*I\n", -B/(2*A) ,sqrt(-D)/(2*A),-B/(2*A),sqrt(-D)/(2*A));
    }
}
