#include <stdio.h>

void func(int num, int *num_1, int *num_2);

int main(void)
{
    int num, num_1, num_2;

    num=10;

    func(num, &num_1, &num_2);

    printf("%d | %d\n", num_1, num_2);
}

void func(int num, int *num_1, int *num_2)
{
    *num_1=num+5;
    *num_2=num-5;
}
