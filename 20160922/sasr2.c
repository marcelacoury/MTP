#include<stdio.h>

void pares();
void impares();

int main(){
    int opcao;
    printf("Escolha uma opcao:\n");
    printf("1 - Numeros pares\n2 - Numeros impares\n");
    scanf("%d", &opcao);
    if(opcao == 1)
        pares();
    else
        impares();
    return 0;
}

void pares(){
    int i;
    for(i=0; i<=10; i++){
        if(i%2 == 0)
            printf("%d ", i);
    }
}
void impares(){
    int i;
    for(i=0; i<=10; i++){
        if(i%2 != 0)
            printf("%d ", i);
    }
}
