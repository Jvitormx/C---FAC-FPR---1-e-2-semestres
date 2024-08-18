#include <stdio.h>

int main(void)
{
    int i, j, var[3][4]={{1,2},{4,5},{6,7}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\n", var[i][j]);
        }
    }
}
