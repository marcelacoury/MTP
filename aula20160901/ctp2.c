#include<stdio.h>
#include<ctype.h>

int main(){
    char frase[256];
    char scan;
    int i=0;
    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);
    scan = frase[0];
    while(scan!='\0'){
             frase[i] = toupper(scan);
             i++;
             scan = frase[i];
    }
    printf("%s\n", frase);
    return 0;
}
