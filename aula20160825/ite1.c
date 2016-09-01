#include<stdio.h>
main(){
    int num, fatorial=1, i;
    printf("Informe um numero:");
    scanf("%d", &num);
    for( i = 1; i<=num; i++){
        fatorial = fatorial*i;
    }
    printf("\nFatorial de %d: %d", num, fatorial);
}
