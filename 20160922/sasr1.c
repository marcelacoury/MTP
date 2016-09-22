#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

void chat();

int main(){
    srand(time(0));
    char frase_usuario[256];
    printf(" # Bom dia! Vamos conversar?\n");
    do{
    fgets(frase_usuario, sizeof(frase_usuario),stdin);
    chat();
    }while(strncmp(frase_usuario, "tchau",5) != 0 );
    printf("\n # Ate a proxima! \n");
    return 0;
}

void chat()
{
    int opcao;
    opcao = rand()%7;
    switch( opcao ){
    case 0: printf("Tudo bem?\n");
            break;
    case 1: printf("Ok\n");
            break;
    case 2: printf("LOL!\n");
            break;
    case 3: printf("Que legal\n");
            break;
    case 4: printf("Que chato\n");
            break;
    case 5: printf("Fale mais sobre isso\n");
            break;
    case 6: printf("Sobre o que quer falar? \n");
            break;
    }
}
