#include<stdio.h>
#include<ctype.h>
#include<string.h>

void frase_arrumada( char *frase, char *resposta);

int main(){
    char frase[256], resposta[256];
    printf("Digite uma frase: ");
    gets(frase);
    frase_arrumada(&frase, &resposta);
    printf("%s\n", resposta);
    return 0;
}

void frase_arrumada( char *frase, char *resposta)
{
    int i,j=0;
    for(i=0; i<strlen(frase); i++){
        if(isalpha(frase[i])){
            resposta[j] = frase[i];
            j++;
        }

    }
}
