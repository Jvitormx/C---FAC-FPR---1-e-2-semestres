#include <stdio.h>

int conv(int cel);

int main(void)
{
    int cel;
    scanf("%d", &cel);
    printf("%d\n", conv(cel));
}

int conv(int cel)
{
    return (cel*1.8)+32;
}
