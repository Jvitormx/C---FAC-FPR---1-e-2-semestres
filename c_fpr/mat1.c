#include <stdio.h>
//colocar valor de 1 a N na matriz

int main(void)
{
    int i, j, mat[10][20], col=1;

    for(i=0;i<10;i++)
    {
        for(j=0;j<20;j++)
        {
            mat[i][j]=col;
            printf("%d\n", mat[i][j]);
            col++;
        }
    }
}
