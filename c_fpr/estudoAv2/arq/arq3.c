#include <stdio.h>

int escreverTexto(char nome[], int a, int b);

int main(void)
{
    int a,b;
    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    if(escreverTexto("teste2.txt", a, b)==1)
    {
        printf("arquivo criado");
    }else{
        printf("erro!!!");
    }
}

int escreverTexto(char nome[], int a, int b)
{
    FILE *arq;
    int i;

    arq=fopen(nome,"a");

    if(!arq)
    {
        return 0;
    }else{
        for(i=a;i<=b;i++)
    {
        fprintf(arq, "%d\n", i);
    }

    fclose(arq);

    return 1;
    }
}
