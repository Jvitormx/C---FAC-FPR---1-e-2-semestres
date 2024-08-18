#include <stdio.h>

void func(int n, int a, int b);

int main(void)
{
    int n, a, b;
    printf("N: ");
    scanf("%d", &n);
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    func(n,a,b);
}

void func(int n, int a, int b)
{
    int i, mult=n;
    for(i=a;i<b;i++)
    {
        if(n>=a && n<=b)
        {
            printf("%d\n", n);
        }
        
        n*=mult;
    }
}
