#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 4
#define C 4

/*Desenvolver uma função que, dada uma matriz de
inteiros M10x10, troque de posição os elementos da
linha L com os valores da coluna C. Caso a troca seja
possível, a função deverá retornar a constante TRUE;
caso contrário, FALSE.*/

void printMat(int mat[L][C]);
void preencherAleatorio (int mat[L][C]);

int trocar(int mat[L][C], int linha, int coluna);

int main(void)
{
    int mat[L][C], linha, coluna;

    preencherAleatorio(mat);
    printMat(mat);

    printf("linha: ");
    scanf("%d", &linha);

    printf("coluna: ");
    scanf("%d", &coluna);

    if(trocar(mat, linha, coluna)==1)
    {
        printMat(mat);
    }else{
        printf("0");
    }
}

int trocar(int mat[L][C], int linha, int coluna)
{
    int i, j, aux1[L], aux2[C];

    for(i=0;i<L;i++)
    {
        aux1[i]=mat[linha][i];
        aux2[i]=mat[i][coluna];
    }
    for(i=0;i<L;i++)
    {
        mat[linha][i]=mat[i][coluna];
    }
    for(i=0;i<L;i++)
    {
        mat[i][coluna]=aux1[i];
    }
    for(i=0;i<L;i++)
    {
        if(mat[linha][i]!=aux2[i])
        {
            return 0;
        }
    }

    return 1;
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
