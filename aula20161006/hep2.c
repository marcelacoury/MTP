#include<stdio.h>
#include<stdlib.h>

void imprimimatriz( float ** Matriz, int N, int M);
void imprimitransposta( float ** Matriz, int N, int M);

int main(){
    float ** matriz;
    int i,j,N,M;
    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &N);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &M);
    matriz = (float **)calloc(N,sizeof(float*));
    for(i=0;i<N;i++){
        matriz[i] = (float*)calloc(M, sizeof(float));
    }
    printf("Informe a matriz: \n");
    for(i=0; i<N; i++){
        for(j=0;j<M;j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("\n");
    imprimimatriz( matriz ,N ,M);
    printf("Transposta:\n ");
    imprimitransposta(matriz,N,M);
    for(i=0;i<N;i++)
        free(matriz[i]);
    free(matriz);
    return 0;
}

void imprimimatriz( float ** Matriz, int N, int M){
    int i,j;
    for(i=0; i<N; i++){
        for(j=0;j<M;j++){
            printf("%g%c",Matriz[i][j],(j == M-1)? '\n' : '\t');
        }
    }
}

void imprimitransposta( float ** Matriz, int N, int M){
    int i,j;
    for(j=0; j < M; j++){
        for(i=0;i < N; i++){
            printf("%g%c",Matriz[i][j],(i == N-1)? '\n' : '\t');
        }
    }
}

