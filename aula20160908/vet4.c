#include<stdio.h>
#include<time.h>

int main(){
    srand(time(0));
    int vetor[1000];
    int i, menor, maior, numero;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);
    for(i = 0; i < numero ; i++){
        vetor[i] = rand()%10;
    }
    menor = maior = vetor[0];

    for(i = 1; i < numero ; i++){
        if(vetor[i]< menor) menor = vetor[i];
        if(vetor[i]> maior) maior = vetor[i];
    }
    printf("Maior numero: %d ", maior);
    printf("Menor numero: %d ", menor);

    return 0;
}


