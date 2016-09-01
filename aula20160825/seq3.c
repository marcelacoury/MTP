#include<stdio.h>
main(){
 float A,B,C, media;
 printf("Informe as notas A,B e C do aluno :");
 scanf("%f%f%f", &A,&B,&C);
 media = (A*2+B*3+C*5)/10;
 printf("\nMedia do aluno: %.1f \n", media);
}

