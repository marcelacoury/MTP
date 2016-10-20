#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void gravaArq(char * filename, float * vetor, int N );

int main(){
    srand(time(0));
    int n;
    char nomearq[256];
    printf("Digite o numero de dados que deseja: ");
    scanf("%d", &n);
    float * vetor = (float *)malloc(n*sizeof(float));
    printf("Nome do arquivo: ");
    scanf("%s", nomearq);
    gravaArq(nomearq, vetor, n);
    free(vetor);
    return 0;
}

void gravaArq(char * filename, float * vetor, int N ){
    FILE * arquivo;
    arquivo = fopen(filename, "w");
    int i;
    for(i=0; i<N ; i++){
        vetor[i] = rand()%100;
        fprintf(arquivo, "%g ", vetor[i]);
    }
    fclose(arquivo);
}
