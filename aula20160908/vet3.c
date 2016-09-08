#include<stdio.h>

int main(){
    int vetor[10];
    int i, soma = 0, produto = 1;
    for(i =0; i<10; i++){
        printf("\nDigite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(i=0;i<10;i++){
        soma = soma + vetor[i];
        produto = produto * vetor[i];
    }
    printf("\nSoma: %d ", soma);
    printf("\nProduto: %d ", produto);
    return 0;
}

