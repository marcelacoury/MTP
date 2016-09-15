#include<stdio.h>
#define QTDEMAX 1000

inline void pgetchar(char * character) {
  // Getchar "protegido", recebe apenas um
  // caractere e descarta o resto do STDIN
  int c;
  *character = getchar();
  while((c = getchar()) != EOF && c != '\n');
}

struct cadastro{
    char nome[200];
    int idade;
    int telefone;
};

int main(){
    struct cadastro  CAD[QTDEMAX];
    int qtde = 0, op, lista,i;
   while(1){
        printf("Informe a opcao: \n");
        printf("1 - Cadastro.\n2- Listas.\n3 - Sair.\n");
        scanf("%d", &op);
        if(op == 3 ) break;
        switch(op)
        {
            case 1: printf("Informe o nome:\n ");
                    fflush(stdin);
                    scanf("%s", CAD[qtde].nome);
                    printf("Informe a idade:\n ");
                    scanf("%d", &CAD[qtde].idade);
                    printf("Informe o telefone:\n ");
                    scanf("%d", &CAD[qtde].telefone);
                    qtde++;
                    break;
            case 2: {
                    printf("Informe a opcao: \n");
                    printf("1 - Lista de nomes.\n2- Lista de idade.\n3 - Lista de telefones.\n4 - Sair.\n");
                    scanf("%d", &lista);
                    if(op == 4 ) break;
                    switch(lista)
                    {
                        case 1: for(i= 0; i< qtde; i++){
                                    printf("%s\n",CAD[i].nome);
                                }
                                break;
                        case 2: for(i= 0; i< qtde; i++){
                                    printf("%d\n",CAD[i].idade);
                                    printf("%d\n",CAD[i].telefone);
                                }
                                break;
                        case 3: for(i= 0; i< qtde; i++){
                                    printf("%d\n",CAD[i].telefone);
                                }
                                break;
                    }
        }
    }
   }
    return 0;
}
