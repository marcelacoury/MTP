#include<stdio.h>
#include<ctype.h>
#include<math.h>

void receber_dado(char tipo, void * endereco);

int main(){
    int i;
    float f;
    char c;
    printf("Entre com um inteiro: \n");
    receber_dado('i', &i);
    printf("Entre com um float: \n");
    receber_dado('f', &f);
    printf("Entre com um char: \n");
    receber_dado('c', &c);
    printf("Para %d o quadrado: %d\n",i,i*i);
    printf("Para %f a raiz: %f\n",f,sqrt(f));
    printf("Para %c o caracter: %c\n", c,(islower(c) ? toupper(c) : tolower(c)));
    return 0;
}

void receber_dado(char tipo, void * endereco){
     int c;
    switch(tipo){
    case 'i':scanf("%d",(int*)endereco); break;
    case 'f':scanf("%f",(float*)endereco); break;
    case 'c':scanf("%c",(char*)endereco); break;
    }
  while((c = getchar()) != EOF && c != '\n');
}
