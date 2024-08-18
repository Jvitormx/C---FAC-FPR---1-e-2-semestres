#include <stdio.h>

int main(void)
{
    int n, soma=0, cont=0;
    float media;
    while(cont<10){
        scanf("%d", &n);
        cont++;
        soma+=n;
    }
    media=(float)soma/cont;
    printf("%d\n", soma);
    printf("%f\n", media);
}