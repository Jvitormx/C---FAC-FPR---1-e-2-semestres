#include <stdio.h>
//preencher numero 1 na linha 1, 2 na linha 2, etc

int main(void)
{
    int i, j, mat[10][20], num=1;

    for(i=0;i<10;i++)
    {
        for(j=0;j<20;j++)
        {
            mat[i][j]=num;
            printf("%d\n", mat[i][j]);
        }
        num++;
    }
}
