#include<stdio.h>
main(){
    int i,num, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(i=1;i<num;i++){
        if(num%i==0)
            soma = soma + i;
    }
    if(soma==num) printf("\nNumero %d perfeito.\n", num);
    else printf("\nNumero %d nao eh perfeito.\n", num);
}
