#include <stdio.h>

int main(void)
{
    int var[3];

    int i;

    var[0]=55;
    var[1]=65;
    var[2]=33;

    for(i=0;i<3;i++)
    {
        printf("%d\n", var[i]);
    }
}
