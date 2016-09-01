#include<stdio.h>
#include<ctype.h>

 int main(){
    char frase[256];
    int i,cont = 0;
    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);
    for(i=0;frase[i]!='\0';i++){
        if(isalpha(frase[i])!=0 && isspace(frase[i])==0)
            cont++;
    }
    printf("\nNumero de letras: %d.\n", cont);
    return 0;
 }
