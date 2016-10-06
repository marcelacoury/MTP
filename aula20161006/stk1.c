#include<stdio.h>
#define N 2
#define M 4

void imprimimatriz( float Matriz[N][M]);
void imprimitransposta( float Matriz[N][M]);

int main(){
    float matriz[N][M];
    int i,j;
    printf("Informe a matriz: \n");
    for(i=0; i<N; i++){
        for(j=0;j<M;j++){
            printf("Linha %d coluna %d : ", i,j);
            scanf("%f",&matriz[i][j]);
        }
    }
    printf("\n");
    imprimimatriz( matriz);
    printf("Transposta:\n ");
    imprimitransposta(matriz);
    return 0;
}


void imprimimatriz( float Matriz[N][M]){
    int i,j;
    for(i=0; i<N; i++){
        for(j=0;j<M;j++){
            printf("%g%c",Matriz[i][j],(j == M-1)? '\n' : '\t');
        }
    }
}

void imprimitransposta( float Matriz[N][M]){
    int i,j;
    for(j=0; j < M; j++){
        for(i=0;i < N; i++){
            printf("%g%c",Matriz[i][j],(i == N-1)? '\n' : '\t');
        }
    }
}
