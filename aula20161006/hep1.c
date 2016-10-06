#include<stdio.h>
#include<stdlib.h>

void recebevetor(float * vetor, int qtde);
float Media( float * vetor, int qtde);
float desviopadrao( float * vetor, int qtde);

int main(){
    int qtde;
    float * vetor;
    float media, desvio;
    printf("Entre com a quantidade de elementos: ");
    scanf("%d", &qtde);
    vetor = (float *)calloc(qtde,sizeof(float));
    recebevetor(vetor, qtde);
    media = Media(vetor, qtde);
    desvio = desviopadrao(vetor,qtde);
    printf("Media: %g .Desvio padrao: %g \n", media, desvio);
    free(vetor);
    return 0;
}

void recebevetor(float * vetor, int qtde)
{
    int i;
    for(i=0; i< qtde; i++){
        printf("Entre com o elemento %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
}
float Media( float * vetor, int qtde)
{
    float Media = 0;
    int i;
    for(i = 0; i < qtde;i++){
        Media = Media + vetor[i];
    }
    return Media/qtde;
}
float desviopadrao( float * vetor, int qtde)
{
    float Soma = 0, m = Media(vetor, qtde);
    int i;
    for(i = 0; i < qtde;i++){
        Soma = Soma + pow((vetor[i]-m),2.f);
    }
    return sqrt(Soma/(qtde-1));
}
