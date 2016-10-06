#include<stdio.h>
#include<math.h>
#define N 5

float media( float Numero[N]);
float desviopadrao( float Numero[N]);

int main()
{
    float numero[N];
    int i;
    printf("Digite %d numeros: ", N);
    for(i = 0; i < N;i++){
        scanf("%f",&numero[i]);
    }
    printf("Media: %g \n",media(numero));
    printf("Desvio padrao: %g \n", desviopadrao( numero));
    return 0;
}

float media( float Numero[N])
{
    float Media = 0;
    int i;
    for(i = 0; i < N;i++){
        Media = Media + Numero[i];
    }
    return Media/N;
}

float desviopadrao( float Numero[N])
{
    float Soma = 0, m = media(Numero);
    int i;
    for(i = 0; i < N;i++){
        Soma = Soma + pow((Numero[i]-m),2.f);
    }
    return sqrt( Soma/(N-1) );
}

