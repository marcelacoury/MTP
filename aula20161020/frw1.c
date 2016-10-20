#include<stdio.h>
#include<string.h>
#define NCHAR 256

void lerDados();
void gravarDados();

int main(){
    int opcao;
    do{
        printf("********* MENU ***********\n");
        printf("1 - Escrever informacoes\n");
        printf("2 - Ler informacoes\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        getchar();
        if(opcao == 1)
            gravarDados();
        if(opcao == 2)
            lerDados();
    }while(opcao);
    return 0;
}

void gravarDados()
{
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    printf("Entre com o nome: ");
    fgets(nome, NCHAR, stdin);
    nome[strlen(nome) - 1] = '\0'; //exclui o enter da string
    printf("Entre com a idade: ");
    fscanf( stdin, "%d", &idade);
    printf("Entre com a altura: ");
    fscanf( stdin, "%f", &altura);
    arquivo = fopen("info.txt", "w");
    if(arquivo == NULL)
        fprintf(stderr, "Erro na gravacao do arquivo!\n");
    else{
    fprintf(arquivo, "%s\n%d\n%f\n", nome, idade, altura);
    fclose(arquivo);

    }

}

void lerDados()
{
    FILE * arquivo;
    char nome[NCHAR];
    int idade;
    float altura;
    arquivo = fopen("info.txt", "r");
    if(arquivo == NULL)
        fprintf(stderr, "Arquivo nao existente!\n");
    else{
    fgets(nome, NCHAR, arquivo);
    nome[strlen(nome) - 1] = '\0';
    fprintf(arquivo, "%d\n%f\n", &idade, &altura);
    fclose(arquivo);
    printf("Nome: ");
    fprintf(stdout, "%s\n", nome);
    printf("Entre com a idade: ");
    fprintf( stdout, "%d\n", idade);
    printf("Entre com a altura: ");
    fprintf( stdout, "%g\n", altura);
    }

}
