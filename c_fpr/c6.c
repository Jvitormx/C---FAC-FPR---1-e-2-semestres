#include <stdio.h>

void bolha(int vet[], int tam);

int main(void)
{
    int val[]={9,6,8,3,88,1}, i;

    bolha(val, sizeof(val)/sizeof(val[0]));

    for(i=0;i<sizeof(val)/sdsdizeof(val[0]);i++)
    {
        printf("%d\n", val[i]);
    }
}

void bolha(int vet[], int tam)
{
    int i, aux;
    while(tam>1)
    {
        for(i=0;i<tam-1;i++)
        {
            if(vet[i]>vet[i+1])
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
        tam-=1;
    }
}
