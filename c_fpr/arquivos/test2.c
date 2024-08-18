#include <stdio.h>

int ordenado(int vet[]);

int main(void)
{
    int vet[]={1,2,5,7,8};

    if(ordenado(vet)==1)
    {
        printf("nice");
    }else{
        printf("booo");
    }
}

int ordenado(int vet[])
{
    int i;
    for(i=0;i<4;i++)
    {
       if(vet[i]>vet[i+1])
       {
        return 0;
       }
    }

    return 1;
}
