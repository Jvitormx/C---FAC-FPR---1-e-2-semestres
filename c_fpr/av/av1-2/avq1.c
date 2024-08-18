#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 5
#define C 4

void printMat(int mat[L][C]);
void preencherAleatorio (int mat[L][C]);
int trocar(int mat[L][C], int l1, int l2);

int main(void)
{
    int mat[L][C], l1, l2;
    preencherAleatorio(mat);
    printMat(mat);

    printf("l1: ");
    scanf("%d", &l1);
    printf("l2: ");
    scanf("%d", &l2);

    printf("%d\n", trocar(mat, l1, l2));

    printMat(mat);
}

int trocar(int mat[L][C], int l1, int l2)
{
    int i=0, j, aux[C];
    for(j=0;j<C;j++)
    {
        aux[j]=mat[l2-1][j];
        mat[l2-1][j]=mat[l1-1][j];
    }
    for(j=C-1;j>=0;j--)
    {
        mat[l1-1][j]=aux[i];
        i++;
    }

    return 1;
}

void preencherAleatorio (int mat[L][C])
{
	//declaração de variáveis
	int i, j;

	srand(time(NULL));

	//varrendo as linhas da matriz
	for (i=0;i<L;i++)
	{
		//varrendo as colunas da matriz
		for (j=0;j<C;j++)
		{
			mat[i][j] = rand()%100;
		}
	}
}

void printMat(int mat[L][C])
{
    int i, j;
    for(i=0;i<L;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("| %d | ", mat[i][j]);
        }
        printf("\n");
    }
}

