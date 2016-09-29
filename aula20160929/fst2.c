#include<stdio.h>

struct Numeros
{
    int numerador;
    int denominador;
};

struct  Numeros soma_racionais( int numerador1, int numerador2, int denominador1, int denominador2 );

int main(){
    int num1, den1, num2, den2;
    struct Numeros resposta;
    printf("Entre com um numero racional: ");
    scanf("%d/%d", &num1,&den1);
    printf("Entre com outro numero racional: ");
    scanf("%d/%d", &num2,&den2);
    resposta = soma_racionais( num1, num2, den1, den2 );
    printf("Soma dos racionais: %d / %d \n", resposta.numerador, resposta.denominador);
    return 0;
}

struct  Numeros soma_racionais( int numerador1, int numerador2, int denominador1, int denominador2 )
{
    struct Numeros resposta;
    resposta.denominador = denominador1*denominador2;
    resposta.numerador = denominador2*numerador1 + denominador1*numerador2;
    return resposta;
};
