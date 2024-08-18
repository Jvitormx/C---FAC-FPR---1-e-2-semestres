#include <stdio.h>

int func(float n);

int main(void)
{
    float n;

    printf("n: ");
    scanf("%f", &n);
    printf("%d", func(n));
}

int func(float n)
{
    if(n-(int)n>0.50){
        return (int)n+1;
    }else{
        return (int)n;
    }
}
