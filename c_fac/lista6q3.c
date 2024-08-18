#include <stdio.h>

int main(void)
{
    int base, exp, result;
    printf("base: ");
    scanf("%d",&base);
    printf("expoente: ");
    scanf("%d",&exp);
    result=1;

    for(int i=0;i<exp;i++)
    {
        result*=base;
    }

    printf("%d\n", result);
}