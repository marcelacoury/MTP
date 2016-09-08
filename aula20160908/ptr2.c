#include<stdio.h>

int main(){
    int vetor[] = {0,1,2,4,8};
    int contagem = 0;
    unsigned char *p = NULL, *q; // inicializar ponteiros
    p = q = (unsigned char *) vetor;  //endereco do primeiro
    for( ; p < q + sizeof(vetor) ; p++){
        if(*p == 0x0) contagem++;
        printf("%p : %X\n", p, *p);
    }
    printf("Bytes apenas com 0's: %d\n", contagem);
    return 0;
}
