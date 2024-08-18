#include <stdio.h>

int main(void)
{
    float x, num;
    int y, contNum=0;

    scanf("%f", &x);
    scanf("%d", &y);

    for(int i=0;i<10;i++)
    {
        scanf("%f", &num);
        if(num>=x-y && num<=x+y)
        {
            contNum++;
        }
    }
    printf("%d", contNum);
}