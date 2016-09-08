#include<stdio.h>
#include<stdlib.h>

int main(){
    unsigned int numero = 0xFACA8421;
    unsigned char *p = NULL, *q; // inicializar ponteiros
    printf("%p : %u\n", &numero, numero);
    p = q = (unsigned char *) &numero;
    for( ; p < q + sizeof(int) ; p++)
        printf("%p : %X\n", p , *p);
    //printf("%p : %X\n", p , p[0]);
    //printf("%p : %X\n", p+1 , p[1]);
    //printf("%p : %X\n", p+2 , p[2]);
    //printf("%p : %X\n", p+3 , p[3]);
    return 0;
}
