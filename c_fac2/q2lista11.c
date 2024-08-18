#include <stdio.h>
#define TAM 6

void change(float reais[]);

int main(void)
{
    float vec[]={1,2,3,4,5,6};
    change(vec);
}

void change(float reais[])
{
    int i, j;
    float aux;

    for(i=0,j=1;j<6;i+=2,j+=2)
    {

        aux=reais[i];
        reais[i]=reais[j];
        reais[j]=aux;
    }
    for(i=0;i<6;i++){
        printf("%.1f ", reais[i]);
    }
}
