#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
int main(){
    int64_t fatorial=1;
    int num, i;
    printf("Informe um numero:");
    scanf("%d", &num);
    for( i = 1; i<=num; i++){
        fatorial = fatorial*i;
    }
    printf("\nFatorial de %d: %" PRId64 ".\n", num, fatorial);
    return 0;
}

