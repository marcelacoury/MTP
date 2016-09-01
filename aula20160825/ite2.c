#include<stdio.h>
main(){
    char palavra[256];
    int cont = 0,i=0;
    printf("Escreva uma palavra: ");
    scanf("%s", palavra);
    while(palavra[i]!='\0'){
        cont++;
        i++;
    }
    printf("\nNumero de caracteres da palavra: %d \n", cont);
}
