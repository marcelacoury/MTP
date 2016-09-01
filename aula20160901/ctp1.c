#include<stdio.h>
#include<ctype.h>

int main(){
    char frase[256];
    char olheiro;
    int i=0;
    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);
    olheiro = frase[0];
    while(olheiro!='\0'){
             frase[i] = tolower(olheiro);
             i++;
             olheiro = frase[i];
    }
    printf("%s\n", frase);
    return 0;
}
