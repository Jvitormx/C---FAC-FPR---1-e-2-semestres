#include <stdio.h>

/*Considerando a existência de uma matriz de inteiros M, de ordem N (ou seja, o no de linhas e o no de colunas são iguais a
N), onde N é uma constante, desenvolver uma função que retorne 1 se a seguinte regra for atendida por M (caso contrário,
o valor 0 deverá ser retornado): A soma dos elementos da diagonal principal deve ser igual à soma dos elementos que estão acima desta
diagonal, assim como à soma dos elementos abaixo da diagonal.*/

#define M 5
#define N 5

int regraSoma(int mat[M][N]);

int main(void)
{
    int i, j, mat[M][N]={{6,3,1,2,6},{1,3,5,4,2},{3,4,4,2,2},{5,9,1,9,3},{4,0,2,1,8}};
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    printf("%d\n", regraSoma(mat));
}

int regraSoma(int mat[M][N])
{
    int i,j, somaD=0, somaAcima=0, somaAbaixo=0, cont1=1, cont2=0;

    for(i=0;i<M;i++)
    {
        somaD+=mat[i][i];
    }
    for(i=0;i<M;i++)
    {
        if(cont1==5){
            break;
        }
        for(j=cont1;j<N;j++)
        {
            somaAcima+=mat[i][j];
        }
        cont1++;
    }
    for(i=1;i<M;i++)
    {
        for(j=0;j<i;j++)
        {
            somaAbaixo+=mat[i][j];
        }
    }
    if(somaAcima==somaD && somaAbaixo==somaD)
    {
        return 1;
    }else{
        return 0;
    }
}
