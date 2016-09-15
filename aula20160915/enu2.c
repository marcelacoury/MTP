#include<stdio.h>

int main ()
{
	int mes;
	printf("Insira o numero do mes: ");
	scanf("%d", &mes);
	switch(mes)
    {
        case 1:
            printf("Voce nasceu em Janeiro.\n");
            break;
        case 2:
            printf("Voce nasceu em Fevereiro.\n");
            break;
        case 3:
            printf("Voce nasceu em Marco.\n");
            break;
        case 4:
            printf("Voce nasceu em Abril.\n");
            break;
        case 5:
            printf("Voce nasceu em Maio.\n");
            break;
        case 6:
            printf("Voce nasceu em Junho.\n");
            break;
        case 7:
            printf("Voce nasceu em Julho.\n");
            break;
        case 8:
            printf("Voce nasceu em Agosto.\n");
            break;
        case 9:
            printf("Voce nasceu em Setembro.\n");
            break;
        case 10:
            printf("Voce nasceu em Outubro.\n");
            break;
        case 11:
            printf("Voce nasceu em Novembro.\n");
            break;
        case 12:
            printf("Voce nasceu em Dezembro.\n");
            break;
    }
}
