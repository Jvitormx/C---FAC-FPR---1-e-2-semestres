#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 3
#define C 3

void printMat(int mat[L][C]);
void preencherAleatorio (int mat[L][C]);

/*
	Implementar uma função que, dada uma matriz Mm×n, gere um vetor V de
	tamanho n, onde cada elemento do vetor consiste na soma dos elementos
	de uma coluna de M. Ou seja, o elemento V[0] consiste na soma dos
	elementos da primeira coluna de M, o elemento V[1] consiste na soma
	dos elementos da segunda coluna de M, e assim por diante.
*/

void soma(int mat[L][C], int vet[]);

int main(void)
{
    int mat[L][C], vet[C];

    preencherAleatorio(mat);
    printMat(mat);

    soma(mat, vet);
}

void soma(int mat[L][C], int vet[])
{
    int i,j, soma=0;;
    for(i=0;i<C;i++)
    {
        for(j=0;j<L;j++)
        {
            soma+=mat[j][i];
        }
        vet[i]=soma;
        soma=0;
    }

    for(i=0;i<C;i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
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
