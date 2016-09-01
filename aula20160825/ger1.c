#include<stdio.h>
main(){
    int num, cont=0,i;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num==1) printf("\nNumero %d primo.\n",num);
    else{
        for(i = 1; i<=num; i++ ){
        if(num%i==0) cont++;
    }
    if(cont==2)
    printf("\nNumero %d primo.\n", num);
    else printf("\nNumero %d nao eh primo.\n", num);
    }

}
