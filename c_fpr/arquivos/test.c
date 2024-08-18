#include <stdio.h>

void func(int *i, int *x);

int main(void)
{
    int i, x;

    printf("i: ");
    scanf("%d", &i);

    printf("x: ");
    scanf("%d", &x);

    func(&i, &x);

    printf("%d\n", i);
    printf("%d\n", x);
}

void func(int *i, int *x)
{
    *i+=10;
    *x-=10;
}
