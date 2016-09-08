#include<stdio.h>

int main(){
    int vetor[10];
    int i, aux;
    for(i =0; i<10; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(i=0;i<6;i++){
        aux = vetor[i];
        vetor[i] = vetor[9-i];
        vetor[9-i] = aux;
    }
    printf("\nNova sequencia:");
    for(i =0; i<10; i++){
        printf("\n%i ", vetor[i]);
    }
    return 0;
}
