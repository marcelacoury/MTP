#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void lerDados( char * filename );

int main(){
    srand(time(0));
    char nomearq[256];
    printf("Nome do arquivo salvo: ");
    scanf("%s", nomearq);
    lerDados(nomearq);
    return 0;
}

void lerDados(char * filename ){
    FILE * arquivo;
    int i;
    float aux;
    arquivo = fopen(filename, "r");
    if ( arquivo == NULL )
        printf("Arquivo nao encontrado!\n");
    else {
        while ( !feof(arquivo) ) {
            fscanf(arquivo, "%f", &aux);
            printf("%g ", aux);
        }
        fclose(arquivo);
    }
}
