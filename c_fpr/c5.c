#include <stdio.h>

int func(int vet[], int tam, int num);

int main(void)
{
    int num, var[]={1,2,5,7,8,10,15};

    printf("N: ");
    scanf("%d", &num);

    printf("%d\n", func(var, sizeof(var)/sizeof(var[0]), num));
}

int func(int vet[], int tam, int num)
{
    int i=0, val;
    while(i<tam && num>vet[i])
    {
        i++;
    }
}
