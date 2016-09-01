#include<stdio.h>
#include<float.h>
#include<time.h>
#include<stdlib.h> //RAND_MAX
int main(){
    int i;
    srand(time(0));
    if(1.0 > 1.0 - DBL_EPSILON/4.0)
        printf("Maior\n");
    else
        printf("\nIgual!?\n");
    for(i=0;i<10;i++)
    printf("%g\n", (float)rand()/RAND_MAX);
    return 0;
}
