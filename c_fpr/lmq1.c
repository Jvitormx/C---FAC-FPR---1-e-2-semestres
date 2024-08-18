#include <stdio.h>

void verifica(int mat, int x, int y);

int main(void)
{
    int num, linha, mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    printf("num: ");
    scanf("%d", &num);
    printf("linha: ");
    scanf("%d", &linha);

    verifica(mat, num, linha);
}

void verifica(int mat, int x, int y, int tam1, int tam2)
{
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(mat[y+1][j]==x)
            {
                printf("existe\n");
            }
        }
    }
    printf("ihhh\n");
}
