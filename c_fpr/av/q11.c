#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 8
#define C 4

/*Pede-se o desenvolvimento de uma função recursiva que, dada uma matriz M de L linhas e C colunas, onde L e C são
constantes, e três linhas L1, L2 e L3, altere os elementos de L3, de forma que cada um consista na soma dos elementos
de L1 e L2, conforme ilustrado no exemplo abaixo:*/

void printMat(int mat[L][C]);
void preencherAleatorio (int mat[L][C]);
void soma(int mat[L][C], int l1, int l2, int l3);
void soma2(int mat[L][C], int l1, int l2, int l3, int i);

int main(void)
{
    int mat[L][C], l1, l2, l3;

    preencherAleatorio(mat);

    printMat(mat);

    printf("l1: ");
    scanf("%d", &l1);

    printf("l2: ");
    scanf("%d", &l2);

    printf("l3: ");
    scanf("%d", &l3);

    soma(mat, l1, l2, l3);

    printMat(mat);
}

void soma2(int mat[L][C], int l1, int l2, int l3, int i)
{
    i++;
    if(i<C)
    {
        mat[l3][i]=mat[l1][i]+mat[l2][i];
        soma2(mat, l1, l2, l3, i);
    }
}

void soma(int mat[L][C], int l1, int l2, int l3)
{
    int i=0;
    if(i<C)
    {
        mat[l3][i]=mat[l1][i]+mat[l2][i];
        soma2(mat, l1, l2, l3, i);
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
