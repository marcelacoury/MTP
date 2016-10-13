#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int _TAM =0;
float * ReceberNumero();
float Maior(float * vetor);
float Menor(float * vetor);
float Media(float * vetor);

int main(){
    float * vetor = NULL;
    int opc;
    do{
        vetor = ReceberNumero(vetor);
        printf("Digite um numero: ");
        scanf("%f",&vetor[_TAM-1]);
        printf("\nMaior: %g", Maior(vetor));
        printf("\nMenor: %g", Menor(vetor));
        printf("\nMedia: %g", Media(vetor));
        printf("\nOutro? /n(0 - Nao, 1 - Sim): ");
        scanf("%d",&opc);

    }while(opc != 0);
    free(vetor);
    return 0;
}

float * ReceberNumero( float * vetor)
{
    _TAM++;
    if( vetor == NULL)
         vetor = (float *)malloc(sizeof(float));
    else
         vetor = (float *)realloc(vetor,_TAM*sizeof(float));
    return vetor;
}

float Maior(float * vetor)
{
        int i;
        float maior = vetor[0];
        for(i=0;i<(_TAM);i++){
            if(maior < vetor[i])
                maior = vetor[i];
        }
        return maior;
}

float Menor(float * vetor)
{
        int i;
        float menor = vetor[0];
        for(i=0;i<(_TAM);i++){
            if(menor > vetor[i])
                menor = vetor[i];
        }
        return menor;
}

float Media(float * vetor)
{
    float media = 0;
    int i;
    for(i=0;i<(_TAM);i++){
                media =  media + vetor[i];
        }
        return media/_TAM;
}
