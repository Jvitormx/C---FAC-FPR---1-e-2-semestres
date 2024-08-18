#include <stdio.h>

float func(float celsius);

int main(void)
{
    float cels;
    printf("celsius: ");
    scanf("%f", &cels);

    printf("%.2f", func(cels));
}

float func(float celsius)
{
    return (celsius*1.8)+32;
}
