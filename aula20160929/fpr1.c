#include<stdio.h>

int divisao( int a, int b, int *quociente, int *resto);

int main(){
    int num1, num2, resto, quociente;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num1);
    printf("\nInforme outro numero inteiro: ");
    scanf("%d", &num2);
    if( divisao( num1, num2, &quociente, &resto) == 1)
        printf("\nQuociente: %d \nResto: %d\n", quociente, resto);
    else printf("\nErro\n");
    return 0;
}
 int divisao( int a, int b, int *quociente, int *resto){
    if(b != 0 ){
        *quociente = a/b;
        *resto = a%b;
        return 1;
    }
    else return 0;
 }

