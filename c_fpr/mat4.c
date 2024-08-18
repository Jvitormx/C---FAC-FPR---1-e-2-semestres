#include <stdio.h>

//verifica se ha o valor n na matriz

#define M 10
#define N 20

int verifica(int num, int mat[M][N]);

int main(void)
{
    int i, j, mat[M][N], num, cont=1;

 for(i=0;i<10;i++)
    {
        for(j=0;j<20;j++)
        {
            mat[i][j]=cont;
            printf("%d\n", mat[i][j]);
            cont++;
        }
    }

    scanf("%d", &num);

    printf("%d\n", verifica(num, mat));
}

int verifica(int num, int mat[M][N])
{
    int i, j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<20;j++)
        {
            if(mat[i][j]==num)
            {
                return 1;
            }
        }
    }

    return 0;
}
