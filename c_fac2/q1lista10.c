#include <stdio.h>

void func(int n, int a, int b);

int main(void)
{
    int n, a, b;

    printf("n: ");
    scanf("%d", &n);

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    func(n,a,b);
}

void func(int n, int a, int b)
{
    int i;
    for(i=a;i<=b;i++){
        if(i%n!=0){
            printf("%d ", i);
        }
    }
}
