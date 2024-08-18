#include <stdio.h>

int soma(int var[]);

int main(void)
{
    int valores[]={1,2,3,4,5,6};

    printf("%d\n", soma(valores));
}

int soma(int var[])
{
    int i, soma=0;
    for(i=0;i<6;i++)
    {
        soma+=var[i];
    }

    return soma;
}
