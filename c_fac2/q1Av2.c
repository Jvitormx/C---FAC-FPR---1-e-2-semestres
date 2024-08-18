#include <stdio.h>

int func(int n, int a, int b);

int main(void)
{
    int n, a, b;

    printf("n: ");
    scanf("%d", &n);
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    printf("%d", func(n,a,b));
}

int func(int n, int a, int b)
{
    int i,maior;
    for(i=a;i<=b;i++){
        if(i%n==0){
            maior=i;
        }
    }
    return maior;
}
